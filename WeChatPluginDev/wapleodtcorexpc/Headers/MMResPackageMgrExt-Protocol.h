//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol MMResPackageMgrExt

@optional
- (void)onResPackageDownloadProcessUpdated:(NSString *)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onResPackageDownloadFailed:(NSString *)arg1;
- (void)onResPackageReady:(NSString *)arg1;
@end

