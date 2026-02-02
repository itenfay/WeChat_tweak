//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol ITingRouter;

@interface TingAppTaskManager : NSObject
{
    _Bool _hasPendingDisplayMode;
    id <ITingRouter> _router;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPendingDisplayMode; // @synthesize hasPendingDisplayMode=_hasPendingDisplayMode;
@property(retain, nonatomic) id <ITingRouter> router; // @synthesize router=_router;
- (void)onLimitedModeChanged;
- (void)onLanguageChange;
- (void)onFontSizeChange;
- (void)terminateAppImmediatlyWithForceDismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateAppImmediatly;
- (void)delayTerminateApp;
- (_Bool)checkNeedDelayTerminateApp;
- (void)cancelDelayTeminatieApp;
- (void)reloadRouter;
- (void)clearSession;
- (void)updateSessionWithEnterScene:(int)arg1;
@property(readonly, copy, nonatomic) NSString *sessionId;
@property(readonly, nonatomic) int enterScene;
@property(nonatomic) int appDisplayMode;
- (id)service;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

