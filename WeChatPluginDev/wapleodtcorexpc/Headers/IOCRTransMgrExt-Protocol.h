//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, OCRResult, ProtobufCGIWrap, UIImage;

@protocol IOCRTransMgrExt <NSObject>

@optional
- (void)onDetectDocumentArea:(unsigned long long)arg1 vetrices:(NSMutableArray *)arg2 docImg:(UIImage *)arg3 originImg:(UIImage *)arg4;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(OCRResult *)arg2 pbCGIWrap:(ProtobufCGIWrap *)arg3;
- (void)onCdnUploadImageDataFinish:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)OnTakeOCRGrayImage:(UIImage *)arg1;
- (void)OnTakeOCRImage:(UIImage *)arg1;
@end

