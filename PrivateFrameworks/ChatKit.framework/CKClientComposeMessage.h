/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDate, NSError, CKEntity, NSCalendarDate, CKConversation, NSDictionary, NSString, IMService, NSAttributedString, NSArray;

@interface CKClientComposeMessage : NSObject <CKMessage> {
    NSArray *_recipients;
    NSArray *_parts;
    NSAttributedString *_subject;
    NSString *_markup;
    NSString *_text;
    NSCalendarDate *_calendarDate;
    double _date;
    NSString *_guid;
    NSDictionary *_attachmentParts;
}

@property(readonly) NSString * markup;
@property(readonly) NSDictionary * attachmentParts;
@property(readonly) NSString * text;
@property(retain) NSArray * recipients;
@property(readonly) NSString * previewText;
@property(readonly) NSString * guid;
@property(readonly) NSString * address;
@property(readonly) NSAttributedString * subject;
@property CKConversation * conversation;
@property(readonly) IMService * service;
@property(readonly) NSArray * parts;
@property(readonly) NSCalendarDate * calendarDate;
@property(readonly) NSDate * timeRead;
@property(readonly) CKEntity * sender;
@property(readonly) NSError * error;
@property BOOL isFromDowngrading;
@property(readonly) BOOL hasBeenSent;
@property(readonly) BOOL failedSend;
@property(readonly) BOOL wantsSendStatus;
@property(readonly) BOOL isiMessage;
@property(readonly) BOOL isSMS;
@property(readonly) BOOL partiallyFailedSend;
@property(readonly) BOOL isPlaceholder;
@property(readonly) BOOL isTypingIndicator;
@property(readonly) BOOL isDelivered;
@property(readonly) BOOL isWaitingForDelivery;
@property(readonly) BOOL isFromFilteredSender;
@property(readonly) BOOL isOutgoing;
@property(readonly) BOOL isFromMe;
@property(readonly) BOOL supportsDeliveryReceipts;
@property(readonly) BOOL isRead;
@property(readonly) BOOL hasAttachments;
@property(readonly) BOOL isToEmailAddress;
@property(readonly) BOOL shouldPlayReceivedTone;
@property(readonly) unsigned int messagePartCount;
@property(readonly) int sequenceNumber;
@property(readonly) int outgoingBubbleColor;
@property(readonly) int rowID;
@property(readonly) float percentComplete;
@property(readonly) int pendingCount;
@property(readonly) int sentCount;
@property(readonly) int failedSendCount;


- (BOOL)isTypingIndicator;
- (id)guid;
- (void)dealloc;
- (BOOL)isPlaceholder;
- (id)error;
- (id)recipients;
- (id)service;
- (id)markup;
- (id)attachmentParts;
- (id)initWithMarkup:(id)arg1 parts:(id)arg2 attachmentParts:(id)arg3 subject:(id)arg4 guid:(id)arg5;
- (BOOL)shouldPlayReceivedTone;
- (BOOL)supportsDeliveryReceipts;
- (BOOL)isFromFilteredSender;
- (BOOL)isWaitingForDelivery;
- (void)resetParts;
- (void)loadParts;
- (int)sentCount;
- (int)failedSendCount;
- (int)pendingCount;
- (BOOL)hasBeenSent;
- (BOOL)wantsSendStatus;
- (BOOL)isFromDowngrading;
- (BOOL)isFirstDisplayablePart:(id)arg1;
- (unsigned int)messagePartCount;
- (int)outgoingBubbleColor;
- (id)previewText;
- (BOOL)isOutgoing;
- (void)setIsFromDowngrading:(BOOL)arg1;
- (BOOL)isToEmailAddress;
- (BOOL)isSMS;
- (id)parts;
- (BOOL)isiMessage;
- (id)timeRead;
- (BOOL)isDelivered;
- (BOOL)isRead;
- (BOOL)isFromMe;
- (void)deleteMessageParts:(id)arg1;
- (BOOL)containsAllDisplayableMessageParts:(id)arg1;
- (void)setConversation:(id)arg1;
- (BOOL)partiallyFailedSend;
- (BOOL)failedSend;
- (id)conversation;
- (id)subject;
- (id)calendarDate;
- (id)sender;
- (id)text;
- (int)sequenceNumber;
- (void)setGroupID:(id)arg1;
- (id)groupID;
- (id)address;
- (float)percentComplete;
- (BOOL)hasAttachments;
- (int)rowID;
- (void)setRecipients:(id)arg1;

@end