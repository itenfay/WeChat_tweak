//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCMusicListenHistoryTitleView, WCMusicSearchReporter;
@protocol WCMusicListenHistoryViewControllerDelegate;

@interface WCMusicListenHistoryViewController
{
    double _collectionViewTopPadding;
    id <WCMusicListenHistoryViewControllerDelegate> _delegate;
    WCMusicSearchReporter *_reporter;
    WCMusicListenHistoryTitleView *_historyTitleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMusicListenHistoryTitleView *historyTitleView; // @synthesize historyTitleView=_historyTitleView;
@property(retain, nonatomic) WCMusicSearchReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <WCMusicListenHistoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double collectionViewTopPadding; // @synthesize collectionViewTopPadding=_collectionViewTopPadding;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didFinishLoadMoreData:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3 isFirstLoad:(_Bool)arg4;
- (void)processLoadMoreDataResult:(id)arg1 error:(id)arg2 isFirstLoad:(_Bool)arg3;
- (id)loadMoreData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportLoadFinishWithDataItems:(id)arg1;
- (double)cellWidth;
- (id)generateCollectionViewFlowLayout;
- (void)viewWillLayoutSubviews;
- (void)handleDeleteButtonClicked:(id)arg1;
- (void)setupCollectionViewContentEdgeInsets;
- (_Bool)useTransparentNavibar;
- (void)setupCollectionView;
- (void)viewDidLoad;

@end

