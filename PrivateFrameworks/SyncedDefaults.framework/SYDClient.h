/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@class NSObject<OS_xpc_object>, NSString, NSObject<OS_dispatch_queue>;

@interface SYDClient : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSString *_bundleIdentifier;
    NSString *_storeIdentifier;
    BOOL _additionalSource;
}


- (void)dealloc;
- (void)sendMessageWithName:(id)arg1 replyHandler:(id)arg2;
- (id)sendMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)sendMessageWithName:(id)arg1;
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString { }*)arg2 storeIdentifier:(struct __CFString { }*)arg3;
- (void)_sendMessage:(id)arg1 replyHandler:(id)arg2;
- (id)_sendMessageWithReplySync:(id)arg1;
- (void)_sendMessageNoReply:(id)arg1;
- (id)_newMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_createConnectionIfNecessary;
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString { }*)arg2 storeIdentifier:(struct __CFString { }*)arg3 additionalSource:(BOOL)arg4;
- (void)shutdown;
- (void)_resetConnection;
- (void)finalize;

@end