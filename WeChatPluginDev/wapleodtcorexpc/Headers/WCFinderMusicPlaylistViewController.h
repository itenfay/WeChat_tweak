//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UICollectionView, WCFinderStreamFooterView;
@protocol WCFindeProfileMusicSectionBase;

@interface WCFinderMusicPlaylistViewController
{
    _Bool _isAuthor;
    UICollectionView *_collectionView;
    WCFinderStreamFooterView *_footerView;
    id <WCFindeProfileMusicSectionBase> _viewModel;
    CDUnknownFunctionPointerType _cellUpdater;
    CDUnknownBlockType _clickAction;
    struct SDKReportInfo _reporter;
}

+ (id)playListVCWithCategory:(id)arg1 cellUpdater:(CDUnknownFunctionPointerType)arg2 clickAction:(CDUnknownBlockType)arg3 reporter:(struct SDKReportInfo)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct SDKReportInfo reporter; // @synthesize reporter=_reporter;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(nonatomic) CDUnknownFunctionPointerType cellUpdater; // @synthesize cellUpdater=_cellUpdater;
@property(retain, nonatomic) id <WCFindeProfileMusicSectionBase> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
- (void)bindPageSDKReport;
- (void)bindAlbumSDKReport:(id)arg1 item:(id)arg2;
- (void)onPlayList:(id)arg1 onLoadSuccess:(_Bool)arg2;
- (void)onPlayList:(id)arg1 appendDataAtRange:(struct _NSRange)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestMore;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

