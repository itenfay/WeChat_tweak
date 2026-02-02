//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCComposingFactory : NSObject
{
}

+ (id)_fetchAssetFrameRateInfosFromAssets:(const void *)arg1;
+ (id)assetIDWithMJAssetInfo:(id)arg1;
+ (id)assetIDWithPHAsset:(id)arg1;
+ (void)prepareAssetInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_prepareAssetInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)prepareAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_prepareAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_createTimelineWithAKAssets:(const void *)arg1 aspectRatio:(id)arg2 imageOriginDuration:(CDStruct_1b6d18a9)arg3 minSegmentPreservedDuration:(CDStruct_1b6d18a9)arg4 enableHDRPlayback:(_Bool)arg5 calcDurationWithAllSegments:(_Bool)arg6 videoFrameRateHandler:(CDUnknownBlockType)arg7 postProcHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (void)createTimelineWithAssetInfos:(id)arg1 aspectRatio:(id)arg2 imageOriginDuration:(CDStruct_1b6d18a9)arg3 minSegmentPreservedDuration:(CDStruct_1b6d18a9)arg4 enableHDRPlayback:(_Bool)arg5 calcDurationWithAllSegments:(_Bool)arg6 videoFrameRateHandler:(CDUnknownBlockType)arg7 postProcHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (void)createTimelineWithPHAssets:(id)arg1 aspectRatio:(id)arg2 imageOriginDuration:(CDStruct_1b6d18a9)arg3 minSegmentPreservedDuration:(CDStruct_1b6d18a9)arg4 enableHDRPlayback:(_Bool)arg5 calcDurationWithAllSegments:(_Bool)arg6 videoFrameRateHandler:(CDUnknownBlockType)arg7 postProcHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;

@end

