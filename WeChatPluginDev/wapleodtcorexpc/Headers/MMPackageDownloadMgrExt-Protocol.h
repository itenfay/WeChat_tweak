//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString;

@protocol MMPackageDownloadMgrExt

@optional
- (void)onPackageNeedDelete:(NSString *)arg1 withPackIDs:(NSArray *)arg2;
- (void)onPackageNeedUpdate:(NSString *)arg1 withPackIDs:(NSArray *)arg2;
- (void)onPackageCancelFinish:(NSString *)arg1;
- (void)onPackageDownloadFinish:(NSString *)arg1 package:(NSData *)arg2;
- (void)onPackageDownloadProcessUpdated:(NSString *)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(NSArray *)arg1;
@end

