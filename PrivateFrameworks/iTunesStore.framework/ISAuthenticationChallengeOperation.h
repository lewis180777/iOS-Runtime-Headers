/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISAuthenticationChallenge;

@interface ISAuthenticationChallengeOperation : ISDialogOperation  {
    ISAuthenticationChallenge *_challenge;
}

@property(retain) ISAuthenticationChallenge * challenge;

+ (id)operationWithChallenge:(id)arg1;

- (id)_copyCredentialForSignInResponseDictionary:(id)arg1;
- (void)handleButtonSelected:(int)arg1 withResponseDictionary:(id)arg2;
- (void)setChallenge:(id)arg1;
- (id)challenge;
- (void)dealloc;
- (void)run;

@end