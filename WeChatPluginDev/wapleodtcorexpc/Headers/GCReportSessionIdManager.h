//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface GCReportSessionIdManager
{
    NSString *_sessionId;
    double _sessionIdGenTime;
    double _sessionIdRefreshTime;
    NSMutableDictionary *_viewControllerDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *viewControllerDict; // @synthesize viewControllerDict=_viewControllerDict;
@property(nonatomic) double sessionIdRefreshTime; // @synthesize sessionIdRefreshTime=_sessionIdRefreshTime;
@property(nonatomic) double sessionIdGenTime; // @synthesize sessionIdGenTime=_sessionIdGenTime;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)refreshSessionIdTime:(id)arg1;
- (void)onViewControllerExit:(id)arg1;
- (void)onNativeVcPopedOrDismissed:(id)arg1;
- (void)onFullScreenWebVcPoped:(id)arg1;
- (void)checkGenSessionId:(id)arg1;
- (_Bool)checkGameVcExist;
- (void)onNativeVcInit:(id)arg1;
- (void)onFullScreenGameHostWebVcInit:(id)arg1;
- (void)onFindFriendEntryClick;
- (id)pageId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

