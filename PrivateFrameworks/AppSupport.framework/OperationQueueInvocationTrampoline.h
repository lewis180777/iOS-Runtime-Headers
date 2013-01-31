/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline  {
    NSOperationQueue *_queue;
    int _priority;
}


- (void)dealloc;
- (id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(int)arg3;
- (void)forwardInvocation:(id)arg1;

@end