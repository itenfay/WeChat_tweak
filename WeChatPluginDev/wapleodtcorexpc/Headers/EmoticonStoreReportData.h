//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EmoticonStoreReportData
{
}

+ (void)ReportEmoticonIPPageExposure:(id)arg1 ipSetKey:(id)arg2 designerUin:(id)arg3 sendClick:(unsigned long long)arg4;
+ (void)ReportEmoticonDesignerIPExposure:(id)arg1 hasFinder:(_Bool)arg2 ipCount:(unsigned long long)arg3 designerUin:(id)arg4 ipTabClickCount:(unsigned long long)arg5 emoticonClickCount:(unsigned long long)arg6 emojiClickCount:(unsigned long long)arg7;
+ (id)safeReportString:(id)arg1;
+ (long long)entranceSceneFromRecord:(id)arg1;
+ (void)ReportEmoticonStoreActionWithScene:(unsigned long long)arg1 Action:(unsigned long long)arg2 SessionId:(unsigned long long)arg3 Pid:(id)arg4 Info:(id)arg5 Index:(id)arg6 entranceScene:(long long)arg7 thirdPartyLinkId:(id)arg8 thirdPartyLinkStatus:(id)arg9 thirdPartyLinkReportInfo:(id)arg10 reqId:(id)arg11;
+ (void)ReportEmoticonStoreActionWithScene:(unsigned long long)arg1 Action:(unsigned long long)arg2 SessionId:(unsigned long long)arg3 Pid:(id)arg4 Info:(id)arg5 Index:(id)arg6 entranceScene:(long long)arg7 thirdPartyLinkId:(id)arg8 thirdPartyLinkStatus:(id)arg9 thirdPartyLinkReportInfo:(id)arg10;
+ (void)ReportEmoticonStoreActionWithScene:(unsigned long long)arg1 Action:(unsigned long long)arg2 SessionId:(unsigned long long)arg3 Pid:(id)arg4 Info:(id)arg5 Index:(id)arg6 entranceScene:(long long)arg7;
+ (id)getSafeMergedReportStrFromArray:(id)arg1;
+ (void)ReportEmoticonStoreExposureWithScene:(unsigned long long)arg1 SessionId:(unsigned long long)arg2 ReportInfo:(id)arg3;
+ (void)ReportEmoticonStoreExposureWithScene:(unsigned long long)arg1 SessionId:(unsigned long long)arg2 entranceScene:(long long)arg3 ReportInfo:(id)arg4;
+ (void)ReportDesignerEmojiTipsWithScene:(unsigned int)arg1 action:(unsigned long long)arg2 Md5:(id)arg3 searchId:(unsigned long long)arg4 designerId:(id)arg5 pid:(id)arg6 sessionId:(id)arg7 emoticonScene:(long long)arg8 feedId:(id)arg9 finderUserName:(id)arg10;
+ (void)ReportCellSetWithId:(unsigned int)arg1 Name:(id)arg2 SetType:(unsigned int)arg3 Action:(unsigned long long)arg4;
+ (void)ReportRecentHotItemWithPid:(id)arg1 Action:(unsigned long long)arg2;
+ (void)ReportDoSearchForKeyword:(id)arg1 InScene:(unsigned long long)arg2;
+ (void)ReportStartSearchInScene:(unsigned long long)arg1;
+ (void)ReportEmoticonDownloadScene:(long long)arg1 Type:(long long)arg2 LayerId:(id)arg3 ProductId:(id)arg4 reportInfo:(id)arg5;
+ (void)ReportEmoticonPageExposure:(unsigned int)arg1 desiger:(unsigned int)arg2 pid:(id)arg3 tid:(unsigned int)arg4 emotionScene:(long long)arg5 newPage:(long long)arg6 md5:(id)arg7 activityID:(id)arg8 designerUin:(id)arg9 sessionID:(id)arg10 lensID:(id)arg11 linkId:(id)arg12 linkExposured:(_Bool)arg13 linkClicked:(_Bool)arg14 weappClicked:(_Bool)arg15 thirdPartyLinkID:(unsigned long long)arg16 thirdPartyLinkStatus:(unsigned long long)arg17 thirdPartyLinkReportInfo:(id)arg18 feedId:(id)arg19 finderUserName:(id)arg20;
+ (void)ReportEmoticonPageExposure:(unsigned int)arg1 desiger:(unsigned int)arg2 pid:(id)arg3 tid:(unsigned int)arg4 extrance:(long long)arg5 newPage:(long long)arg6 thirdPartyLinkID:(unsigned long long)arg7 thirdPartyLinkStatus:(unsigned long long)arg8 thirdPartyLinkReportInfo:(id)arg9;
+ (void)ReportEmoticonPageExposure:(unsigned int)arg1 desiger:(unsigned int)arg2 pid:(id)arg3 tid:(unsigned int)arg4 extrance:(long long)arg5 newPage:(long long)arg6;
+ (void)ReportEmoticonFinderPageExposure:(id)arg1 designerUin:(unsigned int)arg2 entranceScene:(long long)arg3 newPage:(long long)arg4;
+ (void)ReportEmoticonPageExposure:(long long)arg1 newPage:(long long)arg2;
+ (void)ReportEmoticonBrowsePageExposure:(id)arg1 activityID:(id)arg2 pid:(id)arg3 designerUin:(id)arg4 newPage:(long long)arg5 sessionID:(id)arg6 lensID:(id)arg7 linkId:(id)arg8 linkExposured:(_Bool)arg9 linkClicked:(_Bool)arg10 weappClicked:(_Bool)arg11 finderUserName:(id)arg12 feedId:(id)arg13;
+ (void)ReportEmoticonTopicPageExposure:(unsigned int)arg1 extrance:(long long)arg2;
+ (void)ReportEmoticonDesignerPageExposure:(unsigned int)arg1 extrance:(long long)arg2;
+ (void)ReportEmoticonDetailPageExposure:(id)arg1 extrance:(long long)arg2 thirdPartyLinkID:(unsigned long long)arg3 thirdPartyLinkStatus:(unsigned long long)arg4 thirdPartyLinkReportInfo:(id)arg5;
+ (void)ReportRewardTipsAction:(unsigned long long)arg1 ForPid:(id)arg2;
+ (void)ReportRewardForPid:(id)arg1 scene:(unsigned long long)arg2 extranceScene:(long long)arg3 action:(unsigned long long)arg4;
+ (void)markReportSendEmoticonFromNowUseButton;
+ (void)changeToolViewStateToNoneEmoticon;
+ (void)changeEmoticonBoardIndex;
+ (void)ReportSendEmoticonFromNowUseButton:(id)arg1;
+ (void)ReportClickNowUseButton:(id)arg1;
+ (void)ReportClickCollectionCellForReqType:(unsigned int)arg1;
+ (void)ReportClickEmoticonNew;
+ (void)Report10994WithAction:(int)arg1 desc:(id)arg2 position:(unsigned int)arg3 wrapList:(id)arg4 totalCount:(unsigned long long)arg5 sessionId:(id)arg6 chatID:(id)arg7 recSessionId:(id)arg8 remoteWordListMeta:(id)arg9 clickDiffTime:(unsigned long long)arg10;
+ (void)ReportRecommendEmoticonSearchMoreExposureWithSessionId:(id)arg1;
+ (void)ReportRecommendEmoticonOnScrollEnd:(id)arg1 sessionId:(id)arg2;
+ (void)ReportClickEmoticonFromDesc:(id)arg1 position:(unsigned int)arg2 wrap:(id)arg3 totalCount:(unsigned long long)arg4 sessionId:(id)arg5 clickDiffTime:(unsigned long long)arg6;
+ (void)ReportShowDescToEmoticon:(id)arg1 sessionId:(id)arg2 wrapList:(id)arg3 chatID:(id)arg4 recSessionId:(id)arg5 remoteWordListMeta:(id)arg6;
+ (void)ReportClickEmoticonShareFromTimeline:(id)arg1;
+ (void)ReportClickEmoticonShareFromMessage:(id)arg1;
+ (void)ReportEmoticonShareToTimeline:(id)arg1;
+ (void)ReportEmoticonShareToFriends:(id)arg1;
+ (id)genEmoticonSDKReportRequestID;

@end

