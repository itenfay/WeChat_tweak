//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCMusicFooterHintView, WCMusicSearchContext, WCMusicSearchHintView;

@interface WCMusicSearchBaseViewController
{
    WCMusicSearchContext *_searchContext;
    unsigned long long _lastRequestId;
    WCMusicSearchHintView *_hintView;
    WCMusicFooterHintView *_currentFooterView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCMusicFooterHintView *currentFooterView; // @synthesize currentFooterView=_currentFooterView;
@property(retain, nonatomic) WCMusicSearchHintView *hintView; // @synthesize hintView=_hintView;
@property(nonatomic) unsigned long long lastRequestId; // @synthesize lastRequestId=_lastRequestId;
@property(retain, nonatomic) WCMusicSearchContext *searchContext; // @synthesize searchContext=_searchContext;
- (_Bool)showFooterView;
- (id)collectionVeiwCellForDataItem:(id)arg1 reuseCell:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)checkEmptyHintViewDisplayStatus;
- (void)startListLoading;
- (void)didFinishLoadMoreData:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3 isFirstLoad:(_Bool)arg4;
- (void)processLoadMoreDataResult:(id)arg1 error:(id)arg2 isFirstLoad:(_Bool)arg3;
- (unsigned long long)loadWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)loadMoreData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelSearchWithLastReqeustId:(unsigned long long)arg1;
- (void)cancelSearch;
- (void)doSearch;
- (id)generateEmptyHintView;
- (id)generateCollectionViewFlowLayout;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (Class)collectionViewCellClass;
- (void)doSearchWithContext:(id)arg1;

@end

