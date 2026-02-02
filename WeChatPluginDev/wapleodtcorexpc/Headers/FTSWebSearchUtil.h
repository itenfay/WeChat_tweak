//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FTSWebSearchUtil : NSObject
{
}

+ (_Bool)isCircleToSearchScene:(unsigned long long)arg1;
+ (id)getSearchAdIdInfo;
+ (_Bool)isLBSForbidden;
+ (id)getSearchLocation:(unsigned long long)arg1;
+ (id)getSearchLocation;
+ (id)getSearchPlaceHolder:(unsigned long long)arg1;
+ (void)PardusReportStep:(unsigned int)arg1 ReqId:(id)arg2 Query:(id)arg3;
+ (struct CGRect)limitRectWithOriRect:(struct CGRect)arg1 limitWidth:(double)arg2 limitHeight:(double)arg3 needFocusCenter:(_Bool)arg4;
+ (_Bool)isFTSSearchInWeAppTabWithBusinessType:(unsigned long long)arg1;
+ (void)applyPrivacyAuthThen:(CDUnknownBlockType)arg1;
+ (void)markConfirmSearchForEuUser:(_Bool)arg1;
+ (_Bool)hasConfirmOpenSearchForEuUser;
+ (_Bool)isUserRegInEuCountry;
+ (_Bool)isNeedShowPrivacyH5BeforeSearch;
+ (_Bool)isOnDawangEnv;
+ (_Bool)isNetStatusOver3G;
+ (id)GetNetType;
+ (void)reportFFSearchEntranceClick:(_Bool)arg1 redotMsgId:(id)arg2;
+ (void)reportFFSearchEntranceExpose:(_Bool)arg1 redotMsgId:(id)arg2;
+ (_Bool)IsWebRecommendScene:(unsigned int)arg1;
+ (void)ReportWebRecommendReddotNotDisplay:(id)arg1 reddotType:(unsigned int)arg2 notShowReason:(id)arg3;
+ (void)ReportCloseWebRecommend:(id)arg1 reddotType:(unsigned int)arg2;
+ (void)ReportWebRecommendTLTabReddotExpose:(id)arg1 reddotType:(unsigned int)arg2;
+ (void)ReportWebRecommendReddotClicked:(id)arg1 reddotType:(unsigned int)arg2;
+ (void)ReportWebRecommendReddotCovered:(id)arg1 reddotType:(unsigned int)arg2 notShowReason:(id)arg3;
+ (void)ReportWebRecommendReddotExpired:(id)arg1 reddotType:(unsigned int)arg2;
+ (void)ReportWebRecommendReddotCgiConsumed:(id)arg1 reddotType:(unsigned int)arg2;
+ (void)ReportWebRecommendReddotConsumed:(id)arg1 reddotType:(unsigned int)arg2 consumeTime:(unsigned int)arg3;
+ (void)ReportWebRecommendRedDotExposed:(id)arg1 redDotType:(unsigned int)arg2;
+ (void)ReportWebRecommendReddotDisplay:(id)arg1 reddotType:(unsigned int)arg2;
+ (void)ReportWebRecommendReddotReceived:(id)arg1 reddotType:(unsigned int)arg2;
+ (id)LogStringReportingWebRecommendReddot:(id)arg1 opCode:(unsigned int)arg2 reddotType:(unsigned int)arg3 consumeTs:(unsigned int)arg4 notShowReason:(id)arg5 needAddWCReddot:(_Bool)arg6 needAddReport:(_Bool)arg7;
+ (id)LogStringReportingWebRecommendReddot:(id)arg1 opCode:(unsigned int)arg2 reddotType:(unsigned int)arg3 consumeTs:(unsigned int)arg4 notShowReason:(id)arg5 needAddWCReddot:(_Bool)arg6;
+ (void)InternalReportWebRecommendReddot:(id)arg1 opCode:(unsigned int)arg2 reddotType:(unsigned int)arg3 consumeTs:(unsigned int)arg4 notShowReason:(id)arg5 needAddWCReddot:(_Bool)arg6;
+ (void)ReportFindPageTopStoryReddotExpose:(id)arg1 numReddots:(id)arg2;
+ (id)getFFWebSearchTitle;
+ (id)getFFBrowseEntryTitle;
+ (id)stringByReplaceCommaWithBlank:(id)arg1;
+ (void)reportWebSearchActionFlow:(int)arg1 scene:(unsigned int)arg2 sessionId:(id)arg3 subSessionId:(id)arg4 searchId:(id)arg5 offset:(unsigned int)arg6 isHomePage:(_Bool)arg7 requestId:(id)arg8 successType:(int)arg9 query:(id)arg10 tagId:(id)arg11 bizType:(unsigned long long)arg12 h5Version:(unsigned int)arg13 isPreload:(_Bool)arg14;
+ (id)getNetworkInfo;
+ (id)makeGeneralFailParam;
+ (id)makeEmptyJSONResultParam;
+ (id)getHightlightString:(id)arg1 searchText:(id)arg2 matchWordTip:(id)arg3;
+ (id)makeJSONResultParamWithQuery:(id)arg1 allContacts:(id)arg2 sortedArray:(id)arg3 offset:(long long)arg4 count:(long long)arg5;
+ (id)getWebViewPresetUI:(id)arg1;
+ (id)tryGetNavTitleWithParams:(id)arg1;
+ (unsigned long long)convertViewTypeWithViewTypeStr:(id)arg1;
+ (id)tryAppendNewKeyForUrlStr:(id)arg1 andKey:(id)arg2 andUrlParams:(id)arg3;
+ (void)onTemplateApplyed:(unsigned long long)arg1;
+ (void)tryCloseWslocalWebview;
+ (void)deleteDevelopH5;
+ (id)pathForDevelopH5;
+ (id)pathForDevelopH5Dir;
+ (_Bool)verifyDevelopH5;
+ (_Bool)isUseDevelopH5;
+ (id)GenerateSearchSessionUniqeID:(unsigned int)arg1;
+ (void)removeUpdatedH5;
+ (void)removeGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (void)removeAllGuideData;
+ (id)getSearchGuideDataForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2 andBysinessType:(unsigned long long)arg3;
+ (_Bool)cacheGuideData:(id)arg1 forScene:(unsigned int)arg2 andVersion:(unsigned int)arg3 andBusinessType:(unsigned long long)arg4;
+ (_Bool)cacheGuideData:(id)arg1 forScene:(unsigned int)arg2 andVersion:(unsigned int)arg3;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2 andBusinessType:(unsigned long long)arg3;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1 andVersion:(unsigned int)arg2;
+ (id)pathForGuideCacheForScene:(unsigned int)arg1;
+ (id)pathForGuideCache;
+ (id)pathForGuideCacheDir;
+ (id)getLiteAppVersion;
+ (void)reloadRecommendDownloadConfig;
+ (void)removeRecommendUpdatedH5;
+ (void)deleteRecommendDevelopH5;
+ (id)pathForRecommendDevelopH5;
+ (_Bool)verifyRecommendDevelopH5;
+ (unsigned int)getRecommendVersionForUpdateH5;
+ (unsigned int)getRecommendVersionForDefaultH5;
+ (id)pathForRecommendUpdatedH5;
+ (id)pathForRecommendUpdatedH5Dir;
+ (id)pathForRecommendH5;
+ (unsigned int)getRecommendVersion;
+ (int)transferTimeStampToUpdateTime:(unsigned int)arg1;
+ (id)getLbsLocationNew:(id)arg1;
+ (int)transferChildmodeLevel:(long long)arg1;
+ (id)getChildModeValue;
+ (id)makeDictionaryFromPath:(id)arg1;
+ (unsigned int)getVersionForUpdateH5;
+ (unsigned int)getVersionForDefaultH5;
+ (id)pathForUpdatedH5;
+ (id)pathForUpdatedH5Dir;
+ (id)pathForH5Root;
+ (id)pathForDefaultH5Dir;
+ (id)pathForMainH5;
+ (unsigned int)getVersion;
+ (id)searchTextField:(id)arg1 shouldChangeRange:(struct _NSRange)arg2 replaceText:(id)arg3 shouldNotify:(_Bool *)arg4;
+ (id)formatMultiStageInputText:(id)arg1;
+ (_Bool)isUseEmoticonSearchDevelopH5;
+ (_Bool)verifyEmoticonSearchDevelopH5;
+ (_Bool)verifyEmoticonSearchUpdateH5;
+ (id)emoticonSearchDescription;
+ (unsigned int)getVersionForEmoticonSearchDevelopH5;
+ (void)deleteEmoticonSearchDevelopH5;
+ (id)pathForEmoticonSearchH5;
+ (unsigned int)getEmoticonSearchVersion;
+ (_Bool)isEmoriconSearchScene:(unsigned long long)arg1;
+ (_Bool)isUseTopicSearchDevelopH5;
+ (_Bool)verifyTopicSearchDevelopH5;
+ (id)pathForTopicSearchDevelopH5;
+ (_Bool)verifyTopicSearchUpdateH5;
+ (id)pathForTopicSearchUpdateH5;
+ (id)topicSearchDescription;
+ (unsigned int)getVersionForTopicSearchDevelopH5;
+ (void)deleteTopicSearchDevelopH5;
+ (id)pathForTopicSearchH5;
+ (unsigned int)getTopicSearchVersionForUpdateH5;
+ (unsigned int)getTopicSearchVersionForDefaultH5;
+ (unsigned int)getTopicSearchVersion;

@end

