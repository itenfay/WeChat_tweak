//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SightUtils : NSObject
{
}

+ (double)syncGetDurationWithPath:(id)arg1;
+ (_Bool)isProResVideoWithAsset:(id)arg1;
+ (_Bool)isH265VideoByAsset:(id)arg1;
+ (void)ConvertHevcToH264:(id)arg1 outputPath:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)isH266VideoByPath:(id)arg1;
+ (_Bool)isH265VideoByPath:(id)arg1;
+ (struct CGSize)videoFrameSizeWithVideo:(id)arg1;
+ (_Bool)isThumbImage:(id)arg1 matchVideo:(id)arg2;
+ (_Bool)shouldUpdateThumbImageWithSightVideoPath:(id)arg1 thumbImagePath:(id)arg2;
+ (_Bool)generateThumbImageFromVideo:(id)arg1 toThumbImage:(id)arg2;
+ (_Bool)isVideoPlayableForURL:(id)arg1;
+ (_Bool)isVideoPlayableForPath:(id)arg1;
+ (id)generateVideoThumbImageWithAsset:(id)arg1 atTime:(double)arg2 isTimeTolerance:(_Bool)arg3;
+ (id)generateVideoThumbImageWithAsset:(id)arg1 atTime:(double)arg2;
+ (id)resizeVideoThumb:(id)arg1;
+ (_Bool)shouldResizeVideoThumbImage:(id)arg1;
+ (_Bool)shouldResizeVideoThumbWithSize:(struct CGSize)arg1;
+ (id)thumbForVideoWithPath:(id)arg1 atTimeStart:(double)arg2 untilTimeEnd:(double)arg3;
+ (id)thumbForVideoWithAsset:(id)arg1 atTime:(double)arg2;
+ (_Bool)detectImagePureColor:(id)arg1;
+ (_Bool)detectImageBlack:(id)arg1;
+ (id)generateImageFromVideoURL:(id)arg1 withStartTime:(double)arg2 endTime:(double)arg3 actualOffsetRef:(double *)arg4 enableUndersampling:(_Bool)arg5 enableBlackAvoiding:(_Bool)arg6;
+ (id)thumbForVideoWithAsset:(id)arg1;
+ (id)newThumbForVideoWithPath:(id)arg1;
+ (id)thumbForVideoWithPath:(id)arg1;
+ (id)unBlackFrameCoverForVideoWithPath:(id)arg1 atTimeStart:(double)arg2 untilTimeEnd:(double)arg3;
+ (id)originSizeThumbForVideoWithPath:(id)arg1 atTime:(double)arg2 isTimeTolerance:(_Bool)arg3;
+ (id)originSizeThumbForVideoWithPath:(id)arg1 nonBlackFrame:(_Bool)arg2 inTime:(double)arg3;
+ (id)originSizeThumbForVideoWithPath:(id)arg1;
+ (double)useAlgorithmCheckNonBlackFrameTimeStamp:(id)arg1;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;

@end

