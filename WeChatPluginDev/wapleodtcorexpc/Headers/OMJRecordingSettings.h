//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface OMJRecordingSettings : NSObject
{
    _Bool _useMetadataTags;
    _Bool _outputMixedWithBGM;
    _Bool _shouldGenerateCoverImage;
    int _videoBitsPerFrame;
    int _audioAverageBitRate;
    int _videoMaxKeyframeInterval;
    int _videoClockwiseRotation;
    unsigned long long _mediaContainerType;
    unsigned long long _videoCodecType;
    unsigned long long _audioCodecType;
    unsigned long long _videoDimensionLevel;
    NSDictionary *_metaData;
    long long _camOSTMode;
    unsigned long long _checksumType;
    CDStruct_1b6d18a9 _maxRecordingDuration;
}

+ (id)default720pSettings;
+ (id)default1080pSettings;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long checksumType; // @synthesize checksumType=_checksumType;
@property(nonatomic) _Bool shouldGenerateCoverImage; // @synthesize shouldGenerateCoverImage=_shouldGenerateCoverImage;
@property(nonatomic) int videoClockwiseRotation; // @synthesize videoClockwiseRotation=_videoClockwiseRotation;
@property(nonatomic) _Bool outputMixedWithBGM; // @synthesize outputMixedWithBGM=_outputMixedWithBGM;
@property(nonatomic) long long camOSTMode; // @synthesize camOSTMode=_camOSTMode;
@property(nonatomic) _Bool useMetadataTags; // @synthesize useMetadataTags=_useMetadataTags;
@property(retain, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(nonatomic) CDStruct_1b6d18a9 maxRecordingDuration; // @synthesize maxRecordingDuration=_maxRecordingDuration;
@property(readonly, nonatomic) int videoMaxKeyframeInterval; // @synthesize videoMaxKeyframeInterval=_videoMaxKeyframeInterval;
@property(readonly, nonatomic) int audioAverageBitRate; // @synthesize audioAverageBitRate=_audioAverageBitRate;
@property(readonly, nonatomic) int videoBitsPerFrame; // @synthesize videoBitsPerFrame=_videoBitsPerFrame;
@property(readonly, nonatomic) unsigned long long videoDimensionLevel; // @synthesize videoDimensionLevel=_videoDimensionLevel;
@property(readonly, nonatomic) unsigned long long audioCodecType; // @synthesize audioCodecType=_audioCodecType;
@property(readonly, nonatomic) unsigned long long videoCodecType; // @synthesize videoCodecType=_videoCodecType;
@property(readonly, nonatomic) unsigned long long mediaContainerType; // @synthesize mediaContainerType=_mediaContainerType;
- (struct XMJRecordingSettings)createBackingRecordingSettings;
- (id)initWithContainerType:(unsigned long long)arg1 videoCodecType:(unsigned long long)arg2 audioCodecType:(unsigned long long)arg3 videoDimensionLevel:(unsigned long long)arg4 videoBitsPerFrame:(int)arg5 audioAverageBitRate:(int)arg6 videoMaxKeyframeInterval:(int)arg7;

@end

