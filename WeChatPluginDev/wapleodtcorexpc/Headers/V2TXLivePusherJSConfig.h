//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface V2TXLivePusherJSConfig : NSObject
{
    _Bool _isDebug;
    _Bool _autoPush;
    _Bool _touchFocus;
    _Bool _enableZoom;
    _Bool _frontCamera;
    _Bool _enableAGC;
    _Bool _enableNAS;
    _Bool _enableAudioPreview;
    _Bool _enableMirror;
    _Bool _enableCamera;
    _Bool _enableCustomEffect;
    _Bool _enableMic;
    _Bool _muteAudio;
    _Bool _needVolumeNotify;
    _Bool _enableVideoCustomRender;
    float _beautyFilterDepth;
    float _whiteningFilterDepth;
    NSString *_pushUrl;
    long long _pushMode;
    long long _minVideoBitrate;
    long long _maxVideoBitrate;
    long long _beautyStyle;
    long long _homeOrientation;
    long long _videoAspect;
    long long _videoWidth;
    long long _videoHeight;
    long long _audioSamplerate;
    long long _audioChannels;
    long long _volumeType;
    long long _audioReverbType;
    long long _voiceChangerType;
    long long _localVideoMirrorType;
    unsigned long long _liveMode;
    UIImage *_backgroundImage;
    long long _fps;
}

- (void).cxx_destruct;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) _Bool enableVideoCustomRender; // @synthesize enableVideoCustomRender=_enableVideoCustomRender;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) unsigned long long liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) _Bool needVolumeNotify; // @synthesize needVolumeNotify=_needVolumeNotify;
@property(nonatomic) _Bool muteAudio; // @synthesize muteAudio=_muteAudio;
@property(nonatomic) _Bool enableMic; // @synthesize enableMic=_enableMic;
@property(nonatomic) _Bool enableCustomEffect; // @synthesize enableCustomEffect=_enableCustomEffect;
@property(nonatomic) _Bool enableCamera; // @synthesize enableCamera=_enableCamera;
@property(nonatomic) long long localVideoMirrorType; // @synthesize localVideoMirrorType=_localVideoMirrorType;
@property(nonatomic) _Bool enableMirror; // @synthesize enableMirror=_enableMirror;
@property(nonatomic) long long voiceChangerType; // @synthesize voiceChangerType=_voiceChangerType;
@property(nonatomic) long long audioReverbType; // @synthesize audioReverbType=_audioReverbType;
@property(nonatomic) long long volumeType; // @synthesize volumeType=_volumeType;
@property(nonatomic) _Bool enableAudioPreview; // @synthesize enableAudioPreview=_enableAudioPreview;
@property(nonatomic) _Bool enableNAS; // @synthesize enableNAS=_enableNAS;
@property(nonatomic) _Bool enableAGC; // @synthesize enableAGC=_enableAGC;
@property(nonatomic) long long audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) long long audioSamplerate; // @synthesize audioSamplerate=_audioSamplerate;
@property(nonatomic) _Bool frontCamera; // @synthesize frontCamera=_frontCamera;
@property(nonatomic) _Bool enableZoom; // @synthesize enableZoom=_enableZoom;
@property(nonatomic) _Bool touchFocus; // @synthesize touchFocus=_touchFocus;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) long long videoAspect; // @synthesize videoAspect=_videoAspect;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
@property(nonatomic) float whiteningFilterDepth; // @synthesize whiteningFilterDepth=_whiteningFilterDepth;
@property(nonatomic) float beautyFilterDepth; // @synthesize beautyFilterDepth=_beautyFilterDepth;
@property(nonatomic) long long beautyStyle; // @synthesize beautyStyle=_beautyStyle;
@property(nonatomic) long long maxVideoBitrate; // @synthesize maxVideoBitrate=_maxVideoBitrate;
@property(nonatomic) long long minVideoBitrate; // @synthesize minVideoBitrate=_minVideoBitrate;
@property(nonatomic) long long pushMode; // @synthesize pushMode=_pushMode;
@property(nonatomic) _Bool autoPush; // @synthesize autoPush=_autoPush;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(copy, nonatomic) NSString *pushUrl; // @synthesize pushUrl=_pushUrl;
- (id)getDiffLog:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isRTC;
- (id)init;

@end

