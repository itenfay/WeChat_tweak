//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveKTVAudioEffectProcessInitParam, NSRecursiveLock, NSSet;
@protocol MMFinderLiveKTVProcesserDelegate;

@interface MMFinderLiveKTVAudioEffectBaseProcesser : NSObject
{
    _Bool _initSucc;
    _Bool _isStart;
    id <MMFinderLiveKTVProcesserDelegate> _processerDelegate;
    LiveKTVAudioEffectProcessInitParam *_settingParam;
    unsigned long long _settingReverbType;
    NSRecursiveLock *_audioProcesserLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *audioProcesserLock; // @synthesize audioProcesserLock=_audioProcesserLock;
@property(nonatomic) unsigned long long settingReverbType; // @synthesize settingReverbType=_settingReverbType;
@property(retain, nonatomic) LiveKTVAudioEffectProcessInitParam *settingParam; // @synthesize settingParam=_settingParam;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(nonatomic) _Bool initSucc; // @synthesize initSucc=_initSucc;
@property(nonatomic) __weak id <MMFinderLiveKTVProcesserDelegate> processerDelegate; // @synthesize processerDelegate=_processerDelegate;
@property(readonly, nonatomic) NSSet *supportedReverbTypes;
- (_Bool)updateSettingParam:(id)arg1;
- (unsigned long long)optimizeReverbType;
- (void)setOptimizeReverbType:(unsigned long long)arg1;
- (_Bool)process:(id)arg1;
- (_Bool)stopAudioProcesser;
- (_Bool)startAudioProcesser;
- (_Bool)checkNeedIgnoreFrameProcess:(id)arg1;
- (id)audioSettingCache;
- (void)updateOptimizeReverbSetting;
- (int)getSampleSize:(int)arg1 sampleRate:(int)arg2 format:(unsigned long long)arg3 frameDuration:(int)arg4;
- (_Bool)isFrameUnitParamLegal:(id)arg1;
- (void)configAudioEffectCacheSettings;
- (void)initDefaultDatas;
- (void)dealloc;
- (id)initWithParam:(id)arg1;

@end

