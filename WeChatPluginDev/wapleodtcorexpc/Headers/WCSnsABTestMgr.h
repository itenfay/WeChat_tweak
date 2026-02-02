//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WCSnsABTestFeedHiddenInfo;

@interface WCSnsABTestMgr : NSObject
{
    NSMutableDictionary *dicABTestInfo;
    NSMutableDictionary *dicActionResult;
    WCSnsABTestFeedHiddenInfo *feedHiddenInfo;
    _Bool needWriteBackHiddenInfo;
    _Bool needWriteBackOperationInfo;
    NSArray *arrDeleteLayerId;
    NSArray *arrDeleteExpId;
    NSMutableDictionary *dicFeedQuestionBarHiddenInfo;
    NSMutableDictionary *dicDocSnRepeatUrlHiddenInfo;
}

- (void).cxx_destruct;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onManulLogOut;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (_Bool)isDataItemShouldHideForRepeatUrl:(id)arg1 hasCacheSnsRepeatUrlInfo:(_Bool)arg2;
- (void)trySaveRepeatUrlHiddenInfo;
- (void)tryLoadRepeatUrlHiddenInfo;
- (id)pathForDocSnRepeatUrlHiddenInfo;
- (void)cacheRepeatUrlAfterConfirmWithDocId:(id)arg1 snsOperationWrap:(id)arg2;
- (void)onOperateUrlFeedReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)operateUrlFeed:(int)arg1 dataItem:(id)arg2;
- (_Bool)isOnRepeatUrlExperiment:(id)arg1;
- (_Bool)couldShowRepeatUrlMenuItem:(id)arg1;
- (_Bool)needDelayShow:(id)arg1;
- (_Bool)hitTheDelayShowExp:(id)arg1;
- (void)logFeatureDelayShowFeed:(id)arg1 opType:(unsigned int)arg2 clickTime:(unsigned int)arg3;
- (void)exposureDelayShowFeed:(id)arg1;
- (void)clickDelayShowFeed:(id)arg1;
- (_Bool)couldRunSightPreload:(id)arg1;
- (void)tryUpdateDeleteExpIdList;
- (void)tryUpdateDleteLayerIdList;
- (void)trySaveFeedHiddenInfo;
- (void)tryloadFeedHiddenInfo;
- (id)pathForFeedHiddenInfo;
- (void)tryLogABTestResultTime:(id)arg1 dataItemId:(id)arg2 startTime:(_Bool)arg3 endTime:(_Bool)arg4;
- (void)logABTestResult:(id)arg1 dataItemId:(id)arg2 tipActionResult:(id)arg3;
- (unsigned int)getABTestExperType:(id)arg1;
- (void)tryReportABTestResult;
- (void)reportABTestResult:(id)arg1 result:(id)arg2;
- (id)getTipData:(id)arg1 layerId:(id)arg2;
- (_Bool)isFirstTip:(id)arg1 layerId:(id)arg2;
- (id)getFirstTip:(id)arg1;
- (_Bool)hiddenTip:(id)arg1 dataItemId:(id)arg2;
- (_Bool)shouldHiddenTip:(id)arg1 dataItemId:(id)arg2;
- (id)getABTestInfoForLayerId:(id)arg1;
- (id)getLayerIdForDataItem:(id)arg1;
- (void)initABTestInfo:(id)arg1;
- (void)tryInitABTestInfo;
- (id)init;

@end

