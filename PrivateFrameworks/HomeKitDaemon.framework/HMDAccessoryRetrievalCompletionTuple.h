/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface HMDAccessoryRetrievalCompletionTuple : NSObject {
    id _completion;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy) id completion;
@property(retain) NSObject<OS_dispatch_queue> * queue;

+ (id)tupleWithQueue:(id)arg1 completion:(id)arg2;

- (void).cxx_destruct;
- (id)completion;
- (id)queue;
- (void)setCompletion:(id)arg1;
- (void)setQueue:(id)arg1;

@end
