//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface V2TXLivePlayerJSConfig : NSObject
{
    _Bool _isDebug;
    _Bool _autoPlay;
    _Bool _muteAudio;
    _Bool _muteVideo;
    _Bool _enableMessage;
    _Bool _needVolumeNotify;
    float _minCache;
    float _maxCache;
    NSString *_playUrl;
    long long _playType;
    long long _playMode;
    long long _renderRotation;
    long long _renderMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needVolumeNotify; // @synthesize needVolumeNotify=_needVolumeNotify;
@property(nonatomic) _Bool enableMessage; // @synthesize enableMessage=_enableMessage;
@property(nonatomic) float maxCache; // @synthesize maxCache=_maxCache;
@property(nonatomic) float minCache; // @synthesize minCache=_minCache;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) long long renderRotation; // @synthesize renderRotation=_renderRotation;
@property(nonatomic) _Bool muteVideo; // @synthesize muteVideo=_muteVideo;
@property(nonatomic) _Bool muteAudio; // @synthesize muteAudio=_muteAudio;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(copy, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
- (id)getDiffLog:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isRTC;
- (id)init;

@end

