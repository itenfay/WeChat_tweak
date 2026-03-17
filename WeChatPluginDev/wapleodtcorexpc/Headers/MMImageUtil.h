//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMImageUtil : NSObject
{
}

+ (id)genarateOriginImageDataFromUIImage:(id)arg1;
+ (long long)cgImageOrientToUI:(unsigned int)arg1;
+ (unsigned int)getCGIOrientationFromImage:(id)arg1;
+ (struct CGSize)calculateImageFitSizeForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2 fillWidth:(_Bool)arg3;
+ (struct CGSize)calculateImageFitSizeForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
+ (struct CGRect)calculateImageRealFitRectForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2 contentRatio:(struct CGPoint)arg3;
+ (struct CGRect)calculateImageFitRectForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2 contentRatio:(struct CGPoint)arg3;
+ (struct CGRect)calculateImageFitRectForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
+ (id)resizeTo:(struct CGSize)arg1 originImage:(id)arg2;
+ (id)resizeToMinSideLenDisplayMode:(long long)arg1 originImage:(id)arg2;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2 withOrientation:(long long)arg3 imageData:(id)arg4;
+ (unsigned int)getMaxImageSizeAreaFitMemory;
+ (id)scaleImageToFitMemory:(id)arg1 data:(id)arg2;
+ (id)scaleImageToFitMemory:(id)arg1;
+ (unsigned long long)amountOfFreeMemory;
+ (id)compressImageToFullScreen:(id)arg1;
+ (id)fitImageOfLongImage:(id)arg1;
+ (void)mov2mp4withInputURL:(id)arg1 withOutputURL:(id)arg2 withTarget:(id)arg3 withSel:(SEL)arg4 withQuality:(id)arg5;
+ (id)scaledImageWithData:(id)arg1 withSize:(struct CGSize)arg2 scale:(double)arg3 orientation:(long long)arg4;
+ (_Bool)isPhotoLibraryAuthorize;
+ (id)removePrivacyInfoFromImageData:(id)arg1;
+ (_Bool)isImageDataContainsPrivacyInfo:(id)arg1;
+ (id)saveImageWithImageData:(id)arg1 Properties:(id)arg2;
+ (id)createMetaData:(id)arg1 exifDic:(id)arg2 tiffDic:(id)arg3 gpsDic:(id)arg4;
+ (id)exifInfoWithImageData:(id)arg1;
+ (id)processImageInfo:(id)arg1 imagePicker:(id)arg2;
+ (id)generateVideoThumbImage:(id)arg1 atTime:(double)arg2;
+ (id)getImageByColor:(id)arg1 inSize:(struct CGSize)arg2 isSender:(_Bool)arg3;
+ (id)maskImage:(id)arg1 addTriangle:(_Bool)arg2 isSender:(_Bool)arg3 inSize:(struct CGSize)arg4 corners:(unsigned long long)arg5;
+ (id)maskImage:(id)arg1 isSender:(_Bool)arg2 inSize:(struct CGSize)arg3 corners:(unsigned long long)arg4;
+ (id)maskImage:(id)arg1 isSender:(_Bool)arg2 inSize:(struct CGSize)arg3;
+ (id)maskPathInRect:(struct CGRect)arg1 needTriangle:(_Bool)arg2 isSender:(_Bool)arg3 corners:(unsigned long long)arg4 scale:(double)arg5;
+ (id)maskPathInRect:(struct CGRect)arg1 needTriangle:(_Bool)arg2 isSender:(_Bool)arg3 corners:(unsigned long long)arg4;
+ (id)hdImageWithContentsOfFile:(id)arg1;
+ (id)maskedThumbImageForMessageImage:(id)arg1 imageSize:(struct CGSize)arg2 isSender:(_Bool)arg3;
+ (id)maskedThumbImageForMessageImage:(id)arg1 imageSize:(struct CGSize)arg2;
+ (struct CGSize)maskedThumbImageSizeForMessageImage:(struct CGSize)arg1;
+ (struct CGSize)maskedThumbImageSize:(struct CGSize)arg1;
+ (id)getDataCompressedImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)getNormalCompressedImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)resizeToNormalCompressImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)exifLogInfoWithAsset:(id)arg1;
+ (id)exifLogInfoWithImageData:(id)arg1 image:(id)arg2 originImageSize:(struct CGSize)arg3;
+ (id)exifLogInfoWithImageData:(id)arg1 image:(id)arg2;
+ (id)exifLogInfoWithImageData:(id)arg1;

@end

