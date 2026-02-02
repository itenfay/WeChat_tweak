//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSBrowseReportHelper, NSMutableSet, WCSearchCTRInfo;

@interface FTSReportMgr : NSObject
{
    WCSearchCTRInfo *_ctrInfo;
    NSMutableSet *_resultHittedKeywordSet;
    FTSBrowseReportHelper *_mainBrowseHelper;
    FTSBrowseReportHelper *_subBrowseHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSBrowseReportHelper *subBrowseHelper; // @synthesize subBrowseHelper=_subBrowseHelper;
@property(retain, nonatomic) FTSBrowseReportHelper *mainBrowseHelper; // @synthesize mainBrowseHelper=_mainBrowseHelper;
@property(retain, nonatomic) NSMutableSet *resultHittedKeywordSet; // @synthesize resultHittedKeywordSet=_resultHittedKeywordSet;
@property(retain, nonatomic) WCSearchCTRInfo *ctrInfo; // @synthesize ctrInfo=_ctrInfo;
- (unsigned int)getFTSMsgResultChatType:(id)arg1;
- (unsigned int)getFTSCustomerServiceMatchTypeWithMatchTip:(id)arg1;
- (unsigned int)getFTSCustomerServiceTypeWithUserName:(id)arg1;
- (void)newCTREndSearch;
- (void)newCTRBeginSearch:(id)arg1 isVoiceInput:(_Bool)arg2;
- (void)batchReportUnSelectedGroupTrains:(id)arg1 exclude:(id)arg2 dicMatchTips:(id)arg3 query:(id)arg4 topHits:(id)arg5;
- (void)reportSelectedGroupTrains:(id)arg1;
- (void)reportKVMsgSearchInfo:(unsigned long long)arg1 pageType:(unsigned long long)arg2 searchAgain:(_Bool)arg3 appendMode:(_Bool)arg4;
- (void)reportContactSearchMonitor:(id)arg1;
- (void)reportMessageFTSModify:(int)arg1 MessageCount:(unsigned long long)arg2 CostTime:(unsigned long long)arg3;
- (void)reportMessageFTSResultCnt:(unsigned long long)arg1 FTSQueryTime:(unsigned long long)arg2 MainDBTime:(unsigned long long)arg3 GroupTime:(unsigned long long)arg4 limitSessionCount:(unsigned long long)arg5 targetSessionCount:(unsigned long long)arg6 itemLimit:(unsigned long long)arg7 maxCreateTime:(unsigned long long)arg8 totalTime:(unsigned long long)arg9;
- (void)reportContactIndexOperationType:(unsigned int)arg1 OperationTime:(unsigned long long)arg2 OperationCount:(unsigned int)arg3 updateCount:(unsigned int)arg4 singleContactCount:(unsigned int)arg5 groupContactCount:(unsigned int)arg6 isBuildingIndex:(_Bool)arg7;
- (void)reportFavIndexOperationType:(unsigned int)arg1 OperationTime:(unsigned long long)arg2 OperationCount:(unsigned int)arg3 updateCount:(unsigned int)arg4 isFTS5:(_Bool)arg5;
- (void)reportFavSearchTime:(unsigned long long)arg1 QueryTime:(unsigned long long)arg2 CheckDBTime:(unsigned long long)arg3 ResultCount:(unsigned int)arg4 isFromFav:(_Bool)arg5 byType:(long long)arg6 tagsCount:(int)arg7 isFTS5:(_Bool)arg8;
- (void)reportDBFileSize:(long long)arg1 pageCount:(unsigned int)arg2 freeListCount:(unsigned int)arg3 unbatchGetFavItemCount:(unsigned int)arg4;
- (void)reportKVMsgResultClickType:(unsigned long long)arg1 pageType:(unsigned long long)arg2 showTalkerEntry:(_Bool)arg3 userName:(id)arg4;
- (void)reportKVMsgResultClickType:(unsigned long long)arg1 pageType:(unsigned long long)arg2 showTalkerEntry:(_Bool)arg3;
- (void)createChatRoomOperationKVReport:(_Bool)arg1;
- (void)cancelSearch;
- (unsigned int)getReportDeviceCode;
- (void)reportKVContactSearchInfo:(id)arg1;
- (void)reportIDKeyContactSearchTime:(unsigned int)arg1;
- (void)startBrowseSubSearchResult;
- (void)startBrowseMainSearchResult;
- (unsigned int)searchFavCount:(id)arg1;
- (_Bool)searchMatchFavItems:(id)arg1;
- (_Bool)searchMatchMemoryMsg:(id)arg1;
- (_Bool)searchMatchIndexMsg:(id)arg1;
- (unsigned int)searchMsgCount:(id)arg1;
- (_Bool)searchMatchMsg:(id)arg1;
- (unsigned int)searchFeatureCount:(id)arg1;
- (_Bool)searchMatchFeature:(id)arg1;
- (unsigned int)searchBrandContactCount:(id)arg1;
- (_Bool)searchMatchBrandContact:(id)arg1;
- (unsigned int)searchGroupCount:(id)arg1;
- (_Bool)searchMatchGroupContact:(id)arg1;
- (unsigned int)searchNormalContactCount:(id)arg1;
- (_Bool)searchMatchNormalContact:(id)arg1;
- (unsigned int)searchTopHitCount:(id)arg1;
- (_Bool)searchMatchTopHit:(id)arg1;
- (_Bool)searchMemoryDone:(id)arg1;
- (_Bool)searchFavDone:(id)arg1;
- (void)reportGlobalSearchResult:(id)arg1;
- (void)logGroupHitPos:(unsigned int)arg1 totalCount:(unsigned int)arg2 isInMainPage:(_Bool)arg3 isClickMore:(_Bool)arg4;
- (void)logGroupHitPos:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)logGuidePageClick:(unsigned long long)arg1 sessionId:(id)arg2;
- (void)logNewHitResult:(id)arg1 hasWebSearchCellShow:(_Bool)arg2 clickType:(unsigned int)arg3 cellStyle:(unsigned int)arg4;
- (void)clearCacheHitKeyword;
- (void)addSubSearchFTSLog:(id)arg1;
- (void)logAddAddressFriend:(unsigned long long)arg1;
- (void)logBeginSearch:(unsigned long long)arg1;
- (void)addMainSearchFTSLog:(id)arg1;
- (id)safeKVString:(id)arg1;
- (id)init;

@end

