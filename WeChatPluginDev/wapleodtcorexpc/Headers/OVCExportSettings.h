//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OVCExportSettings : NSObject
{
    _Bool _enableHDR;
    int _videoBitsPerFrame;
    int _averageAudioBitRate;
    unsigned long long _mediaContainerType;
    unsigned long long _videoFrameRate;
    unsigned long long _videoDimensionLevel;
    unsigned long long _videoCodecType;
    unsigned long long _audioCodecType;
}

@property(readonly, nonatomic) _Bool enableHDR; // @synthesize enableHDR=_enableHDR;
@property(readonly, nonatomic) int averageAudioBitRate; // @synthesize averageAudioBitRate=_averageAudioBitRate;
@property(readonly, nonatomic) int videoBitsPerFrame; // @synthesize videoBitsPerFrame=_videoBitsPerFrame;
@property(readonly, nonatomic) unsigned long long audioCodecType; // @synthesize audioCodecType=_audioCodecType;
@property(readonly, nonatomic) unsigned long long videoCodecType; // @synthesize videoCodecType=_videoCodecType;
@property(readonly, nonatomic) unsigned long long videoDimensionLevel; // @synthesize videoDimensionLevel=_videoDimensionLevel;
@property(readonly, nonatomic) unsigned long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(readonly, nonatomic) unsigned long long mediaContainerType; // @synthesize mediaContainerType=_mediaContainerType;
- (SharedPtr_49b709ef)createBackingExportSettings;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 averageAudioBitRate:(int)arg7 enableHDR:(_Bool)arg8;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 averageAudioBitRate:(int)arg7;

@end

