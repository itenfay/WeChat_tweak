//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCLivePhotoMovModel : NSObject
{
}

+ (_Bool)isVideoCodecSupportedForLivePhoto:(id)arg1;
+ (long long)countFrames:(_Bool)arg1 asset:(id)arg2;
+ (CDStruct_e83c9415)makeStillImageTimeRangeWithStillImageTimeMs:(long long)arg1 inFrameCount:(long long)arg2 videoDuration:(CDStruct_1b6d18a9)arg3;
+ (id)createStillImageTimeMetadataItem;
+ (id)createStillImageTimeWriterInputMetadataAdapter;
+ (id)createContentIdentifierMetadataItem:(id)arg1;
+ (void)finishWritingTracksWithVideo:(id)arg1 reader:(id)arg2 writer:(id)arg3 durationMs:(long long)arg4 isSuccess:(_Bool)arg5 error:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)writeTrack:(long long)arg1 reader:(id)arg2 writer:(id)arg3 queue:(id)arg4 group:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)addMetadataToVideo:(id)arg1 outputVideoPath:(id)arg2 identifier:(id)arg3 preferedHEVC:(_Bool)arg4 stillImageTimeMs:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)addMetadataToVideoWithAsset:(id)arg1 outputVideoPath:(id)arg2 identifier:(id)arg3 preferedHEVC:(_Bool)arg4 stillImageTimeMs:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end

