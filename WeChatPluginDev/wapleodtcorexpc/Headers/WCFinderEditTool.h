//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderEditTool : NSObject
{
}

+ (struct CGAffineTransform)adjustPreferredTransform:(struct CGAffineTransform)arg1 withNaturalSize:(struct CGSize)arg2;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(struct CGSize)arg2 editVideoAttr:(id)arg3 previewMoveDatas:(id)arg4 emotionOffSet:(struct CGPoint)arg5 cropFrame:(struct CGRect)arg6 completion:(CDUnknownBlockType)arg7 useFilledScreenMode:(_Bool)arg8;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(struct CGSize)arg2 editVideoAttr:(id)arg3 previewMoveDatas:(id)arg4 emotionOffSet:(struct CGPoint)arg5 cropFrame:(struct CGRect)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(struct CGSize)arg2 editVideoAttr:(id)arg3 needFullVideoEditTimeRange:(_Bool)arg4 completion:(CDUnknownBlockType)arg5 useFilledScreenMode:(_Bool)arg6;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(struct CGSize)arg2 editVideoAttr:(id)arg3 needFullVideoEditTimeRange:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)thumbImageViewWithComposition:(id)arg1 videoComposition:(id)arg2 atTime:(double)arg3;
+ (_Bool)useVideoCompositionLib;
+ (double)finderEditVideoMinDuration;
+ (unsigned long long)finderComposeAtomSizeLen;
+ (double)finderEditVideoMaxDurationWithVideoDuration:(double)arg1;
+ (double)finderEditVideoMaxDuration;
+ (double)editVideoHeightWidthRatioMin;
+ (double)editVideoHeightWidthRatioMax;
+ (struct CGSize)editVideoProgressBarImageSize;
+ (_Bool)needAdjustEditViewLayout;
+ (CDStruct_1b6d18a9)convectTime:(CDStruct_1b6d18a9)arg1;

@end

