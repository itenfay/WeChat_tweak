//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WACacheVersionPreChecker : NSObject
{
}

- (void)unfoldInfoData:(id)arg1;
- (id)getInfoDataWithPackageConfig:(id)arg1 moduleName:(id)arg2;
- (id)generateParallelDownloadInfoDatasWithContext:(id)arg1;
- (id)generateInfoDatasWithPackageConfig:(id)arg1 relativeUrl:(id)arg2 entryPackages:(id)arg3;
- (_Bool)checkLocalCacheOK:(id)arg1;
- (void)checkLocalCacheWithInfoDataList:(id)arg1 getDownloadInfoDataList:(id)arg2 getCheckPassInfoDataList:(id)arg3 getCheckFailedInfoDataList:(id)arg4 getCheckAutoUpdateInfoDataList:(id)arg5 getPluginInfoDatas:(id)arg6;
- (void)markAutoUpdatePluginInfoWithAppInfoData:(id)arg1;
- (void)callCompletionForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 success:(_Bool)arg3 needDownloadInfoDatas:(id)arg4 checkPassInfoDatas:(id)arg5 checkFailedInfoDatas:(id)arg6 checkAutoUpdateInfoDatas:(id)arg7 pluginInfoDatas:(id)arg8;
- (_Bool)tryDoDecryptAndRemoveDecryptEnabledInfoData:(id)arg1;
- (void)reportSplitPluginCodeStatisCheckData:(id)arg1 arrDownload:(id)arg2 appID:(id)arg3 appVersion:(unsigned int)arg4 appState:(unsigned long long)arg5 appServiceType:(unsigned int)arg6 scene:(unsigned int)arg7 instanceId:(id)arg8;
- (void)tryReportWeappSplitPluginCodeStatisCheckData:(id)arg1 arrDownload:(id)arg2 appID:(id)arg3 appVersion:(unsigned int)arg4 appState:(unsigned long long)arg5 appServiceType:(unsigned int)arg6 scene:(unsigned int)arg7 instanceId:(id)arg8;
- (id)genReportKeyForWeappPluginUseWithInstanceId:(id)arg1 pluginAppId:(id)arg2 pluginVersion:(unsigned int)arg3;
- (void)startParallelDownloadCheckWithCheckerContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPreCheckCacheVersionWithCheckerContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

