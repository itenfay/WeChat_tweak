//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface MainFrameHideSessionReporter
{
    NSString *_enterChatName;
    long long _enterScene;
    unsigned long long _enterChatTime;
    long long _enterChatType;
    long long _exitHiddenStatus;
    NSMutableSet *_visibleSessionSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *visibleSessionSet; // @synthesize visibleSessionSet=_visibleSessionSet;
@property(nonatomic) long long exitHiddenStatus; // @synthesize exitHiddenStatus=_exitHiddenStatus;
@property(nonatomic) long long enterChatType; // @synthesize enterChatType=_enterChatType;
@property(nonatomic) unsigned long long enterChatTime; // @synthesize enterChatTime=_enterChatTime;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *enterChatName; // @synthesize enterChatName=_enterChatName;
- (long long)getReportSessionTypeFor:(id)arg1;
- (void)logSessionExpose:(long long)arg1 chatname:(id)arg2 sessionType:(long long)arg3;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onSessionShow:(id)arg1 showUpScene:(long long)arg2;
- (void)exitSession:(id)arg1;
- (void)enterSession:(id)arg1 scene:(long long)arg2;
- (void)enterChatName:(id)arg1 scene:(long long)arg2;
- (void)onBatchContactExpose:(id)arg1;
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

