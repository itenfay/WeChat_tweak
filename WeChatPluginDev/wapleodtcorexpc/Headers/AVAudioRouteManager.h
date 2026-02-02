//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioSessionPortDescription, MMTimer, NSString;
@protocol AVAudioRouteManagerDelegate;

@interface AVAudioRouteManager : NSObject
{
    _Bool _hasExtenalOutput;
    NSString *_settingPortType;
    AVAudioSessionPortDescription *_curOutputPort;
    NSString *_curPortType;
    id <AVAudioRouteManagerDelegate> _delegate;
    MMTimer *_m_actingTimer;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMTimer *m_actingTimer; // @synthesize m_actingTimer=_m_actingTimer;
@property(nonatomic) __weak id <AVAudioRouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *curPortType; // @synthesize curPortType=_curPortType;
@property(retain, nonatomic) AVAudioSessionPortDescription *curOutputPort; // @synthesize curOutputPort=_curOutputPort;
@property(retain, nonatomic) NSString *settingPortType; // @synthesize settingPortType=_settingPortType;
@property(nonatomic) _Bool hasExtenalOutput; // @synthesize hasExtenalOutput=_hasExtenalOutput;
- (void)updatePortType:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)changeAudioToPort:(id)arg1 hasChanged:(_Bool)arg2;
- (void)clearAndStop;
- (void)clearActingTimer;
- (void)timerCheckAudioFunction;
- (_Bool)checkIfHasExternalOutput:(id)arg1;
- (void)initAudioRoute;
- (void)setAudioStatusOfSpeaker:(_Bool)arg1;
- (void)setAudioStatus:(_Bool)arg1 isCaller:(_Bool)arg2;
- (id)initWithScene:(unsigned long long)arg1;

@end

