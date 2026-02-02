//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol NewQRCodeScannerDelegate <NSObject>

@optional
- (_Bool)hasDetectBarCodeNoResult:(NSString *)arg1;
- (struct CGSize)getContentViewSize;
- (void)onRecievePixelBufferInCaptureDelegateThread:(struct __CVBuffer *)arg1;
- (void)onDetectCodesWithMarkDotInfoList:(NSArray *)arg1 isCameraScan:(_Bool)arg2;
- (void)onDetectQRCode:(_Bool)arg1 zoomFactor:(float)arg2;
@end

