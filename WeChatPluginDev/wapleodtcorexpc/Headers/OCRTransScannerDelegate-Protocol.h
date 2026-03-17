//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIImage;

@protocol OCRTransScannerDelegate <NSObject>

@optional
- (void)onGotImageByCamera:(UIImage *)arg1;
- (void)onGotImageByScanning:(UIImage *)arg1 cropRect:(struct CGRect)arg2;
- (void)onStopScanning;
- (void)onStartScanning;
- (void)onGotOCRResult:(NSArray *)arg1;
- (void)onSendDataLength:(unsigned int)arg1;
- (void)onOCRTransError:(int)arg1;
- (void)onGotOCRResultOrign:(NSString *)arg1 Translation:(NSString *)arg2;
@end

