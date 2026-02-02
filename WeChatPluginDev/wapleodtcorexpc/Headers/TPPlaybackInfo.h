//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPDynamicStatisticParams, TPGeneralPlayFlowParams;

@interface TPPlaybackInfo : NSObject
{
    NSString *_containerFormat;
    NSString *_videoMIMEType;
    long long _videoBitRate;
    long long _videoProfile;
    long long _videoLevel;
    long long _videoRotation;
    long long _videoFrameRate;
    long long _videoWidth;
    long long _videoHeight;
    long long _videoCodecId;
    NSString *_audioMIMEType;
    long long _audioBitRate;
    long long _audioProfile;
    long long _audioChannelLayout;
    NSString *_subtitleMIMEType;
    long long _currentPositionMs;
    long long _durationMs;
    long long _playableDurationMs;
    double _bufferPercent;
    long long _demuxerOffset;
    TPDynamicStatisticParams *_dynamicStatisticParams;
    TPGeneralPlayFlowParams *_generalPlayFlowParams;
    long long _videoColorSpace;
    long long _audioLevel;
}

+ (id)MIMETypeForCodecID:(int)arg1;
+ (id)buildFromVideoInfo:(id)arg1;
+ (id)buildFromString:(id)arg1;
+ (id)buildFromPlayerProperty:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long audioLevel; // @synthesize audioLevel=_audioLevel;
@property(nonatomic) long long videoColorSpace; // @synthesize videoColorSpace=_videoColorSpace;
@property(retain, nonatomic) TPGeneralPlayFlowParams *generalPlayFlowParams; // @synthesize generalPlayFlowParams=_generalPlayFlowParams;
@property(retain, nonatomic) TPDynamicStatisticParams *dynamicStatisticParams; // @synthesize dynamicStatisticParams=_dynamicStatisticParams;
@property(nonatomic) long long demuxerOffset; // @synthesize demuxerOffset=_demuxerOffset;
@property(nonatomic) double bufferPercent; // @synthesize bufferPercent=_bufferPercent;
@property(nonatomic) long long playableDurationMs; // @synthesize playableDurationMs=_playableDurationMs;
@property(nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
@property(nonatomic) long long currentPositionMs; // @synthesize currentPositionMs=_currentPositionMs;
@property(copy, nonatomic) NSString *subtitleMIMEType; // @synthesize subtitleMIMEType=_subtitleMIMEType;
@property(nonatomic) long long audioChannelLayout; // @synthesize audioChannelLayout=_audioChannelLayout;
@property(nonatomic) long long audioProfile; // @synthesize audioProfile=_audioProfile;
@property(nonatomic) long long audioBitRate; // @synthesize audioBitRate=_audioBitRate;
@property(copy, nonatomic) NSString *audioMIMEType; // @synthesize audioMIMEType=_audioMIMEType;
@property(nonatomic) long long videoCodecId; // @synthesize videoCodecId=_videoCodecId;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) long long videoRotation; // @synthesize videoRotation=_videoRotation;
@property(nonatomic) long long videoLevel; // @synthesize videoLevel=_videoLevel;
@property(nonatomic) long long videoProfile; // @synthesize videoProfile=_videoProfile;
@property(nonatomic) long long videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(copy, nonatomic) NSString *videoMIMEType; // @synthesize videoMIMEType=_videoMIMEType;
@property(copy, nonatomic) NSString *containerFormat; // @synthesize containerFormat=_containerFormat;
- (id)resolution;
- (void)updateVideoWidth:(long long)arg1 height:(long long)arg2;

@end

