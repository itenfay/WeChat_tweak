//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCCdnPlayerConfig : NSObject
{
    _Bool _isDebugOn;
    float _minCache;
    float _maxCache;
    float _minCacheLeb;
    float _maxCacheLeb;
    int _wavejbmFlag;
    int _wavejbmMode;
    float _wavejbmMinSpeedRate;
    float _wavejbmMaxSpeedRate;
    int _lowDelayMode;
    int _initialDelay;
    float _mMaxHalfFOVHor;
    float _mMinHalfFOVHor;
    float _mMaxHalfFOVVer;
    float _mMinHalfFOVVer;
    long long _orientation;
    long long _renderMode;
    unsigned long long _cacheType;
    NSString *_gameAppId;
}

- (void).cxx_destruct;
@property(nonatomic) float mMinHalfFOVVer; // @synthesize mMinHalfFOVVer=_mMinHalfFOVVer;
@property(nonatomic) float mMaxHalfFOVVer; // @synthesize mMaxHalfFOVVer=_mMaxHalfFOVVer;
@property(nonatomic) float mMinHalfFOVHor; // @synthesize mMinHalfFOVHor=_mMinHalfFOVHor;
@property(nonatomic) float mMaxHalfFOVHor; // @synthesize mMaxHalfFOVHor=_mMaxHalfFOVHor;
@property(copy, nonatomic) NSString *gameAppId; // @synthesize gameAppId=_gameAppId;
@property(nonatomic) int initialDelay; // @synthesize initialDelay=_initialDelay;
@property(nonatomic) int lowDelayMode; // @synthesize lowDelayMode=_lowDelayMode;
@property(nonatomic) float wavejbmMaxSpeedRate; // @synthesize wavejbmMaxSpeedRate=_wavejbmMaxSpeedRate;
@property(nonatomic) float wavejbmMinSpeedRate; // @synthesize wavejbmMinSpeedRate=_wavejbmMinSpeedRate;
@property(nonatomic) int wavejbmMode; // @synthesize wavejbmMode=_wavejbmMode;
@property(nonatomic) int wavejbmFlag; // @synthesize wavejbmFlag=_wavejbmFlag;
@property(nonatomic) float maxCacheLeb; // @synthesize maxCacheLeb=_maxCacheLeb;
@property(nonatomic) float minCacheLeb; // @synthesize minCacheLeb=_minCacheLeb;
@property(nonatomic) float maxCache; // @synthesize maxCache=_maxCache;
@property(nonatomic) float minCache; // @synthesize minCache=_minCache;
@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool isDebugOn; // @synthesize isDebugOn=_isDebugOn;
- (id)init;

@end

