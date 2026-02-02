//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveSquareStyleInfo, MMFinderLiveFeedExtraInfoFetchLogic, NSMutableDictionary, NSString, WCFinderFeedFlowView, WCFinderLiveTabInfo;
@protocol WCFinderNearbyMoreLivePageViewModelDelegate;

@interface WCFinderNearbyMoreLivePageViewModel : NSObject
{
    _Bool _isPrefetchDiscard;
    _Bool _isExpandFollowFeed;
    _Bool _followLoadingHidden;
    _Bool _skipFeedsReport;
    _Bool _hasInitializeStyleInfo;
    int _fromScene;
    int _targetScene;
    id <WCFinderNearbyMoreLivePageViewModelDelegate> _delegate;
    unsigned long long _state;
    unsigned long long _refreshTime;
    WCFinderLiveTabInfo *_tabInfo;
    WCFinderLiveTabInfo *_jumpToTabInfo;
    WCFinderFeedFlowView *_feedFlowView;
    unsigned long long _selectTabId;
    FinderLiveSquareStyleInfo *_globalStyleInfo;
    MMFinderLiveFeedExtraInfoFetchLogic *_extraFetchLogic;
    NSString *_byPassInfo;
    unsigned long long _scene;
    NSMutableDictionary *_dataModels;
    unsigned long long _autoPlayFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long autoPlayFlag; // @synthesize autoPlayFlag=_autoPlayFlag;
@property(nonatomic) _Bool hasInitializeStyleInfo; // @synthesize hasInitializeStyleInfo=_hasInitializeStyleInfo;
@property(retain, nonatomic) NSMutableDictionary *dataModels; // @synthesize dataModels=_dataModels;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) int targetScene; // @synthesize targetScene=_targetScene;
@property(retain, nonatomic) MMFinderLiveFeedExtraInfoFetchLogic *extraFetchLogic; // @synthesize extraFetchLogic=_extraFetchLogic;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *globalStyleInfo; // @synthesize globalStyleInfo=_globalStyleInfo;
@property(nonatomic) _Bool skipFeedsReport; // @synthesize skipFeedsReport=_skipFeedsReport;
@property(nonatomic) unsigned long long selectTabId; // @synthesize selectTabId=_selectTabId;
@property(nonatomic) __weak WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) _Bool followLoadingHidden; // @synthesize followLoadingHidden=_followLoadingHidden;
@property(nonatomic) _Bool isExpandFollowFeed; // @synthesize isExpandFollowFeed=_isExpandFollowFeed;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool isPrefetchDiscard; // @synthesize isPrefetchDiscard=_isPrefetchDiscard;
@property(retain, nonatomic) WCFinderLiveTabInfo *jumpToTabInfo; // @synthesize jumpToTabInfo=_jumpToTabInfo;
@property(retain, nonatomic) WCFinderLiveTabInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderNearbyMoreLivePageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)refreshHighlightTagExtraInfoItems;
- (void)onLimitedModeChanged;
- (void)resetExposeSession;
- (void)removeIndexPathData:(id)arg1;
- (void)removeSectionData:(unsigned long long)arg1;
- (id)indexPathInCurrentSubTabWithTid:(id)arg1;
- (void)removeDataItem:(id)arg1;
- (void)contentDislikeFeedback:(id)arg1;
- (void)selectSubTab:(id)arg1 isToggle:(_Bool)arg2 willSwitchBlock:(CDUnknownBlockType)arg3;
- (void)_fetchRecommendRelatedListWithDataItem;
@property(readonly, nonatomic) _Bool isFetchRelatedListCgiFinish;
- (void)checkReadyAnimateRelatedListRecommendData;
- (void)cancelDelayFetchRecommendRelatedList;
- (void)startDelayFetchRecommendRelatedList:(id)arg1;
- (_Bool)isFromSceneCanProcessRedDot;
@property(nonatomic) unsigned long long autoPlayEduViewShowCount;
- (long long)getDisplayIndexWithTid:(id)arg1;
- (id)requestTabInfoWithDataModel:(id)arg1;
@property(nonatomic) _Bool hasEndLiveNeedRefresh;
@property(readonly, nonatomic) _Bool isFetchingFollowDataFinish;
@property(nonatomic) _Bool isFetchingFollowData;
@property(readonly, nonatomic) WCFinderLiveTabInfo *selectTabInfo;
@property(readonly, nonatomic) _Bool isStartFetchingFollowData;
@property(readonly, nonatomic) _Bool isFetchingData;
@property(readonly, nonatomic) _Bool continueFlag;
- (id)getUnreadDataItems;
- (_Bool)isPrefetchTypeWith:(unsigned long long)arg1;
- (void)updateState;
- (_Bool)hasChangeDataWithOldArray:(id)arg1 dataArray:(id)arg2;
- (id)convertDataArrayToSectioInfos:(id)arg1;
- (id)tranformDataItemArray:(id)arg1;
- (void)fetchMoreFollowFeed:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2;
- (id)highlightTag:(unsigned long long)arg1 fromBundle:(id)arg2;
- (void)fillHighlightTags:(id)arg1 fromBundle:(id)arg2;
- (_Bool)autoPlayFirstRow;
- (void)fetchMoreDataWithPullType:(unsigned long long)arg1;
- (void)refreshDataFromTop;
- (void)fetchMoreData;
- (_Bool)isFeedFollowFold:(id)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (id)bottomLayoutContentVMInSection:(unsigned long long)arg1;
- (id)layoutContentVMInSection:(unsigned long long)arg1;
- (id)followFoldCardArray:(id)arg1;
- (id)getFollowBtnSuffixWithVM:(id)arg1;
- (id)getFollowBtnPrefixWithVM:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
- (long long)followSectionNumber;
- (unsigned long long)numberOfItemInSectionFollowArray:(unsigned long long)arg1;
- (unsigned long long)numberOfItemInSectionDataArray:(unsigned long long)arg1;
- (unsigned long long)numberOfItemInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSection;
- (_Bool)hasNoData;
- (void)filteAllEndLive;
- (void)initSubTabDataModelWithTabInfo:(id)arg1;
- (void)initTabDataModelWithTabInfo:(id)arg1;
- (void)initExtraLogic;
- (id)initWithLiveTabInfo:(id)arg1 fromScene:(int)arg2 targetScene:(int)arg3 byPassInfo:(id)arg4 scene:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

