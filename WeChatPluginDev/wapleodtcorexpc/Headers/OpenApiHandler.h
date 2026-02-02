//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface OpenApiHandler
{
}

+ (_Bool)needPassDataWithUrlParams;
+ (id)genUrlQueryDictWithData:(id)arg1 appSupportParseUrlParamsType:(unsigned int)arg2 needWritePasteBoardPtr:(_Bool *)arg3;
+ (id)SHA256Hash:(id)arg1;
+ (_Bool)checkTokenValid:(id)arg1 universalLink:(id)arg2;
+ (id)genTokenByUniversalLink:(id)arg1 timeStamp:(unsigned int)arg2;
+ (id)genTokenByUniversalLink:(id)arg1;
+ (void)sendRefreshTokenRespToAppWithPayOpenApiParameter:(id)arg1 appIconUrl:(id)arg2 appNickname:(id)arg3 presentViewController:(id)arg4 dismissCompletion:(CDUnknownBlockType)arg5;
+ (void)sendRefreshTokenRespToApp:(id)arg1 appIconUrl:(id)arg2 appNickname:(id)arg3 presentViewController:(id)arg4 dismissCompletion:(CDUnknownBlockType)arg5;
+ (id)appendQueryToUrl:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)genSchemeUrlWithAppId:(id)arg1 extraUrl:(id)arg2 extraQueryDict:(id)arg3;
+ (id)genUniversalLinkWithAppId:(id)arg1 universalLink:(id)arg2 extraUrl:(id)arg3 extraQueryDict:(id)arg4;
+ (id)genLaunchUrlWithAppId:(id)arg1 universalLink:(id)arg2 extraUrl:(id)arg3 extraQueryDict:(id)arg4;
+ (id)genResendContextReqSchemeUrl:(id)arg1 contextID:(id)arg2;
+ (id)appendTokenToUrl:(id)arg1 universalLink:(id)arg2 contextID:(id)arg3 token:(id *)arg4;
+ (id)appendTokenToUrl:(id)arg1 universalLink:(id)arg2 contextID:(id)arg3;
+ (id)genRefreshTokenUniversalLink:(id)arg1 appID:(id)arg2 contextID:(id)arg3 token:(id *)arg4;
+ (_Bool)isUrl:(id)arg1 hasValidPrefixWithUniversalLink:(id)arg2;
+ (id)parseAndRemoveQueryFromUrl:(id)arg1 keyArray:(id)arg2 outputKeyValueDic:(id *)arg3;
+ (id)optimizedParseAndRemoveQueryFromUrl:(id)arg1 keyArray:(id)arg2 outputKeyValueDic:(id *)arg3;
+ (id)parseAndRemoveAppExtraDataFromUrl:(id)arg1 sdkBundleID:(id *)arg2 isDegradeLaunchByScheme:(_Bool *)arg3;
+ (id)parseAndRemoveAppExtraDataFromUrl:(id)arg1 token:(id *)arg2 contextID:(id *)arg3 sdkBundleID:(id *)arg4;
+ (_Bool)handleOpenApiUrlWithOpenParam:(id)arg1;
+ (void)clearOpenSDKPasteBoardData;
+ (id)genAppCommunicateDataWithAppID:(id)arg1 apiName:(id)arg2 paramsDic:(id)arg3 passDataWithUrlPtr:(_Bool *)arg4 forbidReadPasteBoard:(_Bool)arg5;
+ (_Bool)isPayApiName:(id)arg1;
+ (id)createOpenParamWithUrl:(id)arg1 apiName:(id)arg2 appID:(id)arg3 bundleID:(id)arg4 isLaunchByUniversalLink:(_Bool)arg5;
+ (void)reportErasedDataWhenReadFail;
+ (void)reportErasedSomeDataInSDK;
+ (void)reportParseBizStrToDataFail;
+ (void)reportBizDataStrCompressed;
+ (void)reportBizDataLenInvalid;
+ (void)reportBizDataContentValid;
+ (_Bool)checkAndReportReadPasteboardFail:(id)arg1;
+ (void)reportLaunchAppWithUniversalLink:(id)arg1 appID:(id)arg2 token:(id)arg3 success:(_Bool)arg4 scene:(unsigned int)arg5;
+ (void)reportTransalteLinkRefreshTokenLaunchSchemeSuccess;
+ (void)reportTransalteLinkRefreshTokenLaunchUniversalLinkFail;
+ (void)reportTransalteLinkRefreshToken;
+ (void)reportWCPayLaunch3rdWithScheme;
+ (void)reportWCPayLaunch3rdWithSchemeSuccessByUniversalLinkFail:(_Bool)arg1 showUI:(_Bool)arg2;
+ (void)reportWCPayLaunch3rdWithUniversalLinkFail:(_Bool)arg1 showUI:(_Bool)arg2;
+ (void)reportWCPayLaunch3rdWithUniversalLink:(_Bool)arg1 showUI:(_Bool)arg2;
+ (void)reportWCPayLaunch3rdWithUniversalLink;
+ (void)reportWCPayLaunchWithOpenParameter:(id)arg1;
+ (void)reportAuthUserConfirmAlertSchemeJumpSuccess:(_Bool)arg1;
+ (void)reportAuthUserCancelAlertSchemeJump:(_Bool)arg1;
+ (void)reportAuthUserConfirmAlertSchemeJump:(_Bool)arg1;
+ (void)reportAuthShowAlertSchemeJump:(_Bool)arg1;
+ (void)reportAuthLaunch3rdAppByUniversalLink:(_Bool)arg1;
+ (void)reportAuthLaunch3rdApp:(_Bool)arg1 withToken:(_Bool)arg2;
+ (void)reportAuthRejectBySvr:(_Bool)arg1;
+ (void)reportAuthLaunchWithOpenParameter:(id)arg1;
+ (void)reportLaunchAppWithUniversalLinkFailDegradeScheme;
+ (void)reportLaunchAppWithUniversalLinkFail;
+ (void)reportLaunchAppWithUniversalLink;
+ (void)reportLaunchWXWithOpenParameter:(id)arg1;
+ (void)reportRefreshTokenResult:(id)arg1 appNickName:(id)arg2 universalLink:(id)arg3 bundleID:(id)arg4 sdkBundleID:(id)arg5 token:(id)arg6 sdkVersion:(id)arg7 resultCode:(unsigned long long)arg8 errMsg:(id)arg9;
+ (void)reportRefreshTokenResultWithOpenParameter:(id)arg1 errMsg:(id)arg2;
+ (void)reportRefreshToken;
+ (unsigned int)convertVersionStrToInt:(id)arg1;

@end

