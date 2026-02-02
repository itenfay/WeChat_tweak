//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderMusicPlaylistTabPage
{
}

- (id)viewForCarousel:(id)arg1 indexPath:(id)arg2 index:(long long)arg3;
- (void)onReceiveMusicEventRefreshList;
- (void)onLaunchManageMusicLiteApp;
- (void)onLaunchPostMusicLiteApp;
- (void)onProfileMusicPostTabSelectManageMusic:(id)arg1;
- (void)onProfileMusicPostTabSelectPostMusic:(id)arg1;
- (void)onProfileMusicFullPostViewClicked:(id)arg1;
- (long long)numbersForCarousel:(id)arg1;
- (void)onPlayList:(id)arg1 onLoadSuccess:(_Bool)arg2;
- (void)onPlayListBeginFetchData:(id)arg1;
- (void)onPlayListClickMore:(id)arg1;
- (void)onClickMoreCell:(id)arg1;
- (void)playListCell:(id)arg1 onClickCellAtIndex:(long long)arg2;
- (struct WCFinderProfilePlaylistItem)playListCell:(id)arg1 itemAtIndex:(long long)arg2;
- (long long)numberOfPlayListCell:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (void)_onClickPlayList:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)bindHeaderMoreSDKReport:(id)arg1 view:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)isMoreCellAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

