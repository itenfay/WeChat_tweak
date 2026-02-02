//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameHaowanMediaWrap, MMAlbumForGameHaowan, MMProgressViewEx, NSString, UICollectionView, WCPlayerPlayArgs, WCPlayerView;
@protocol GameVideoGalleryViewControllerDelagate;

@interface GameVideoGalleryViewController
{
    GameHaowanMediaWrap *_mediaWrap;
    WCPlayerPlayArgs *_playArgs;
    MMAlbumForGameHaowan *_album;
    long long _currentIndex;
    unsigned long long _galleryType;
    id _currentAsset;
    WCPlayerView *playerView;
    id <GameVideoGalleryViewControllerDelagate> _delegate;
    UICollectionView *_collectionView;
    MMProgressViewEx *_progressView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMProgressViewEx *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <GameVideoGalleryViewControllerDelagate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView;
- (id)buildTrackEventProps:(CDUnknownBlockType)arg1;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (void)trackEventSwitchVideo:(id)arg1 index:(long long)arg2;
- (void)trackEventShareHaowan:(id)arg1 index:(long long)arg2;
- (void)trackEventCloudTips:(id)arg1 appId:(id)arg2;
- (void)trackEventExit;
- (void)trackEventExplosured;
- (void)showNewUserTips;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)performCellAction:(long long)arg1 asset:(id)arg2;
- (void)playAVAsset:(id)arg1 url:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupCollectionView;
- (void)attachPlayerViewToCell:(id)arg1;
- (id)createPlayerView;
- (void)performAction;
- (void)askPerformAction;
- (void)goBack;
- (void)setupProgressView;
- (void)setupActionView;
- (void)setupGoBackView;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAlbum:(id)arg1 andIndex:(long long)arg2 galleryType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

