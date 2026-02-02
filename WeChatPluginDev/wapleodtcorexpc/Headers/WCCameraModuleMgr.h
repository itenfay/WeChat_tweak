//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCameraModule;

@interface WCCameraModuleMgr
{
    WCCameraModule *_activeModule;
    WCCameraModule *_interruptionModule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCameraModule *interruptionModule; // @synthesize interruptionModule=_interruptionModule;
@property(retain, nonatomic) WCCameraModule *activeModule; // @synthesize activeModule=_activeModule;
- (id)currentActiveModule;
- (void)reportInterruptionEvent:(id)arg1 oldModule:(id)arg2;
- (void)deactiveModule:(id)arg1;
- (void)pushInterruptionModule:(id)arg1;
- (void)changeActiveModule:(id)arg1;
- (void)setActive:(_Bool)arg1 scene:(long long)arg2 listener:(id)arg3 userData:(id)arg4;
- (void)setActive:(_Bool)arg1 scene:(long long)arg2 listener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

