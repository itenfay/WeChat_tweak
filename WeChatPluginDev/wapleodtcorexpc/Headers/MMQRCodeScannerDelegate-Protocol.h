//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol MMQRCodeScannerDelegate
- (void)onQRCodeScanSuccess:(NSString *)arg1 atPoint:(vector_d4107ee0)arg2 originSize:(struct CGSize)arg3;
- (void)onNoQRCode;
@end

