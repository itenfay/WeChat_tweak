//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, SingleEmotionDownloadWrap;

@protocol IStoreEmotionSingleDownloadMgrExt <NSObject>

@optional
- (void)onSingleEmotionDownloadFailedWithMd5:(NSString *)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(SingleEmotionDownloadWrap *)arg1 imagePath:(NSString *)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(SingleEmotionDownloadWrap *)arg1 imageData:(NSData *)arg2;
@end

