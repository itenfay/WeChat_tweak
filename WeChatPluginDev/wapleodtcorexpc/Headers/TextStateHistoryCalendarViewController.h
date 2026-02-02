//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TextStateCardListViewController, TextStateHistoryCalendarCollectionView, TextStateHistoryLogic, WCStoryFloatTopBar;

@interface TextStateHistoryCalendarViewController
{
    _Bool _canSelect;
    TextStateHistoryCalendarCollectionView *_collectionView;
    WCStoryFloatTopBar *_topBar;
    unsigned long long _enterTime;
    TextStateHistoryLogic *_historyLogic;
    TextStateCardListViewController *_cardListViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TextStateCardListViewController *cardListViewController; // @synthesize cardListViewController=_cardListViewController;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
@property(retain, nonatomic) TextStateHistoryLogic *historyLogic; // @synthesize historyLogic=_historyLogic;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) WCStoryFloatTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) TextStateHistoryCalendarCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)shouldLocateCalendarToItemAtIndexPath:(id)arg1;
- (void)shouldReloadCalendar;
- (void)shouldReloadCardList;
- (void)continueFetchDataIfNeeded;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionViewDidSelectStoryEntry:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectSectionAtIndex:(unsigned long long)arg2;
- (void)reportAction:(long long)arg1;
- (void)fetchDataWithNeedLoading:(_Bool)arg1;
- (void)refreshSceneSessionId;
- (void)initData;
- (void)initView;
- (_Bool)disableScrollViewBottomInsetAdjustment;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

