//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetRecommendFeedsResp, GetRecommendFeedsResp_RecommendFeedsConfig, NSData, NSDate, NSString;
@protocol BTRecoFlowLogicDelegate;

@interface BTRecoFlowLogic : NSObject
{
    _Bool _recoFlowDisabled;
    _Bool _isMoreSubscribedMsgExpanded;
    _Bool _isSubscribedItemReachMaxNum;
    _Bool _latestSubscribedGroupMsgReachEnd;
    _Bool _allSubscribedMsgReachEnd;
    _Bool _isEdgeMarked;
    _Bool _markDidTryRefreshFirstScreenCache;
    _Bool _markForceToRefreshFirstScreenCache;
    _Bool _isFetching;
    _Bool _hasMoreData;
    _Bool _recoSwitchFromXLab;
    _Bool _hasSubscribedCardClickAction;
    unsigned int _sectionGapToPreload;
    unsigned int _fetchingEventId;
    int _fetchingScene;
    unsigned int _refreshFreq;
    unsigned int _subscribedCardClickActionCnt;
    id <BTRecoFlowLogicDelegate> _delegate;
    long long _edgeSectionIndex;
    long long _lastRecoCardClickIndex;
    GetRecommendFeedsResp *_cachedFirstScreenResp;
    NSData *_currentRequestBuffer;
    unsigned long long _dividingLineSequenceId;
    NSDate *_lastReqDateForSceneRefreshAfterClick;
    NSDate *_lastReqDateForSceneSupplement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastReqDateForSceneSupplement; // @synthesize lastReqDateForSceneSupplement=_lastReqDateForSceneSupplement;
@property(retain, nonatomic) NSDate *lastReqDateForSceneRefreshAfterClick; // @synthesize lastReqDateForSceneRefreshAfterClick=_lastReqDateForSceneRefreshAfterClick;
@property(nonatomic) unsigned int subscribedCardClickActionCnt; // @synthesize subscribedCardClickActionCnt=_subscribedCardClickActionCnt;
@property(nonatomic) _Bool hasSubscribedCardClickAction; // @synthesize hasSubscribedCardClickAction=_hasSubscribedCardClickAction;
@property(nonatomic) unsigned int refreshFreq; // @synthesize refreshFreq=_refreshFreq;
@property(nonatomic) _Bool recoSwitchFromXLab; // @synthesize recoSwitchFromXLab=_recoSwitchFromXLab;
@property(nonatomic) unsigned long long dividingLineSequenceId; // @synthesize dividingLineSequenceId=_dividingLineSequenceId;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSData *currentRequestBuffer; // @synthesize currentRequestBuffer=_currentRequestBuffer;
@property(nonatomic) int fetchingScene; // @synthesize fetchingScene=_fetchingScene;
@property(nonatomic) unsigned int fetchingEventId; // @synthesize fetchingEventId=_fetchingEventId;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) GetRecommendFeedsResp *cachedFirstScreenResp; // @synthesize cachedFirstScreenResp=_cachedFirstScreenResp;
@property(nonatomic) long long lastRecoCardClickIndex; // @synthesize lastRecoCardClickIndex=_lastRecoCardClickIndex;
@property(nonatomic) _Bool markForceToRefreshFirstScreenCache; // @synthesize markForceToRefreshFirstScreenCache=_markForceToRefreshFirstScreenCache;
@property(nonatomic) unsigned int sectionGapToPreload; // @synthesize sectionGapToPreload=_sectionGapToPreload;
@property(nonatomic) _Bool markDidTryRefreshFirstScreenCache; // @synthesize markDidTryRefreshFirstScreenCache=_markDidTryRefreshFirstScreenCache;
@property(nonatomic) long long edgeSectionIndex; // @synthesize edgeSectionIndex=_edgeSectionIndex;
@property(nonatomic) _Bool isEdgeMarked; // @synthesize isEdgeMarked=_isEdgeMarked;
@property(nonatomic) _Bool allSubscribedMsgReachEnd; // @synthesize allSubscribedMsgReachEnd=_allSubscribedMsgReachEnd;
@property(nonatomic) _Bool latestSubscribedGroupMsgReachEnd; // @synthesize latestSubscribedGroupMsgReachEnd=_latestSubscribedGroupMsgReachEnd;
@property(nonatomic) _Bool isSubscribedItemReachMaxNum; // @synthesize isSubscribedItemReachMaxNum=_isSubscribedItemReachMaxNum;
@property(nonatomic) _Bool isMoreSubscribedMsgExpanded; // @synthesize isMoreSubscribedMsgExpanded=_isMoreSubscribedMsgExpanded;
@property(nonatomic) _Bool recoFlowDisabled; // @synthesize recoFlowDisabled=_recoFlowDisabled;
@property(nonatomic) __weak id <BTRecoFlowLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)getCardItemMsgDownloadCoverImgArr:(id)arg1 withStyle:(int)arg2;
- (_Bool)canCardItemMsgDownloadCoverImage:(id)arg1;
- (void)clearRecoFlowCardClickAction;
- (void)markRecoFlowCardClickAction:(long long)arg1;
- (void)clearSubscribedCardClickAction;
- (void)markSubscribedCardClickAction;
@property(readonly, nonatomic) unsigned int subscribeMsgLimit;
@property(readonly, nonatomic) NSString *recommendFeedsWording;
@property(readonly, nonatomic) GetRecommendFeedsResp_RecommendFeedsConfig *config;
- (_Bool)shouldShowDividingLineViewWithSequenceId:(unsigned long long)arg1 isSectionLastNewMsgSection:(_Bool)arg2 isSectionFirstMsgSection:(_Bool)arg3 sectionData:(id)arg4;
- (unsigned long long)tryToGetDividingLineSequenceId;
- (void)tryToSetDividingLineSequenceId:(unsigned long long)arg1;
- (void)advancePreloadCanvasSectionIfNeed:(id)arg1;
- (void)downloadRecoFlowCoverImageIfNeeded:(id)arg1;
- (void)sendFeedBackReq:(id)arg1 selectedReasonArr:(id)arg2 exposedReasonArr:(id)arg3 sessionId:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)tryClearSpecifiedCacheCardMsgWithCardId:(id)arg1;
- (void)expandMoreSubscribedMsg;
- (_Bool)shouldLoadFlowData;
- (_Bool)hasMoreFlowData;
- (void)handleResp:(id)arg1 scene:(int)arg2 fromCache:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchTimeline:(int)arg1 fetchStartBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchTimeline:(int)arg1 fetchStartBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelFetching;
- (_Bool)canFetchTimelineForScene:(int)arg1;
- (id)loadFirstScreenCacheCards;
- (_Bool)isCachedFirstScreenExpired;
- (int)getBrandTimelineVCStayTime;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

