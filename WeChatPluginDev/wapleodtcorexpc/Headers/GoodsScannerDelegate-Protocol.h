//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, ScanGoodsImageInfo, UIImage;

@protocol GoodsScannerDelegate <NSObject>

@optional
- (void)onSendImageDataFail:(ScanGoodsImageInfo *)arg1 errorCode:(long long)arg2 errorMsg:(NSString *)arg3 isNetworkError:(_Bool)arg4;
- (void)onSendImageDataSuccess:(ScanGoodsImageInfo *)arg1 sendoutImage:(UIImage *)arg2 normalizedCenter:(struct CGPoint)arg3 normalizedSize:(struct CGSize)arg4;
- (void)onSendImageDataLength:(unsigned long long)arg1;
- (void)onGetGoodsScanDotInfoList:(NSArray *)arg1;
- (void)onCaptureNewBuffer;
@end

