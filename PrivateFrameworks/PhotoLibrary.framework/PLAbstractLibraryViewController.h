/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PLAlbumStreamingOptionsViewController, UIImage, PLPhotosPickerSession, UIAlertView, PLSyncProgressView, NSDate, <PLAbstractLibraryViewControllerDelegate>, UIBarButtonItem, NSArray, NSString, NSObject<PLAlbumContainer>, PLAlbumStreamActivity, NSObject<PLAssetContainer>;

@interface PLAbstractLibraryViewController : UIViewController <PLAlbumStreamingOptionsViewControllerDelegate, PLAlbumStreamActivityDelegate, PLAlbumListChangeObserver, PLAlbumChangeObserver, PLPhotoLibraryShouldReloadObserver, PLDismissableViewController, PLPhotosPickerSessionParticipant> {
    struct NSObject { Class x1; } *_albumList;
    int _contentMode;
    struct NSObject { Class x1; } *_hiddenAlbum;
    struct NSObject { Class x1; } *_openAlbum;
    NSArray *_syncProgressAlbums;
    UIBarButtonItem *_customRightButton;
    UIAlertView *_createAlbumAlert;
    PLAlbumStreamingOptionsViewController *_albumSharingOptionsController;
    PLAlbumStreamActivity *_createSharedStreamActivity;
    <PLAbstractLibraryViewControllerDelegate> *_delegate;
    unsigned int _previousAlbumsCount;
    unsigned int _ignoreReorderNotificationCount;
    NSDate *_lastForegroundedDate;
    unsigned int _lastPendingCount;
    unsigned int _totalItemsCount;
    PLPhotosPickerSession *_currentPickerSession;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didSelectAlbumHandler;

    struct { 
        unsigned int hasContent : 1; 
        unsigned int allowsEditingAlbums : 1; 
        unsigned int albumsListViewInSync : 1; 
        unsigned int syncProgressVisible : 1; 
        unsigned int visible : 1; 
        unsigned int delegateImplementsShouldEnableAlbum : 1; 
        unsigned int reserved : 27; 
    } _alcFlags;
    UIImage *_listHeaderImage;
    NSString *_listHeaderLabel;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _listHeaderActionHandler;

}

@property(readonly) BOOL libraryViewVisible;
@property(readonly) int interfaceIdiom;
@property BOOL albumsListViewInSync;
@property(readonly) BOOL hasContent;
@property(retain) NSObject<PLAssetContainer> * openAlbum;
@property(readonly) PLSyncProgressView * syncProgressView;
@property(getter=isSyncProgressVisible) BOOL syncProgressVisible;
@property(readonly) NSObject<PLAlbumContainer> * albumList;
@property(readonly) int contentMode;
@property <PLAbstractLibraryViewControllerDelegate> * delegate;
@property BOOL allowsEditingAlbums;
@property(retain) NSObject<PLAssetContainer> * hiddenAlbum;
@property(retain) UIBarButtonItem * customRightButton;
@property(copy) id didSelectAlbumHandler;
@property(copy) NSString * listHeaderLabel;
@property(retain) UIImage * listHeaderImage;
@property(copy) id listHeaderActionHandler;
@property(retain) PLPhotosPickerSession * currentPickerSession;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (struct NSObject { Class x1; }*)albumList;
- (void)shouldReload:(id)arg1;
- (void)albumListDidChange:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (void)hideAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (void)setListHeaderActionHandler:(id)arg1;
- (void)setDidSelectAlbumHandler:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setListHeaderImage:(id)arg1;
- (void)setListHeaderLabel:(id)arg1;
- (void)setAllowsEditingAlbums:(BOOL)arg1;
- (void)albumStreamActivity:(id)arg1 didCreateAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)_updateHasContent;
- (void)_addLocalAlbum:(id)arg1;
- (void)_addStreamedAlbum:(id)arg1;
- (id)_syncProgressAlbums;
- (void)_updateAlbumsSortOrderIfNeeded;
- (void)_updateSyncProgress;
- (BOOL)albumsListViewInSync;
- (void)_updateAlbumsWithNotification:(id)arg1;
- (void)_appWillEnterForeground:(id)arg1;
- (void)setAlbumsListViewInSync:(BOOL)arg1;
- (BOOL)subtitleForAlbumAllowsEmail;
- (void)setOpenAlbum:(id)arg1;
- (void)dismissSharedStreamOptionsViewController;
- (void)presentSharedStreamOptionsViewController:(id)arg1;
- (void)cancelAddPhotosSessionAnimated:(BOOL)arg1;
- (void)beginAddPhotosSessionForAlbum:(id)arg1 didShowHandler:(id)arg2 completionHandler:(id)arg3;
- (void)updateAlbumListHeader;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (id)syncProgressView;
- (BOOL)isSyncProgressVisible;
- (id)visibleCellViewForAlbumAtIndex:(unsigned int)arg1;
- (BOOL)libraryViewVisible;
- (BOOL)updateInterfaceForDeletedAlbumIndexes:(id)arg1 addedIndexes:(id)arg2 changedIndexes:(id)arg3 isReordering:(BOOL)arg4 needsFullReload:(BOOL)arg5;
- (void)updateInterfaceForHasContentChange;
- (void)setHiddenAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)scrollToAlbumAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 select:(BOOL)arg3;
- (void)setHiddenAlbum:(id)arg1 animated:(BOOL)arg2;
- (id)customRightButton;
- (BOOL)allowsEditingAlbums;
- (void)updateNavigationItemButtons;
- (void)setAlbumList:(struct NSObject { Class x1; }*)arg1 contentMode:(int)arg2;
- (void)setCurrentPickerSession:(id)arg1;
- (BOOL)checkAndAlertSubscribedStreamsLimitReachedForAlbum:(id)arg1;
- (void)deleteAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)editStreamOptionsForAlbum:(id)arg1;
- (void)increaseIgnoreReorderNotificationCount;
- (id)listHeaderActionHandler;
- (BOOL)canNavigateIntoAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)showInvitationConfirmationForAlbum:(id)arg1;
- (id)didSelectAlbumHandler;
- (id)listHeaderImage;
- (struct NSObject { Class x1; }*)hiddenAlbum;
- (id)subtitleForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)listHeaderLabel;
- (id)openAlbum;
- (BOOL)albumIsDisplayedEnabled:(struct NSObject { Class x1; }*)arg1;
- (id)currentPickerSession;
- (void)navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (int)interfaceIdiom;
- (void)navigateToRevealAlbum:(struct NSObject { Class x1; }*)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)prepareForDismissingAnimated:(BOOL)arg1;
- (id)_suppresionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)addAlbum:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (BOOL)hasContent;
- (int)contentMode;
- (void)didReceiveMemoryWarning;

@end