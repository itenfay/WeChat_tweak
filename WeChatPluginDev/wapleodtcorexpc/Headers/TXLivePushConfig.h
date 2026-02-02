//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, UIImage;

@interface TXLivePushConfig : NSObject
{
    _Bool _touchFocus;
    _Bool _enableZoom;
    _Bool _enableAutoBitrate;
    _Bool _enableAudioPreview;
    _Bool _enablePureAudioPush;
    _Bool _autoSampleBufferSize;
    _Bool _enableNAS;
    _Bool _enableAEC;
    _Bool _enableHWAcceleration;
    _Bool _enableAudioAcceleration;
    _Bool _enableAGC;
    _Bool _enableMute;
    _Bool _frontCamera;
    _Bool _enableNearestIP;
    int _homeOrientation;
    int _localVideoMirrorType;
    int _pauseTime;
    int _pauseFps;
    int _videoResolution;
    int _videoFPS;
    int _videoEncodeGop;
    int _videoBitratePIN;
    int _autoAdjustStrategy;
    int _videoBitrateMax;
    int _videoBitrateMin;
    int _audioSampleRate;
    int _audioChannels;
    int _connectRetryCount;
    int _connectRetryInterval;
    int _customModeType;
    float _beautyFilterDepth;
    float _whiteningFilterDepth;
    int _rtmpChannelType;
    UIImage *_watermark;
    UIImage *_pauseImg;
    long long _volumeType;
    NSDictionary *_metaData;
    struct CGPoint _watermarkPos;
    struct CGSize _sampleBufferSize;
    struct CGRect _watermarkNormalization;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(nonatomic) int rtmpChannelType; // @synthesize rtmpChannelType=_rtmpChannelType;
@property(nonatomic) _Bool enableNearestIP; // @synthesize enableNearestIP=_enableNearestIP;
@property(nonatomic) float whiteningFilterDepth; // @synthesize whiteningFilterDepth=_whiteningFilterDepth;
@property(nonatomic) float beautyFilterDepth; // @synthesize beautyFilterDepth=_beautyFilterDepth;
@property(nonatomic) _Bool frontCamera; // @synthesize frontCamera=_frontCamera;
@property(nonatomic) _Bool enableMute; // @synthesize enableMute=_enableMute;
@property(nonatomic) long long volumeType; // @synthesize volumeType=_volumeType;
@property(nonatomic) _Bool enableAGC; // @synthesize enableAGC=_enableAGC;
@property(nonatomic) _Bool enableAudioAcceleration; // @synthesize enableAudioAcceleration=_enableAudioAcceleration;
@property(nonatomic) _Bool enableHWAcceleration; // @synthesize enableHWAcceleration=_enableHWAcceleration;
@property(nonatomic) _Bool enableAEC; // @synthesize enableAEC=_enableAEC;
@property(nonatomic) _Bool enableNAS; // @synthesize enableNAS=_enableNAS;
@property _Bool autoSampleBufferSize; // @synthesize autoSampleBufferSize=_autoSampleBufferSize;
@property struct CGSize sampleBufferSize; // @synthesize sampleBufferSize=_sampleBufferSize;
@property(nonatomic) int customModeType; // @synthesize customModeType=_customModeType;
@property(nonatomic) int connectRetryInterval; // @synthesize connectRetryInterval=_connectRetryInterval;
@property(nonatomic) int connectRetryCount; // @synthesize connectRetryCount=_connectRetryCount;
@property(nonatomic) _Bool enablePureAudioPush; // @synthesize enablePureAudioPush=_enablePureAudioPush;
@property(nonatomic) _Bool enableAudioPreview; // @synthesize enableAudioPreview=_enableAudioPreview;
@property(nonatomic) int audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) int audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) int videoBitrateMin; // @synthesize videoBitrateMin=_videoBitrateMin;
@property(nonatomic) int videoBitrateMax; // @synthesize videoBitrateMax=_videoBitrateMax;
@property(nonatomic) int autoAdjustStrategy; // @synthesize autoAdjustStrategy=_autoAdjustStrategy;
@property(nonatomic) _Bool enableAutoBitrate; // @synthesize enableAutoBitrate=_enableAutoBitrate;
@property(nonatomic) int videoBitratePIN; // @synthesize videoBitratePIN=_videoBitratePIN;
@property(nonatomic) int videoEncodeGop; // @synthesize videoEncodeGop=_videoEncodeGop;
@property(nonatomic) int videoFPS; // @synthesize videoFPS=_videoFPS;
@property(nonatomic) int videoResolution; // @synthesize videoResolution=_videoResolution;
@property(retain, nonatomic) UIImage *pauseImg; // @synthesize pauseImg=_pauseImg;
@property(nonatomic) int pauseFps; // @synthesize pauseFps=_pauseFps;
@property(nonatomic) int pauseTime; // @synthesize pauseTime=_pauseTime;
@property(nonatomic) int localVideoMirrorType; // @synthesize localVideoMirrorType=_localVideoMirrorType;
@property(nonatomic) struct CGRect watermarkNormalization; // @synthesize watermarkNormalization=_watermarkNormalization;
@property(nonatomic) struct CGPoint watermarkPos; // @synthesize watermarkPos=_watermarkPos;
@property(retain, nonatomic) UIImage *watermark; // @synthesize watermark=_watermark;
@property(nonatomic) _Bool enableZoom; // @synthesize enableZoom=_enableZoom;
@property(nonatomic) _Bool touchFocus; // @synthesize touchFocus=_touchFocus;
@property(nonatomic) int homeOrientation; // @synthesize homeOrientation=_homeOrientation;
- (id)description;
- (id)init;

@end

