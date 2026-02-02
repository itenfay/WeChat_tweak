//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAPackageUpdateLogic : NSObject
{
    NSMutableArray *_arrRequestingAppInfoData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrRequestingAppInfoData; // @synthesize arrRequestingAppInfoData=_arrRequestingAppInfoData;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (_Bool)startDownloadPkgWithAppInfoData:(id)arg1 CDNURL:(id)arg2 CDNURLWithZstd:(id)arg3 patchURL:(id)arg4;
- (void)onPackageDownloadUrlFetchFailWithErrCode:(long long)arg1 forInfoData:(id)arg2;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(id)arg1 zstdUrl:(id)arg2 patchUrl:(id)arg3 forInfoData:(id)arg4;
- (void)tryUpdatePackageWithAppInfoData:(id)arg1;
- (void)removeRequestingAppInfoData:(id)arg1;
- (id)getRequestingInfoDataForAppInfoData:(id)arg1;
- (_Bool)isAppInfoDataInRequesting:(id)arg1;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

