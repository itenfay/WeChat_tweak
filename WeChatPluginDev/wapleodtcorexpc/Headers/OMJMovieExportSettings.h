//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OMJMovieExportSettings : NSObject
{
    _Bool _isUseExportMetadataTags;
    _Bool _enableHDR;
    _Bool _isCoverImageDetectionEnabled;
    int _videoBitsPerFrame;
    int _audioAverageBitRate;
    int _videoMaxKeyframeInterval;
    int _coverImageDetectionFrameInterval;
    float _coverImageDetectionDarknessRatioThreshold;
    float _coverImageClarityThreshold;
    unsigned long long _mediaContainerType;
    unsigned long long _videoFrameRate;
    unsigned long long _videoDimensionLevel;
    unsigned long long _videoCodecType;
    unsigned long long _audioCodecType;
    NSString *_copyrightMetadata;
    NSDictionary *_exportMetadata;
    unsigned long long _checksumType;
    CDStruct_1b6d18a9 _coverImageDetectionMaxDuration;
}

+ (id)default720pSettings;
+ (id)default1080pSettings;
+ (int)wcmj_videoMaxKeyframeIntervalFromEncodeParams:(id)arg1;
+ (int)wcmj_audioAverageBitRateFromEncodeParams:(id)arg1;
+ (int)wcmj_videoBitsPerFrameFromEncodeParams:(id)arg1;
+ (unsigned long long)wcmj_videoDimensionLevelFromEncodeParams:(id)arg1;
+ (unsigned long long)wcmj_videoFrameRateFromEncodeParams:(id)arg1;
+ (id)wcmj_exportSettingsFromEncodeParams:(id)arg1 enableHDR:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long checksumType; // @synthesize checksumType=_checksumType;
@property(nonatomic) float coverImageClarityThreshold; // @synthesize coverImageClarityThreshold=_coverImageClarityThreshold;
@property(nonatomic) float coverImageDetectionDarknessRatioThreshold; // @synthesize coverImageDetectionDarknessRatioThreshold=_coverImageDetectionDarknessRatioThreshold;
@property(nonatomic) CDStruct_1b6d18a9 coverImageDetectionMaxDuration; // @synthesize coverImageDetectionMaxDuration=_coverImageDetectionMaxDuration;
@property(nonatomic) int coverImageDetectionFrameInterval; // @synthesize coverImageDetectionFrameInterval=_coverImageDetectionFrameInterval;
@property(nonatomic) _Bool isCoverImageDetectionEnabled; // @synthesize isCoverImageDetectionEnabled=_isCoverImageDetectionEnabled;
@property(readonly, nonatomic) _Bool enableHDR; // @synthesize enableHDR=_enableHDR;
@property(nonatomic) _Bool isUseExportMetadataTags; // @synthesize isUseExportMetadataTags=_isUseExportMetadataTags;
@property(retain, nonatomic) NSDictionary *exportMetadata; // @synthesize exportMetadata=_exportMetadata;
@property(retain, nonatomic) NSString *copyrightMetadata; // @synthesize copyrightMetadata=_copyrightMetadata;
@property(readonly, nonatomic) int videoMaxKeyframeInterval; // @synthesize videoMaxKeyframeInterval=_videoMaxKeyframeInterval;
@property(readonly, nonatomic) int audioAverageBitRate; // @synthesize audioAverageBitRate=_audioAverageBitRate;
@property(readonly, nonatomic) int videoBitsPerFrame; // @synthesize videoBitsPerFrame=_videoBitsPerFrame;
@property(readonly, nonatomic) unsigned long long audioCodecType; // @synthesize audioCodecType=_audioCodecType;
@property(readonly, nonatomic) unsigned long long videoCodecType; // @synthesize videoCodecType=_videoCodecType;
@property(readonly, nonatomic) unsigned long long videoDimensionLevel; // @synthesize videoDimensionLevel=_videoDimensionLevel;
@property(readonly, nonatomic) unsigned long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(readonly, nonatomic) unsigned long long mediaContainerType; // @synthesize mediaContainerType=_mediaContainerType;
- (id)description;
- (struct XMJMovieExportSettings)createBackingExportSettings;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 audioAverageBitRate:(int)arg7 videoMaxKeyframeInterval:(int)arg8 copyrightMetadata:(id)arg9 exportMetadata:(id)arg10 isUseExportMetadataTags:(_Bool)arg11 enableHDR:(_Bool)arg12;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 audioAverageBitRate:(int)arg7 videoMaxKeyframeInterval:(int)arg8 copyrightMetadata:(id)arg9 enableHDR:(_Bool)arg10;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 audioAverageBitRate:(int)arg7 videoMaxKeyframeInterval:(int)arg8 enableHDR:(_Bool)arg9;

@end

