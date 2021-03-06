/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSCache, NSMapTable, NSString, VKResourceManager;

@interface VKTrafficIncidentImageManager : NSObject <GEOResourceManifestTileGroupObserver> {
    NSCache *_imageCache;
    VKResourceManager *_resourceManager;
    NSMapTable *_targetDisplayToProvider;
    unsigned int _tileGroupIdentifier;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedManager;

- (void)dealloc;
- (id)imageForIncidentType:(int)arg1 contentScale:(float)arg2 targetDisplay:(int)arg3;
- (id)imageForIncidentType:(int)arg1 contentScale:(float)arg2;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setIncidentIconProvider:(id)arg1 forTargetDisplay:(int)arg2;

@end
