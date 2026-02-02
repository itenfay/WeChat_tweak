//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MicroMessengerAppStateMgr
{
    _Bool _bForegroundActive;
    long long _lastResignActiveTime;
}

@property(nonatomic) long long lastResignActiveTime; // @synthesize lastResignActiveTime=_lastResignActiveTime;
@property(nonatomic) _Bool bForegroundActive; // @synthesize bForegroundActive=_bForegroundActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive:(id)arg1;
- (void)onClickWindow;
- (_Bool)isForegroundActive;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

