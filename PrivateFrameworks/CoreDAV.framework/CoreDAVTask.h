/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLConnection, <CoreDAVTaskManager>, NSHTTPURLResponse, NSURLRequest, NSMutableArray, NSData, CoreDAVErrorItem, NSError, NSDate, NSDictionary, CoreDAVRequestLogger, <CoreDAVAccountInfoProvider>, <CoreDAVResponseBodyParser>, <CoreDAVTaskDelegate>, NSMutableDictionary, NSURL;

@interface CoreDAVTask : NSObject <CoreDAVSubmittable> {
    <CoreDAVTaskManager> *_taskManager;
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    int _numDownloadedElements;
    int _depth;
    NSHTTPURLResponse *_response;
    NSURLConnection *_connection;
    NSURLRequest *_request;
    double _timeoutInterval;
    int _responseStatusCode;
    NSDate *_dateConnectionWentOut;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _finished;
    void *_context;
    BOOL _receivedBadPasswordResponse;
    BOOL _justTriedTokenAuth;
    BOOL _everTriedTokenAuth;
    BOOL _requestIsCompressed;
    BOOL _compressedRequestFailed;
    NSError *_passwordNotificationError;
    <CoreDAVResponseBodyParser> *_responseBodyParser;
    CoreDAVRequestLogger *_logger;
    NSURL *_url;
    BOOL _allowAutomaticRedirects;
    <CoreDAVTaskDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSError *_error;
    unsigned int _totalBytesReceived;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
    NSDictionary *_requestProperties;
    NSData *_fakeResponseData;
    BOOL _haveParsedFakeResponseData;
    CoreDAVErrorItem *_forbiddenErrorItem;
}

@property(copy) id requestProgressBlock;
@property(copy) id responseProgressBlock;
@property(copy) id completionBlock;
@property(retain) NSError * error;
@property(getter=isFinished,readonly) BOOL finished;
@property <CoreDAVTaskManager> * taskManager;
@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property <CoreDAVTaskDelegate> * delegate;
@property void* context;
@property int depth;
@property double timeoutInterval;
@property BOOL allowAutomaticRedirects;
@property(retain) <CoreDAVResponseBodyParser> * responseBodyParser;
@property(readonly) NSDictionary * responseHeaders;
@property int responseStatusCode;
@property(readonly) NSURL * url;
@property(retain) NSDictionary * requestProperties;
@property unsigned int totalBytesReceived;

+ (unsigned int)uniqueQueryID;
+ (id)stringFromDepth:(int)arg1;

- (id)requestProperties;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)reset;
- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)error;
- (void)setDepth:(int)arg1;
- (int)depth;
- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (void)_failImmediately;
- (void)_handleBadPasswordResponse;
- (void)tearDownResources;
- (id)httpMethod;
- (void)reportStatusWithError:(id)arg1;
- (int)numDownloadedElements;
- (void)setTaskManager:(id)arg1;
- (void)startModal;
- (id)requestBody;
- (id)taskManager;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (void)setResponseStatusCode:(int)arg1;
- (BOOL)allowAutomaticRedirects;
- (BOOL)shouldLogResponseBody;
- (id)responseProgressBlock;
- (void)setTotalBytesReceived:(unsigned int)arg1;
- (unsigned int)totalBytesReceived;
- (id)requestProgressBlock;
- (void)setResponseProgressBlock:(id)arg1;
- (void)setRequestProgressBlock:(id)arg1;
- (id)_applyStorageSession:(struct __CFURLStorageSession { }*)arg1 toRequest:(id)arg2;
- (BOOL)_includeGeneralHeaders;
- (id)_createBodyData;
- (id)_compressBodyData:(id)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)performCoreDAVTask;
- (id)requestBodyStream;
- (id)lastRedirectURL;
- (id)responseHeaders;
- (void)setAllowAutomaticRedirects:(BOOL)arg1;
- (int)responseStatusCode;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishEarlyWithError:(id)arg1;
- (void)submitWithTaskManager:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)responseBodyParser;
- (id)accountInfoProvider;
- (void)setAccountInfoProvider:(id)arg1;
- (BOOL)isFinished;
- (void)setCompletionBlock:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)url;
- (void)loadRequest:(id)arg1;
- (void)setContext:(void*)arg1;
- (void*)context;
- (void)setRequestProperties:(id)arg1;
- (void)setError:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;
- (unsigned int)cachePolicy;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)completionBlock;
- (BOOL)validate:(id*)arg1;
- (BOOL)markAsFinished;

@end