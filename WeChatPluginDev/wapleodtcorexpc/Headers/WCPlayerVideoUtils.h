//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPlayerVideoUtils : NSObject
{
}

+ (_Bool)isMediaNotSupportedCode:(long long)arg1;
+ (_Bool)isDecoderErrorCode:(long long)arg1;
+ (float)asset:(id)arg1 syncGetDurationWithTimeout:(float)arg2;
+ (struct CGSize)getVideoSizeWithPath:(id)arg1;
+ (double)syncGetDurationWithPath:(id)arg1;
+ (double)syncAVGetDurationWithPath:(id)arg1;
+ (id)getVideoMetaWithPath:(id)arg1;
+ (unsigned int)getVideoCodecWithPath:(id)arg1;
+ (struct CGImage *)getCurSnapshotWithPlaybackInfo:(id)arg1 VideoOutput:(id)arg2 CurTime:(CDStruct_1b6d18a9)arg3;
+ (struct CGImage *)getCurSnapshotWithPlaybackInfo:(id)arg1 Asset:(id)arg2;
+ (id)getCurSnapshotWithPlaybackInfo:(id)arg1 VideoOutput:(id)arg2 Asset:(id)arg3 CurTime:(CDStruct_1b6d18a9)arg4;
+ (id)getPlayerObserveChangeWithItem:(id)arg1;
+ (CDStruct_e83c9415)getVideoBufferTimeRange:(id)arg1;
+ (double)getVideoDurationWithPlayerItem:(id)arg1;
+ (struct CGAffineTransform)getVideoTransformWithAsset:(id)arg1;
+ (float)getAudioBitRateWithAsset:(id)arg1;
+ (float)getVideoBitRateWithAsset:(id)arg1;

@end

