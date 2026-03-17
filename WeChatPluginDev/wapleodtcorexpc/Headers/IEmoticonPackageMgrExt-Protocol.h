//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol IEmoticonPackageMgrExt

@optional
- (void)OnEmoticonPackIPSetKeyChanged:(NSString *)arg1;
- (void)OnEmoticonPackageDownloadStatusChanged:(NSString *)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(NSString *)arg2;
@end

