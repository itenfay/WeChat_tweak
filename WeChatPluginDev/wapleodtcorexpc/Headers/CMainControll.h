//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMDB, MMTimer, NSDate, NSMutableArray, NSRecursiveLock, NSString;
@protocol NotifyFromMainCtrlDelegate;

@interface CMainControll : NSObject
{
    CMMDB *m_oMMDB;
    NSString *m_nsDocPath;
    MMTimer *m_oTimerCheckEvent;
    id <NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl;
    NSRecursiveLock *m_oMsgQueLock;
    NSMutableArray *m_arrMessageList;
    NSString *m_nsLastToken;
    unsigned int m_uiLastNetworkStatus;
    NSDate *m_dtLastSyncForAuth;
    NSDate *m_dtLastGetUpdateInfo;
    _Bool m_bStop;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
- (void)TimerSync;
- (void)onLoginOK;
- (void)onAuthOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleRespForGetUpdateInfo:(id)arg1;
- (void)CheckUpdate:(id)arg1;
- (void)onKickQuit;
- (void)HandleNewSyncPush:(id)arg1;
- (void)speedyDispacthMessage:(id)arg1;
- (void)SpeedyNotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)handleIPXXMessage:(id)arg1;
- (void)onNewSyncIPXX:(id)arg1;
- (void)RaiseEvent:(unsigned int)arg1 MessageID:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)SetVersionInited;
- (unsigned int)CheckVersion;
- (_Bool)IsNewUser;
- (void)CreateSyncTimer;
- (void)TimerCheckEvent;
- (void)StopAllEvent;
- (void)Stop;
- (void)Start:(id)arg1;
- (void)LoadLastSvrID;
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

