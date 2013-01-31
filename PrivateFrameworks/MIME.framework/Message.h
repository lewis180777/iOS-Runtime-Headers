/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSArray, MessageStore, NSString;

@interface Message : NSObject <NSCopying> {
    MessageStore *_store;
    unsigned long _preferredEncoding;
    NSString *_senderAddressComment;
    unsigned int _dateSentInterval;
    unsigned int _dateReceivedInterval;
    unsigned long long _generationNumber;
    NSString *_subject;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSArray *_sender;
    NSString *_contentType;
    long long _messageIDHeaderHash;
    long long _conversationID;
    NSString *_summary;
    NSString *_externalID;
    unsigned int _calculatedAttachmentInfo : 1;
    unsigned short _numberOfAttachments;
}

+ (void)setMessageClassForStore:(id)arg1;
+ (Class)dataMessageStoreToUse;
+ (id)messageWithRFC822Data:(id)arg1;

- (id)summary;
- (id)headers;
- (id)path;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)contentType;
- (void)setTo:(id)arg1;
- (id)to;
- (id)persistentID;
- (void)setMessageInfoFromMessage:(id)arg1;
- (id)dataForMimePart:(id)arg1;
- (int)generationCompare:(id)arg1;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)messageIDHeaderInFortyBytesOrLess;
- (id)cc;
- (void)setMessageIDHash:(long long)arg1;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (id)externalID;
- (void)setConversationID:(long long)arg1;
- (void)setExternalID:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10;
- (id)bccIfCached;
- (id)ccIfCached;
- (id)toIfCached;
- (id)sendersIfCached;
- (void)setGenerationNumber:(unsigned long long)arg1;
- (id)messageDataIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2;
- (long long)conversationID;
- (id)dateReceived;
- (id)dateSent;
- (id)firstSender;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (unsigned long long)generationNumber;
- (void)setMessageStore:(id)arg1;
- (BOOL)isLibraryMessage;
- (BOOL)canBeDeleted;
- (id)dataConsumerForMimePart:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (id)preferredEmailAddressToReplyWith;
- (id)dataPathForMimePart:(id)arg1;
- (id)refreshedMessage;
- (id)remoteID;
- (id)messageID;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (id)senders;
- (id)headersIfAvailable;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageData;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (id)messageStore;
- (id)senderAddressComment;
- (double)dateSentAsTimeIntervalSince1970;
- (double)dateReceivedAsTimeIntervalSince1970;
- (unsigned int)messageSize;
- (unsigned short)numberOfAttachments;
- (void)calculateAttachmentInfoFromBody:(id)arg1;
- (BOOL)calculatedNumberOfAttachments;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (unsigned long)preferredEncoding;
- (BOOL)isMessageContentsLocallyAvailable;
- (id)messageIDHeader;
- (id)headerData;
- (id)cachedAttributes;
- (void)setNumberOfAttachments:(unsigned int)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3;
- (id)bodyDataIsComplete:(BOOL*)arg1;
- (BOOL)needsDateReceived;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (id)headerDataDownloadIfNecessary:(BOOL)arg1;
- (id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2;
- (long long)_messageIDHeaderHashIvar;
- (id)bcc;
- (id)uniqueArray:(id)arg1 withStore:(id)arg2;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)setBcc:(id)arg1;
- (id)_copyDateFromDateHeaderInHeaders:(id)arg1;
- (id)_copyDateFromReceivedHeadersInHeaders:(id)arg1;
- (BOOL)_doesDateAppearToBeSane:(id)arg1;
- (long long)messageIDHash;
- (void)setCc:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (unsigned long)uid;
- (id)additionalHeadersForForward;
- (id)additionalHeadersForReply;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
- (id)defaultAlternativeInPart:(id)arg1;
- (id)bestAlternativeInPart:(id)arg1;
- (id)bodyData;
- (void)setSender:(id)arg1;

@end