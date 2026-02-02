//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPlayerPIPUtils : NSObject
{
}

+ (struct __CVBuffer *)generatePixBufferWithVideoSize:(struct CGSize)arg1;
+ (void)buildPlayerItemWithVideoSize:(struct CGSize)arg1 durationSec:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)buildCompositionWithVideoSize:(struct CGSize)arg1 filePath:(id)arg2 durationSec:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)asyncGetComposePipVideoPathWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)spliceVideoWithAsset:(id)arg1 durationSec:(double)arg2 compositionTrack:(id)arg3 ofTracks:(id)arg4;
+ (id)GetBundleVideoPath;
+ (id)GetPathOfTmpPipAssetResource;
+ (id)GetPathOfPipAssetResource;

@end

