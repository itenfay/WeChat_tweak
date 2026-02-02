//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TingFlowPlayerProtocol, TingPlayerMinimizeHelperDelegate;

@interface TingPlayerAudioModuleHelper : NSObject
{
    _Bool _isIsolateModule;
    _Bool _isDissociativeModule;
    _Bool _bWaitRecoverNotify;
    _Bool _bIntterutedBy3rdApp;
    int _moduleScene;
    id <TingPlayerMinimizeHelperDelegate> _minimizeHelper;
    id <TingFlowPlayerProtocol> _player;
}

+ (id)dissociativeModuleKey;
+ (_Bool)isTingAuidioModuleActive;
- (void).cxx_destruct;
@property(nonatomic) _Bool bIntterutedBy3rdApp; // @synthesize bIntterutedBy3rdApp=_bIntterutedBy3rdApp;
@property(nonatomic) _Bool bWaitRecoverNotify; // @synthesize bWaitRecoverNotify=_bWaitRecoverNotify;
@property(nonatomic) __weak id <TingFlowPlayerProtocol> player; // @synthesize player=_player;
@property(nonatomic) __weak id <TingPlayerMinimizeHelperDelegate> minimizeHelper; // @synthesize minimizeHelper=_minimizeHelper;
@property(nonatomic) int moduleScene; // @synthesize moduleScene=_moduleScene;
@property(nonatomic) _Bool isDissociativeModule; // @synthesize isDissociativeModule=_isDissociativeModule;
@property(nonatomic) _Bool isIsolateModule; // @synthesize isIsolateModule=_isIsolateModule;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(_Bool)arg2;
- (void)applicationEnterForeground;
- (void)audioModuleDidRemoveFromInterruptList:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)pushRestorePlayer;
- (void)cancelInterruptionNotify;
- (void)deactiveAudioModule;
- (_Bool)activeAudioModule;
- (_Bool)isAuidioModuleActive;
- (_Bool)canPlayAndAlterConflict:(_Bool)arg1;
- (_Bool)canPlay;
- (_Bool)isPlaying;
- (id)curMinimizeHelper;
- (unsigned int)playerModuleId;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

