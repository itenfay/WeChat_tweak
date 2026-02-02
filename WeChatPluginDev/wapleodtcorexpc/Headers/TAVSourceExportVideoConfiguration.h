//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TAVSoftEncodingColorProperties, TAVSourceExportColorProperties;

@interface TAVSourceExportVideoConfiguration : NSObject
{
    _Bool _useHDRToSDR;
    _Bool _useSoftEncNewThreadsControl;
    int _bitrateUp;
    int _bitrateDown;
    int _vcodec2Preset;
    float _crf;
    int _vbvBufferSize;
    NSDictionary *_inputSettings;
    unsigned long long _averageBitRate;
    double _frameRate;
    NSString *_videoProfileLevel;
    TAVSourceExportColorProperties *_colorProperties;
    TAVSoftEncodingColorProperties *_softEncColorProperties;
    NSDictionary *_videoOutputSetting;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *videoOutputSetting; // @synthesize videoOutputSetting=_videoOutputSetting;
@property(nonatomic) int vbvBufferSize; // @synthesize vbvBufferSize=_vbvBufferSize;
@property(nonatomic) float crf; // @synthesize crf=_crf;
@property(nonatomic) int vcodec2Preset; // @synthesize vcodec2Preset=_vcodec2Preset;
@property(nonatomic) _Bool useSoftEncNewThreadsControl; // @synthesize useSoftEncNewThreadsControl=_useSoftEncNewThreadsControl;
@property(nonatomic) _Bool useHDRToSDR; // @synthesize useHDRToSDR=_useHDRToSDR;
@property(nonatomic) int bitrateDown; // @synthesize bitrateDown=_bitrateDown;
@property(nonatomic) int bitrateUp; // @synthesize bitrateUp=_bitrateUp;
@property(retain, nonatomic) TAVSoftEncodingColorProperties *softEncColorProperties; // @synthesize softEncColorProperties=_softEncColorProperties;
@property(retain, nonatomic) TAVSourceExportColorProperties *colorProperties; // @synthesize colorProperties=_colorProperties;
@property(retain, nonatomic) NSString *videoProfileLevel; // @synthesize videoProfileLevel=_videoProfileLevel;
@property(nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) unsigned long long averageBitRate; // @synthesize averageBitRate=_averageBitRate;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSDictionary *inputSettings; // @synthesize inputSettings=_inputSettings;
- (id)makeOutputSetting;
- (id)init;

@end

