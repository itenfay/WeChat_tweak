//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol WACameraQRCodeScannerDelegate <NSObject>

@optional
- (void)onGotScanResult:(NSDictionary *)arg1;
- (void)onDetectQRCode:(_Bool)arg1 zoomFactor:(float)arg2;
@end

