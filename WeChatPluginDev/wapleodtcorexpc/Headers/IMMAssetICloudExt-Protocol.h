//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMMAssetICloudExt <NSObject>

@optional
- (void)onAssetImageDonwloadFail:(NSString *)arg1;
- (void)onAssetImageDonwloadStart:(NSString *)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(NSString *)arg2;
- (void)onAssetVideoDonwloadFailed:(NSString *)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(NSString *)arg2;
@end

