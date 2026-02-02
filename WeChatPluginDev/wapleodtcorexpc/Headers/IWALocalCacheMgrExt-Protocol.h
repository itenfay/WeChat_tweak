//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAInfoData;

@protocol IWALocalCacheMgrExt

@optional
- (void)onCheckLocalPkg:(_Bool)arg1;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(WAInfoData *)arg2 errorCode:(unsigned int)arg3 errorMsg:(NSString *)arg4;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 withAppInfoData:(WAInfoData *)arg4;
@end

