//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderStreamFooterView;

@interface WCFinderProfileAudioPage
{
    WCFinderStreamFooterView *_footerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
- (void)onReceiveAudioEventRefreshList;
- (void)onLaunchManageMusicLiteApp;
- (void)onLaunchPostAudioLiteApp;
- (void)onProfileAudioPostTabSelectManage:(id)arg1;
- (void)onProfileAudioPostTabSelectPost:(id)arg1;
- (double)originY30percent;
- (double)getScrollViewOriginY30percent:(id)arg1;
- (void)onProfileAudioFullPostViewClicked:(id)arg1;
- (void)profileAudioSectionDataChanged;
- (void)onLoadingStateChanged:(id)arg1;
- (void)onClickAllCollection:(id)arg1;
- (void)onClickAllAudio:(id)arg1;
- (void)playListCell:(id)arg1 onClickCellAtIndex:(long long)arg2;
- (struct WCFinderProfilePlaylistItem)playListCell:(id)arg1 itemAtIndex:(long long)arg2;
- (long long)numberOfPlayListCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)updateFooterView;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)shouldShowCountForSection:(id)arg1;
- (_Bool)isSectionAudioListAppendMoreSecs;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillApear;
- (void)viewDidLoad;
- (void)audioPageModelDataChanged:(id)arg1;
- (id)loadView;
- (void)dealloc;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

