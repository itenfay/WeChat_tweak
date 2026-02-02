//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <AVFoundation/AVAssetImageGenerator.h>

@class NSMutableDictionary;

@interface TAVCachedAssetImageGenerator : AVAssetImageGenerator
{
    NSMutableDictionary *_imageCache;
}

+ (id)assetImageGeneratorWithAsset:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
- (id)keyAtTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)hasCacheAtTime:(CDStruct_1b6d18a9)arg1;
- (void)generateCGImagesAsynchronouslyForTime:(CDStruct_1b6d18a9)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (struct CGImage *)copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 actualTime:(CDStruct_1b6d18a9 *)arg2 error:(id *)arg3;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)initWithAsset:(id)arg1;

@end

