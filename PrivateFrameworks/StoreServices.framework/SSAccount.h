/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSLock;

@interface SSAccount : NSObject <SSXPCCoding, NSCopying> {
    int _accountKind;
    NSString *_accountName;
    int _accountScope;
    int _accountSource;
    BOOL _active;
    BOOL _activeLockerAccount;
    int _availableServiceTypes;
    NSString *_creditsString;
    BOOL _demo;
    int _enabledServiceTypes;
    NSLock *_lock;
    NSString *_secureToken;
    NSString *_storeFrontID;
    NSNumber *_uniqueIdentifier;
}

@property int accountKind;
@property(copy) NSString * accountName;
@property int accountScope;
@property int availableServiceTypes;
@property(getter=isAuthenticated,readonly) BOOL authenticated;
@property(copy) NSString * creditsString;
@property int enabledServiceTypes;
@property(getter=isSocialEnabled) BOOL socialEnabled;
@property(copy) NSString * storeFrontIdentifier;
@property(retain) NSNumber * uniqueIdentifier;
@property int accountSource;
@property(copy) NSString * secureToken;
@property(getter=isDemoAccount) BOOL demoAccount;
@property(getter=isActive) BOOL active;
@property(getter=isActiveLockerAccount) BOOL activeLockerAccount;


- (void)setSocialEnabled:(BOOL)arg1;
- (void)removeEnabledServiceTypes:(int)arg1;
- (void)addEnabledServiceTypes:(int)arg1;
- (void)setAccountKind:(int)arg1;
- (void)setCreditsString:(id)arg1;
- (int)enabledServiceTypes;
- (int)accountKind;
- (BOOL)isActiveLockerAccount;
- (void)setSecureToken:(id)arg1;
- (id)secureToken;
- (void)setActiveLockerAccount:(BOOL)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (int)accountScope;
- (id)creditsString;
- (id)storeFrontIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)mergeValuesFromAccount:(id)arg1;
- (id)copyLockdownRepresentation;
- (void)resetTransientData;
- (void)removeAvailableServiceTypes:(int)arg1;
- (void)addAvailableServiceTypes:(int)arg1;
- (void)getPurchasedItemsForItems:(id)arg1 completionBlock:(id)arg2;
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id)arg1;
- (id)initDemoAccount;
- (void)setEnabledServiceTypes:(int)arg1;
- (void)setAvailableServiceTypes:(int)arg1;
- (void)setAccountSource:(int)arg1;
- (void)setAccountScope:(int)arg1;
- (int)accountSource;
- (BOOL)isSocialEnabled;
- (int)availableServiceTypes;
- (void)_sendBlockingXPCMessage:(id)arg1;
- (BOOL)isDemoAccount;
- (void)setDemoAccount:(BOOL)arg1;
- (void)setLockdownDictionary:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (BOOL)isAuthenticated;

@end