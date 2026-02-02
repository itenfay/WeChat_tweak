//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, WCDataItem, WCTimelineBatchGetFeedsCGI, WCTimelineMissReadBreakLayerExposureRecord, WCTimelineMissReadJumpBtnClickReportRecord, WCTimelineMissReadRecord;

@interface WCTimelineMissReadMgr
{
    _Bool _isSupport;
    _Bool _usePlainExposureMethod;
    _Bool _minContinueFeedsSatisfy;
    _Bool _isFakeScrollingToUnread;
    _Bool _isJumpToFirstMissReadRecord;
    NSMutableSet *_exposureFeeds;
    NSMutableArray *_missReadRecordList;
    unsigned long long _recordMinFeeds;
    unsigned long long _recordMinInterval;
    unsigned long long _jumpMinSkipFeeds;
    long long _jumpBtnPositionOffset;
    unsigned long long _jumpBtnExposureInterval;
    unsigned long long _weishangMaxPercent;
    unsigned long long _minContinueFeeds;
    WCDataItem *_earlierContentTipsItem;
    unsigned long long _itemIdJumped;
    WCTimelineMissReadRecord *_jumpMissReadRecord;
    NSArray *_allFeeds;
    WCTimelineBatchGetFeedsCGI *_batchGetFeedsCGI;
    NSSet *_invisibleFeedIds;
    double _invisibilityCheckedTime;
    WCTimelineMissReadJumpBtnClickReportRecord *_clickReportRecord;
    WCTimelineMissReadBreakLayerExposureRecord *_missReadBtnExposureRecord;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isJumpToFirstMissReadRecord; // @synthesize isJumpToFirstMissReadRecord=_isJumpToFirstMissReadRecord;
@property(retain, nonatomic) WCTimelineMissReadBreakLayerExposureRecord *missReadBtnExposureRecord; // @synthesize missReadBtnExposureRecord=_missReadBtnExposureRecord;
@property(retain, nonatomic) WCTimelineMissReadJumpBtnClickReportRecord *clickReportRecord; // @synthesize clickReportRecord=_clickReportRecord;
@property(nonatomic) double invisibilityCheckedTime; // @synthesize invisibilityCheckedTime=_invisibilityCheckedTime;
@property(copy, nonatomic) NSSet *invisibleFeedIds; // @synthesize invisibleFeedIds=_invisibleFeedIds;
@property(retain, nonatomic) WCTimelineBatchGetFeedsCGI *batchGetFeedsCGI; // @synthesize batchGetFeedsCGI=_batchGetFeedsCGI;
@property(retain, nonatomic) NSArray *allFeeds; // @synthesize allFeeds=_allFeeds;
@property(nonatomic) _Bool isFakeScrollingToUnread; // @synthesize isFakeScrollingToUnread=_isFakeScrollingToUnread;
@property(retain, nonatomic) WCTimelineMissReadRecord *jumpMissReadRecord; // @synthesize jumpMissReadRecord=_jumpMissReadRecord;
@property(nonatomic) _Bool minContinueFeedsSatisfy; // @synthesize minContinueFeedsSatisfy=_minContinueFeedsSatisfy;
@property(nonatomic) unsigned long long itemIdJumped; // @synthesize itemIdJumped=_itemIdJumped;
@property(retain, nonatomic) WCDataItem *earlierContentTipsItem; // @synthesize earlierContentTipsItem=_earlierContentTipsItem;
@property(nonatomic) _Bool usePlainExposureMethod; // @synthesize usePlainExposureMethod=_usePlainExposureMethod;
@property(nonatomic) unsigned long long minContinueFeeds; // @synthesize minContinueFeeds=_minContinueFeeds;
@property(nonatomic) unsigned long long weishangMaxPercent; // @synthesize weishangMaxPercent=_weishangMaxPercent;
@property(nonatomic) unsigned long long jumpBtnExposureInterval; // @synthesize jumpBtnExposureInterval=_jumpBtnExposureInterval;
@property(nonatomic) long long jumpBtnPositionOffset; // @synthesize jumpBtnPositionOffset=_jumpBtnPositionOffset;
@property(nonatomic) unsigned long long jumpMinSkipFeeds; // @synthesize jumpMinSkipFeeds=_jumpMinSkipFeeds;
@property(nonatomic) unsigned long long recordMinInterval; // @synthesize recordMinInterval=_recordMinInterval;
@property(nonatomic) unsigned long long recordMinFeeds; // @synthesize recordMinFeeds=_recordMinFeeds;
@property(retain, nonatomic) NSMutableArray *missReadRecordList; // @synthesize missReadRecordList=_missReadRecordList;
@property(retain, nonatomic) NSMutableSet *exposureFeeds; // @synthesize exposureFeeds=_exposureFeeds;
@property(nonatomic) _Bool isSupport; // @synthesize isSupport=_isSupport;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (_Bool)shouldDoMicroMerchantCompatibleLogic;
- (unsigned long long)filterNewFeedIds:(id)arg1 newWeishangFeedIds:(id)arg2 withRmFeedIds:(id)arg3;
- (void)filterMicroMerchantFoldFeedsIdLookupInWSGroup:(id)arg1 newFeedIds:(id)arg2 newWeishangFeedIds:(id)arg3;
- (void)filterMicroMerchantFoldFeedsIdLookupInFeedsMgrCache:(id)arg1 newWeishangFeedIds:(id)arg2;
- (void)clearMicroMerchantFoldFeeds:(id)arg1;
- (void)onFirstPageUpdated:(unsigned long long)arg1 datas:(id)arg2 feedIds:(id)arg3 feedFlags:(id)arg4 wsGroupDict:(id)arg5;
- (void)onExptItemListChange;
- (void)onServiceInit;
- (void)onTimeLineViewClearEarlierContentTipsItem;
- (void)onTimeLineViewFakeScrollToUnreadItemEnd:(id)arg1;
- (void)onTimeLineViewFakeScrollToUnreadItem:(id)arg1;
- (void)recordDisplayWithFeedId:(id)arg1;
- (void)onDisplayFeedWithDataItem:(id)arg1 feedId:(id)arg2;
- (void)onTimeLineSessionStat:(id)arg1;
- (void)onTimeLineViewWillDisplayDataItem:(id)arg1;
- (void)onTimeLineViewDealloc;
- (void)onTimeLineViewMissReadJumpBtnClick;
- (unsigned int)getJumpableMissReadRecordCount;
- (unsigned long long)getMissReadRecordCount;
- (void)updateMissReadRecordsWithInvisibleFeedIds;
- (void)updateInvisibilityCheckedTime;
- (void)updateInvisibleFeedsWithFeedIds:(id)arg1 requestFeedIds:(id)arg2 responseDataItems:(id)arg3;
- (void)checkInvisibleFeedsIfNeeded;
- (void)clearInvisibleFeeds;
- (void)saveInvisibleFeeds;
- (void)loadInvisibleFeeds;
- (void)removeMissReadFeed:(id)arg1 record:(id)arg2;
- (void)exposeId:(unsigned long long)arg1 fromRecordLast:(id)arg2;
- (void)exposeId:(unsigned long long)arg1 fromRecordFirst:(id)arg2;
- (void)saveRecordList;
- (void)loadRecordList;
- (void)addMissReadRecord:(id)arg1 newWeishangFeedIds:(id)arg2;
- (_Bool)addNoMoreUnreadTipsInfo:(unsigned long long)arg1;
- (_Bool)isJumpBtnExposureIntervalValid:(long long)arg1;
- (_Bool)isJumpBtnExposureIntervalValid;
- (id)dynamicConfigureDescription;
- (void)updateExptConfig;
- (void)updateMinContinueFeedsSatisfy:(id)arg1 lastTopId:(unsigned long long)arg2;
- (void)updateRecordFirstCreatTime:(id)arg1;
- (_Bool)isValidRecord:(id)arg1;
- (void)clearInvalidMissReadRecords;
- (void)updateMissReadRecords:(id)arg1 feedFlags:(id)arg2;
- (void)calcNewFeedIds:(id)arg1 newWeishangFeedIds:(id)arg2 topId:(unsigned long long)arg3 datas:(id)arg4 feedIds:(id)arg5 feedFlags:(id)arg6;
- (void)loadExposureFeeds;
- (void)saveExposureFeeds;
- (void)saveData;
- (void)clearDataWhenNotSupport;
- (void)initDataWhenSupport;
- (void)preUpdateFeedsForMissReadRecord;
- (_Bool)isWeiShangRecord:(id)arg1;
- (void)updateJumpMissReadRecord;
- (unsigned long long)getMinMissReadFeedId;
- (id)getJumpMissReadRecord;
- (id)getEarlierContentTipsItem;
- (void)realJumpBtnClickReport:(id)arg1 exposure:(id)arg2 seq:(unsigned int)arg3 subSeq:(unsigned int)arg4 subSeqSum:(unsigned long long)arg5;
- (void)jumpBtnClickReportEnd;
- (void)jumpBtnClickReportExposeId:(id)arg1 record:(id)arg2;
- (void)jumpBtnClickReportBegin;
- (void)realjumpBtnExposureReport:(id)arg1 exposure:(id)arg2 jumpBreakLayer:(id)arg3 seq:(unsigned int)arg4 subSeq:(unsigned int)arg5 subSeqSum:(unsigned long long)arg6;
- (void)logCurrentFirstPageFetch:(_Bool)arg1 newBreakLayerID:(unsigned long long)arg2 preCreateBreakLayerFeedCnt:(unsigned long long)arg3 preCreateBreakLayerWsFeedCnt:(unsigned long long)arg4;
- (void)jumpBtnExposureReport;
- (void)jumpBtnClickForJumBtnExposure;
- (void)willDisplayFeedForJumpBtnExposure:(id)arg1;
- (void)exposureFeedIdForJumpBtnExposure:(unsigned long long)arg1;
- (void)updateJumBtnExposureJumpBtnId:(unsigned long long)arg1 withRefItemId:(unsigned long long)arg2;
- (void)updateJumBtnExposureJumpBtnRefItemId:(unsigned long long)arg1;
- (void)updateFirstPageEndForJumBtnExposure:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

