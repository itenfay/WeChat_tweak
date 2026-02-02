//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EmoticonReportData
{
}

+ (void)ReportEmoticonPostCreate:(unsigned long long)arg1 sessionId:(id)arg2 isShowInFinder:(_Bool)arg3 name:(id)arg4 didEnterCreateFinderAccount:(_Bool)arg5;
+ (void)ReportEmoticonCreateResult:(unsigned long long)arg1 fileSource:(unsigned long long)arg2 fileType:(unsigned long long)arg3 sessionID:(id)arg4;
+ (void)ReportEmoticonManageOperation:(unsigned long long)arg1 result:(unsigned long long)arg2 emojiCnt:(unsigned long long)arg3 location:(unsigned long long)arg4 ifTop:(_Bool)arg5;
+ (void)ReportEmoticonManageDelResult:(unsigned long long)arg1 emojiCnt:(unsigned long long)arg2;
+ (void)ReportEmoticonBoardExpandAction:(unsigned long long)arg1 tabIndex:(unsigned long long)arg2;
+ (void)ReportEmojiCoverageWithScene:(unsigned long long)arg1 success:(_Bool)arg2 reason:(unsigned long long)arg3 count:(unsigned int)arg4 prevVersion:(unsigned int)arg5 curVersion:(unsigned int)arg6 subType:(unsigned int)arg7;
+ (void)ReporLoadEmojiResouceSuccess:(unsigned int)arg1 count:(unsigned int)arg2;
+ (void)ReporLoadEmojiResouceFailed:(unsigned int)arg1;
+ (void)ReportUnzipEmojiResouceSuccess:(unsigned int)arg1 prevVersion:(unsigned int)arg2 toVersion:(unsigned int)arg3;
+ (void)ReportUnzipEmojiResouceFailed:(unsigned int)arg1 prevVersion:(unsigned int)arg2 toVersion:(unsigned int)arg3;
+ (void)ReportScene:(id)arg1 error:(id)arg2;
+ (void)ReportRedotExposeActionWithEnterPid:(id)arg1 index:(int)arg2;
+ (void)ReportRedotAction:(int)arg1 isRed:(int)arg2 enterPid:(id)arg3 index:(int)arg4 pid:(id)arg5;
+ (void)ReportFastManagementAction:(int)arg1 scene:(int)arg2 pid:(id)arg3 md5:(id)arg4 index:(int)arg5;
+ (void)ReportSendGifWithDatalength:(unsigned int)arg1 md5:(id)arg2 scene:(unsigned long long)arg3;
+ (void)ReportSelectGifFailedWithDatalength:(unsigned int)arg1 scene:(unsigned long long)arg2;
+ (void)ReportEmoticonAction:(unsigned long long)arg1 newScene:(long long)arg2 emojiInfoObj:(id)arg3;
+ (void)ReportEmoticonAction:(unsigned long long)arg1 newScene:(long long)arg2 searchEmotWrap:(id)arg3;
+ (void)ReportEmoticonAction:(unsigned long long)arg1 emoticonWrap:(id)arg2 newScene:(long long)arg3 sessionID:(id)arg4 fromUsr:(id)arg5 feedId:(id)arg6 finderUserName:(id)arg7;
+ (void)ReportEmoticonAction:(unsigned long long)arg1 md5:(id)arg2 scene:(unsigned long long)arg3 designerId:(id)arg4 productId:(id)arg5 userName:(id)arg6 newSceneStr:(id)arg7 searchId:(id)arg8 docId:(id)arg9 activityId:(id)arg10 sessionID:(id)arg11 feedId:(id)arg12 finderUserName:(id)arg13;
+ (void)ReportEmoticonAction:(unsigned long long)arg1 scene:(unsigned long long)arg2 messageWrap:(id)arg3;
+ (void)ReportEmoticonDownloadFromQrcode;
+ (void)ReportEmoticonDownloadFromNodeView;
+ (void)ReportEmoticonDownloadFromSns;
+ (void)ReportEmoticonDownloadFromPreview;
+ (void)ReportEmoticonBoardShowClick;

@end

