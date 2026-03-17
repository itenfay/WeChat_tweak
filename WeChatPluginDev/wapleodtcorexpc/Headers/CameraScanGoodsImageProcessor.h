//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanGoodsImageProcessor : NSObject
{
}

+ (id)genUploadWXAMData:(id)arg1;
+ (id)genUploadWebpData:(id)arg1;
+ (id)genUploadImageData:(id)arg1 outputImageSize:(struct CGSize *)arg2;
+ (id)generateCroppedImage:(struct CGRect)arg1 CVMat:(struct Mat)arg2;
+ (id)generateMinLen:(int)arg1 CVMat:(struct Mat)arg2;
+ (id)generateCVMat:(struct __CVBuffer *)arg1 enableMem:(_Bool)arg2;

@end

