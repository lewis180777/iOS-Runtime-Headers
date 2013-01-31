/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSOperationQueue, IMAVChatParticipant, NSTimer, NSDictionary, NSString, IMAVChat, IMHandle, NSData;

@interface IMAVChatParticipant : NSObject  {
    unsigned int _state;
    BOOL _sendingAudio;
    BOOL _sendingVideo;
    NSData *_localICEData;
    BOOL _sendingAuxVideo;
    BOOL _audioMuted;
    BOOL _videoPaused;
    BOOL _isAOLInterop;
    BOOL _usingICE;
    BOOL _networkStalled;
    BOOL _videoDegraded;
    BOOL _mediaStalled;
    BOOL _isRecording;
    NSString *_vcPartyID;
    int _avRelayStatus;
    unsigned int _cameraType;
    unsigned int _cameraOrientation;
    IMHandle *_imHandle;
    IMHandle *_inviter;
    IMAVChat *_avChat;
    BOOL _isInitiator;
    unsigned int _chatEndedReason;
    int _chatError;
    int _ardRole;
    NSDictionary *_properties;
    NSDictionary *_preemptiveRelayRequest;
    NSDictionary *_preemptiveRelayUpdate;
    NSData *_remoteICEData;
    NSOperationQueue *_messagingQueue;
    NSString *_conferenceID;
    struct CGSize { 
        float width; 
        float height; 
    } _remotePortraitOrientation;
    struct CGSize { 
        float width; 
        float height; 
    } _remoteLandscapeOrientation;
    NSString *_rawErrorString;
    NSString *_errorString;
    BOOL _inviteDelivered;
    NSTimer *_connectTimeoutTimer;
    struct CGSize { 
        float width; 
        float height; 
    } _remotePIPPortraitOrientation;
    struct CGSize { 
        float width; 
        float height; 
    } _remotePIPLandscapeOrientation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _remotePortraitContentRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _remoteLandscapeContentRect;
    unsigned int __screenOrientation;
}

@property(readonly) NSString * rawErrorString;
@property(readonly) NSString * errorString;
@property(readonly) IMAVChatParticipant * remoteErrorParticipant;
@property void* videoLayer;
@property void* videoBackLayer;
@property(setter=setAudioMuted:) BOOL isAudioMuted;
@property(setter=setVideoPaused:) BOOL isVideoPaused;
@property(readonly) BOOL isSendingAudio;
@property(readonly) BOOL isSendingVideo;
@property(readonly) BOOL isVideoDegraded;
@property(readonly) BOOL isMediaStalled;
@property(setter=setSendingAuxVideo:) BOOL isSendingAuxVideo;
@property(readonly) IMHandle * imHandle;
@property(readonly) IMHandle * invitedBy;
@property IMAVChat * avChat;
@property(readonly) NSString * name;
@property(readonly) BOOL isInitiator;
@property(readonly) BOOL isLocalParticipant;
@property(readonly) unsigned int reasonChatEnded;
@property int error;
@property unsigned int state;
@property(setter=setARDRole:) int ardRole;
@property(setter=setRecording:) BOOL isRecording;
@property(setter=setAVRelayStatus:) int avRelayStatus;
@property(setter=setNetworkStalled:) BOOL isNetworkStalled;
@property(setter=setVideoDegraded:) BOOL isVideoDegraded;
@property(setter=setMediaStalled:) BOOL isMediaStalled;
@property(setter=setAOLInterop:) BOOL isAOLInterop;
@property(setter=setVCPartyID:,retain) NSString * vcPartyID;
@property NSData * remoteICEData;
@property(setter=_setInviteDelivered:) BOOL _inviteDelivered;
@property(setter=_setRawErrorString:,retain) NSString * _rawErrorString;
@property(setter=_setErrorString:,retain) NSString * _errorString;
@property(setter=_setConnectTimeoutTimer:,retain) NSTimer * _connectTimeoutTimer;
@property(setter=_setLocalICEData:,retain) NSData * _localICEData;
@property(setter=_setConferenceID:,retain) NSString * _conferenceID;
@property(setter=_setMessagingQueue:,retain) NSOperationQueue * _messagingQueue;
@property(retain) NSDictionary * properties;
@property(setter=_setRemoteLandscapeOrientation:) struct CGSize { float x1; float x2; } _remoteLandscapeOrientation;
@property(setter=_setRemotePortraitOrientation:) struct CGSize { float x1; float x2; } _remotePortraitOrientation;
@property(setter=_setRemotePIPLandscapeOrientation:) struct CGSize { float x1; float x2; } _remotePIPLandscapeOrientation;
@property(setter=_setRemotePIPPortraitOrientation:) struct CGSize { float x1; float x2; } _remotePIPPortraitOrientation;
@property(setter=_setRemotePortraitContentRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _remotePortraitContentRect;
@property(setter=_setRemoteLandscapeContentRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _remoteLandscapeContentRect;
@property(setter=_setPreemptiveRelayInitate:,retain) NSDictionary * _preemptiveRelayInitate;
@property(setter=_setPreemptiveRelayUpdate:,retain) NSDictionary * _preemptiveRelayUpdate;
@property(setter=_setCameraType:) unsigned int cameraType;
@property(setter=_setCameraOrientation:) unsigned int cameraOrientation;
@property(setter=_setScreenOrientation:) unsigned int _screenOrientation;
@property(setter=setAudioMuted:) BOOL isAudioMuted;
@property(setter=setVideoPaused:) BOOL isVideoPaused;
@property(readonly) BOOL isSendingAudio;
@property(readonly) BOOL isSendingVideo;
@property(setter=setSendingAuxVideo:) BOOL isSendingAuxVideo;
@property(readonly) BOOL isUsingICE;


- (void)_enqueueOperation:(id)arg1;
- (unsigned int)state;
- (void)setProperties:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)_setCameraOrientation:(unsigned int)arg1;
- (unsigned int)cameraOrientation;
- (int)error;
- (unsigned int)cameraType;
- (void)setVideoBackLayer:(void*)arg1;
- (void*)videoBackLayer;
- (void)setVideoLayer:(void*)arg1;
- (id)errorString;
- (id)rawErrorString;
- (id)errorStringFor:(int)arg1;
- (void)_generateErrorStrings;
- (void)_getErrorString:(id*)arg1 rawString:(id*)arg2 forError:(int)arg3;
- (id)remoteErrorParticipant;
- (void)sendRelayProposal;
- (void)_connectTimeout:(id)arg1;
- (void)resetWaitingToConnectTimer;
- (void)_setScreenOrientation:(unsigned int)arg1;
- (unsigned int)_screenOrientation;
- (void)_setRemoteLandscapeContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_remoteLandscapeContentRect;
- (void)_setRemotePortraitContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_remotePortraitContentRect;
- (void)_setRemotePIPLandscapeOrientation:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_remotePIPLandscapeOrientation;
- (void)_setRemotePIPPortraitOrientation:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_remotePIPPortraitOrientation;
- (void)_setConnectTimeoutTimer:(id)arg1;
- (id)_connectTimeoutTimer;
- (void)_setErrorString:(id)arg1;
- (id)_errorString;
- (void)_setRawErrorString:(id)arg1;
- (id)_rawErrorString;
- (void)_setRemoteLandscapeOrientation:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_remoteLandscapeOrientation;
- (void)_setRemotePortraitOrientation:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_remotePortraitOrientation;
- (void)_setMessagingQueue:(id)arg1;
- (id)_messagingQueue;
- (void)_setPreemptiveRelayUpdate:(id)arg1;
- (id)_preemptiveRelayUpdate;
- (void)_setPreemptiveRelayInitate:(id)arg1;
- (id)_preemptiveRelayInitate;
- (void)setARDRole:(int)arg1;
- (void)_setChatError:(int)arg1;
- (void)setRecording:(BOOL)arg1;
- (void)setMediaStalled:(BOOL)arg1;
- (BOOL)isMediaStalled;
- (void)setVideoDegraded:(BOOL)arg1;
- (BOOL)isVideoDegraded;
- (void)setNetworkStalled:(BOOL)arg1;
- (BOOL)isNetworkStalled;
- (BOOL)isAOLInterop;
- (void)setVideoPaused:(BOOL)arg1;
- (BOOL)isVideoPaused;
- (void)setAudioMuted:(BOOL)arg1;
- (BOOL)isAudioMuted;
- (void)setSendingAuxVideo:(BOOL)arg1;
- (BOOL)isSendingAuxVideo;
- (void)_setLocalICEData:(id)arg1;
- (id)_localICEData;
- (struct CGSize { float x1; float x2; })aspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)_switchToUseNewIMHandle:(id)arg1;
- (id)rebuildLocalICEData;
- (void)requestIconIfNecessary;
- (id)initWithStatusNugget:(id)arg1 andChat:(id)arg2 account:(id)arg3;
- (struct CGSize { float x1; float x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)_processPropertyUpdate:(id)arg1;
- (void)_setState:(unsigned int)arg1 withReason:(unsigned int)arg2 andError:(int)arg3;
- (BOOL)isInitiator;
- (void)_setInviteDelivered:(BOOL)arg1;
- (BOOL)_inviteDelivered;
- (BOOL)isLocalParticipant;
- (id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(BOOL)arg3 sendingVideo:(BOOL)arg4 usingICE:(BOOL)arg5 toChat:(id)arg6 inState:(unsigned int)arg7 withError:(int)arg8 andReason:(unsigned int)arg9 andVCPartyID:(id)arg10 account:(id)arg11;
- (void)_setCameraType:(unsigned int)arg1;
- (void)setAVChat:(id)arg1;
- (void)sendAVMessage:(unsigned int)arg1 userInfo:(id)arg2;
- (void)receivedRelayProposalAcceptWithConnectionData:(id)arg1;
- (void)receivedRelayProposalRequestWithConnectionData:(id)arg1;
- (void)_handleIMAVResponse:(unsigned int)arg1;
- (void)sendCounterProposal;
- (id)remoteICEData;
- (void)sendResponse:(unsigned int)arg1;
- (void)setAOLInterop:(BOOL)arg1;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4;
- (void)sendVCUpdate;
- (void)sendInvitation;
- (id)statusNugget;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 toChat:(id)arg4 account:(id)arg5;
- (void)setStateToEndedWithReason:(unsigned int)arg1 andError:(int)arg2;
- (id)_natType;
- (void)disconnectFromAVChat;
- (void)_cancelMessagesQueue;
- (void)_flushMessagesQueue;
- (void)setAVRelayStatus:(int)arg1;
- (void)setRemoteICEData:(id)arg1;
- (void)_noteInviteDelivered;
- (void)_updateProperties:(id)arg1;
- (void)cancelInvitation;
- (void)_setConferenceID:(id)arg1;
- (void)setVCPartyID:(id)arg1;
- (int)ardRole;
- (unsigned int)reasonChatEnded;
- (BOOL)isSendingVideo;
- (BOOL)isSendingAudio;
- (id)vcPartyID;
- (void)setWaitingToConnect:(BOOL)arg1;
- (int)avRelayStatus;
- (id)imHandle;
- (id)avChat;
- (id)_conferenceID;
- (BOOL)isUsingICE;
- (id)getLocalICEData;
- (id)properties;
- (void)setState:(unsigned int)arg1;
- (void*)videoLayer;
- (id)invitedBy;
- (void)_setError:(int)arg1;
- (BOOL)isRecording;

@end