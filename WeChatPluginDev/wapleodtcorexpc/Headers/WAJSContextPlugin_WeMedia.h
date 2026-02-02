//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WeMediaApi;

@interface WAJSContextPlugin_WeMedia
{
    _Bool _isAudioInterrupt;
    WeMediaApi *_wemedia_api;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAudioInterrupt; // @synthesize isAudioInterrupt=_isAudioInterrupt;
@property(nonatomic) __weak WeMediaApi *wemedia_api; // @synthesize wemedia_api=_wemedia_api;
- (void)activeAudioSession;
- (id)getIdentifier;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)onAudioEnterForeround;
- (void)onAudioEnterBackground;
- (void)TryStopAudioDevice:(unsigned long long)arg1;
- (_Bool)TryStartAudioDevice:(unsigned long long)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)removeObserver;
- (void)addObserver;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

