//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMJMovieExportSettings : NSObject
{
    _Bool _enableHDR;
    _Bool _isCoverImageDetectionEnabled;
    int _videoBitsPerFrame;
    int _audioAverageBitRate;
    int _videoMaxKeyframeInterval;
    int _coverImageDetectionFrameInterval;
    float _coverImageDetectionDarknessRatioThreshold;
    unsigned long long _mediaContainerType;
    unsigned long long _videoFrameRate;
    unsigned long long _videoDimensionLevel;
    unsigned long long _videoCodecType;
    unsigned long long _audioCodecType;
    NSString *_copyrightMetadata;
    CDStruct_1b6d18a9 _coverImageDetectionMaxDuration;
}

- (void).cxx_destruct;
@property(nonatomic) float coverImageDetectionDarknessRatioThreshold; // @synthesize coverImageDetectionDarknessRatioThreshold=_coverImageDetectionDarknessRatioThreshold;
@property(nonatomic) CDStruct_1b6d18a9 coverImageDetectionMaxDuration; // @synthesize coverImageDetectionMaxDuration=_coverImageDetectionMaxDuration;
@property(nonatomic) int coverImageDetectionFrameInterval; // @synthesize coverImageDetectionFrameInterval=_coverImageDetectionFrameInterval;
@property(nonatomic) _Bool isCoverImageDetectionEnabled; // @synthesize isCoverImageDetectionEnabled=_isCoverImageDetectionEnabled;
@property(nonatomic) _Bool enableHDR; // @synthesize enableHDR=_enableHDR;
@property(copy, nonatomic) NSString *copyrightMetadata; // @synthesize copyrightMetadata=_copyrightMetadata;
@property(nonatomic) int videoMaxKeyframeInterval; // @synthesize videoMaxKeyframeInterval=_videoMaxKeyframeInterval;
@property(nonatomic) int audioAverageBitRate; // @synthesize audioAverageBitRate=_audioAverageBitRate;
@property(nonatomic) int videoBitsPerFrame; // @synthesize videoBitsPerFrame=_videoBitsPerFrame;
@property(nonatomic) unsigned long long audioCodecType; // @synthesize audioCodecType=_audioCodecType;
@property(nonatomic) unsigned long long videoCodecType; // @synthesize videoCodecType=_videoCodecType;
@property(nonatomic) unsigned long long videoDimensionLevel; // @synthesize videoDimensionLevel=_videoDimensionLevel;
@property(nonatomic) unsigned long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) unsigned long long mediaContainerType; // @synthesize mediaContainerType=_mediaContainerType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)exportMJSettings;
- (id)initWithOMJMovieExportSettings:(id)arg1;

@end

