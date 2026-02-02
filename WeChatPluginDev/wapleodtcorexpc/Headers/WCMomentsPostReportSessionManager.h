//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCMomentsPostReportSession;

@interface WCMomentsPostReportSessionManager
{
    WCMomentsPostReportSession *_currentActiveSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsPostReportSession *currentActiveSession; // @synthesize currentActiveSession=_currentActiveSession;
- (void)deactivateSessionIfNeeded:(id)arg1;
- (id)deactivateCurrentSession;
- (id)recoverSessionForScene:(long long)arg1 fromEntrance:(long long)arg2 withPostCycleId:(id)arg3 andActive:(_Bool)arg4;
- (id)activateNewSessionIfNeededWithPostCycleId:(id)arg1;
- (id)activateNewSessionIfNeeded;
- (id)activateNewSession;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

