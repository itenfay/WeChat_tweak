//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface BTUtility
{
}

+ (id)genTLTimeShortStringByUInt:(unsigned int)arg1;
+ (id)genDateStrInPersonalCenter:(unsigned int)arg1;
+ (id)logTitleForMsgWrap:(id)arg1;
+ (id)generateOmitTitle:(id)arg1;
+ (void)repairBizMsgTypeIfNeed:(id)arg1 withSessionInfo:(id)arg2;
+ (id)genAttrContent:(id)arg1 isBold:(_Bool)arg2;
+ (id)compressUIImageToBase64Str:(id)arg1 maxByteSize:(unsigned int)arg2;
+ (_Bool)isHeadsetOn;
+ (id)getReportNetworkType;
+ (_Bool)hasGetSIMType;
+ (_Bool)isOnDawangEnv;
+ (id)mediaDurationStrWithDuration:(unsigned int)arg1;
+ (unsigned int)oneHourInMs;
+ (unsigned int)oneHourInSec;
+ (id)parseNewXmlNotificationFromMsgWrap:(id)arg1;
+ (id)genMPLikeNumStrByCount:(unsigned long long)arg1;
+ (id)genMPReadNumStrByCount:(unsigned long long)arg1;
+ (id)appendParameter:(id)arg1 toUrl:(id)arg2;
+ (id)appendParameterToUrl:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)appendUrl:(id)arg1 subscene:(unsigned int)arg2;
+ (id)appendUrl:(id)arg1 offlineScheme:(id)arg2;
+ (id)appendUrl:(id)arg1 vid:(id)arg2 itemShowType:(unsigned int)arg3;
+ (id)appendUrl:(id)arg1 clickTime:(unsigned int)arg2 enterId:(unsigned int)arg3;
+ (id)appendUrl:(id)arg1 templateType:(unsigned int)arg2 useFullVersion:(id)arg3 useFlag:(unsigned long long)arg4;
+ (id)appendUrl:(id)arg1 reportTime:(long long)arg2 a8keyScene:(unsigned int)arg3;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4 clickTime:(unsigned int)arg5 isNativePage:(_Bool)arg6 enterId:(unsigned int)arg7 autoPlayId:(unsigned int)arg8 flutterPos:(id)arg9 bizFinderEnterId:(id)arg10 rankSessionId:(id)arg11;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4 clickTime:(unsigned int)arg5 isNativePage:(_Bool)arg6 enterId:(unsigned int)arg7 autoPlayId:(unsigned int)arg8;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4 clickTime:(unsigned int)arg5 isNativePage:(_Bool)arg6 enterId:(unsigned int)arg7;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4 clickTime:(unsigned int)arg5 autoPlayId:(unsigned int)arg6 enterId:(unsigned int)arg7 flutterPos:(unsigned int)arg8 bizFinderEnterId:(id)arg9 rankSessionId:(id)arg10;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4 clickTime:(unsigned int)arg5 autoPlayId:(unsigned int)arg6 enterId:(unsigned int)arg7;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4 clickTime:(unsigned int)arg5 isNativePage:(_Bool)arg6;
+ (id)appendUrl:(id)arg1 scene:(unsigned int)arg2 clickTime:(unsigned int)arg3 enterId:(unsigned int)arg4;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4 clickTime:(unsigned int)arg5 enterId:(unsigned int)arg6;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4 clickTime:(unsigned int)arg5;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 subscene:(unsigned int)arg4;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 subscene:(unsigned int)arg3 clickTime:(unsigned int)arg4;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 subscene:(unsigned int)arg3;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3 clickTime:(unsigned int)arg4;
+ (id)appendUrl:(id)arg1 sessionId:(unsigned int)arg2 scene:(unsigned int)arg3;
+ (id)queryOfUrl:(id)arg1;
+ (id)getBizInfoFromUrl:(id)arg1;
+ (unsigned int)getBizUinFromUrl:(id)arg1;
+ (unsigned int)getIdxFromUrl:(id)arg1;
+ (unsigned int)getMidFromUrl:(id)arg1;
+ (unsigned int)getSubsceneFromUrl:(id)arg1;
+ (unsigned int)getSceneFromUrl:(id)arg1;
+ (unsigned int)getLastIdxFromMessage:(id)arg1;
+ (unsigned int)getFirstMidFromMessage:(id)arg1;
+ (unsigned int)getIdxFromReaderWrap:(id)arg1;
+ (unsigned int)getMidFromReaderWrap:(id)arg1;
+ (unsigned int)getBizUinFromReaderWrap:(id)arg1;
+ (_Bool)isMPArticlePageWithUrl:(id)arg1;
+ (_Bool)isMPShortContenPageWithUrl:(id)arg1;
+ (_Bool)isMPRecWebPageWithUrl:(id)arg1;
+ (_Bool)isMPAlbumPageWithUrl:(id)arg1;
+ (_Bool)isMPNormalPageWithUrl:(id)arg1;
+ (_Bool)isMPDomainWithUrl:(id)arg1;

@end

