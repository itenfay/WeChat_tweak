//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVVideoCompositionCoreAnimationTool, MAVExportOptionalParam, NSArray, NSDictionary, TAVSoftEncodingColorProperties, TAVSourceExportColorProperties;

@interface VideoCompositionOutputConfig : NSObject
{
    long long _videoBitrate;
    double _fps;
    double _iFrameInterval;
    long long _audioBitrate;
    long long _audioSampleRate;
    long long _audioChannelCount;
    TAVSourceExportColorProperties *_colorProperties;
    TAVSoftEncodingColorProperties *_softEncColorProperties;
    AVVideoCompositionCoreAnimationTool *_animationTools;
    NSArray *_metadata;
    NSDictionary *_colorRange;
    MAVExportOptionalParam *_optionalParams;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVExportOptionalParam *optionalParams; // @synthesize optionalParams=_optionalParams;
@property(retain, nonatomic) NSDictionary *colorRange; // @synthesize colorRange=_colorRange;
@property(copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTools; // @synthesize animationTools=_animationTools;
@property(retain, nonatomic) TAVSoftEncodingColorProperties *softEncColorProperties; // @synthesize softEncColorProperties=_softEncColorProperties;
@property(retain, nonatomic) TAVSourceExportColorProperties *colorProperties; // @synthesize colorProperties=_colorProperties;
@property(nonatomic) long long audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property(nonatomic) long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) long long audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) double iFrameInterval; // @synthesize iFrameInterval=_iFrameInterval;
@property(nonatomic) double fps; // @synthesize fps=_fps;
@property(nonatomic) long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (id)description;
- (id)init;

@end

