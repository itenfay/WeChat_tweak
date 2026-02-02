//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, TRTCNetworkQosParam, TRTCVideoEncParam;

@interface TRTCVideoConfig : NSObject
{
    _Bool _isEnabled;
    _Bool _isMuted;
    _Bool _isFrontCamera;
    _Bool _isTorchOn;
    _Bool _isAutoFocusOn;
    _Bool _isRemoteMirrorEnabled;
    _Bool _isMixingInCloud;
    _Bool _isSmallVideoEnabled;
    _Bool _prefersLowQuality;
    _Bool _isGSensorEnabled;
    TRTCVideoEncParam *_videoEncConfig;
    TRTCVideoEncParam *_smallVideoEncConfig;
    TRTCNetworkQosParam *_qosConfig;
    unsigned long long _localMirrorType;
    long long _fillMode;
    AVAsset *_videoAsset;
    long long _fpsIndex;
    long long _scene;
}

+ (id)localMirrorTypeNames;
+ (id)fpsList;
+ (id)resolutionNames;
- (void).cxx_destruct;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) long long fpsIndex; // @synthesize fpsIndex=_fpsIndex;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(nonatomic) _Bool isGSensorEnabled; // @synthesize isGSensorEnabled=_isGSensorEnabled;
@property(nonatomic) _Bool prefersLowQuality; // @synthesize prefersLowQuality=_prefersLowQuality;
@property(nonatomic) _Bool isSmallVideoEnabled; // @synthesize isSmallVideoEnabled=_isSmallVideoEnabled;
@property(nonatomic) _Bool isMixingInCloud; // @synthesize isMixingInCloud=_isMixingInCloud;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) unsigned long long localMirrorType; // @synthesize localMirrorType=_localMirrorType;
@property(nonatomic) _Bool isRemoteMirrorEnabled; // @synthesize isRemoteMirrorEnabled=_isRemoteMirrorEnabled;
@property(nonatomic) _Bool isAutoFocusOn; // @synthesize isAutoFocusOn=_isAutoFocusOn;
@property(nonatomic) _Bool isTorchOn; // @synthesize isTorchOn=_isTorchOn;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(retain, nonatomic) TRTCNetworkQosParam *qosConfig; // @synthesize qosConfig=_qosConfig;
@property(retain, nonatomic) TRTCVideoEncParam *smallVideoEncConfig; // @synthesize smallVideoEncConfig=_smallVideoEncConfig;
@property(retain, nonatomic) TRTCVideoEncParam *videoEncConfig; // @synthesize videoEncConfig=_videoEncConfig;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) long long qosPreferenceIndex;
- (id)initWithScene:(long long)arg1;

@end

