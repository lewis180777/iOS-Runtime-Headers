/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector  {
    struct __CFRunLoopTimer { } *_timer;
    id _key;
    BOOL _isCancelled;
    BOOL _isPending;
    id _object;
    NSLock *_lock;
    BOOL _createdTimer;
}

+ (void)_runThread;
+ (void)initialize;

- (void)invalidate;
- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (oneway void)release;
- (void)dispatchAfterDelay:(double)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (void)_dispatchSCRCThread;
- (void)_dispatchMainThread;
- (void)_dispatch;
- (id)threadKey;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (BOOL)_createdTimer;
- (BOOL)isPending;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end