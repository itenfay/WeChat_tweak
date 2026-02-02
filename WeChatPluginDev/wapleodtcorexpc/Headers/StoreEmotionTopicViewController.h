//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreFootView, EmotionBannerSet, EmotionStoreRecList, LoopPageScrollView, MMLoadingView, MMTableView, NSMutableArray, NSString, ShareMessageConfirmLogicHelper, StoreEmotionGetEmotionListCgi, StoreEmotionPageShareLogic;

@interface StoreEmotionTopicViewController
{
    LoopPageScrollView *_bannerView;
    MMTableView *_tableView;
    EmoticonStoreFootView *_tailView;
    EmotionBannerSet *_storeAd;
    NSMutableArray *_topicEmotionList;
    ShareMessageConfirmLogicHelper *_shareMessageHelper;
    MMLoadingView *_shareLoadingView;
    StoreEmotionGetEmotionListCgi *m_getEmotionListCgi;
    StoreEmotionPageShareLogic *m_shareLogic;
    EmotionStoreRecList *m_recommendRecord;
    long long m_extranceScene;
    _Bool _didLoadData;
    unsigned long long _sessionId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didLoadData; // @synthesize didLoadData=_didLoadData;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
- (void)OnEmotionChartsCellTapButton:(id)arg1;
- (void)didTapPageAtNum:(unsigned int)arg1;
- (void)didChangeToPage:(unsigned int)arg1;
- (int)totalNumOfPage;
- (id)viewForPage:(id)arg1 pageNum:(unsigned int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reportExpose;
- (void)onOperate:(id)arg1;
- (void)setupRightBarButton;
- (void)reloadData;
- (void)setupNoContentView;
- (void)initTableFooterView;
- (void)setupTableView;
- (void)setupViews;
- (void)setupData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithRecommendRecord:(id)arg1 entrance:(long long)arg2;
- (id)initWithBannerSet:(id)arg1 extrance:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

