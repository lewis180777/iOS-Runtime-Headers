/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface _NSCoreDataException : NSException  {
    long _code;
    NSString *_domain;
}

+ (id)exceptionWithName:(id)arg1 code:(long)arg2 reason:(id)arg3 userInfo:(id)arg4;

- (void)dealloc;
- (long)code;
- (id)domain;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (void)_setDomain:(id)arg1;
- (id)initWithName:(id)arg1 code:(long)arg2 reason:(id)arg3 userInfo:(id)arg4;

@end