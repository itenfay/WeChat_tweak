//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MainSessionMgr
{
    long long _minTopCountToFold;
    NSMutableArray *_topSessions;
    NSMutableArray *_normalSessions;
    NSMutableArray *_allTopSessions;
    long long _totalTopSessionCount;
    long long _chatBoxMinIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long chatBoxMinIndex; // @synthesize chatBoxMinIndex=_chatBoxMinIndex;
@property(nonatomic) long long totalTopSessionCount; // @synthesize totalTopSessionCount=_totalTopSessionCount;
@property(retain, nonatomic) NSMutableArray *allTopSessions; // @synthesize allTopSessions=_allTopSessions;
@property(retain, nonatomic) NSMutableArray *normalSessions; // @synthesize normalSessions=_normalSessions;
@property(retain, nonatomic) NSMutableArray *topSessions; // @synthesize topSessions=_topSessions;
@property(nonatomic) long long minTopCountToFold; // @synthesize minTopCountToFold=_minTopCountToFold;
- (void)rebuildMainSessions;
- (void)onNeedReload;
- (_Bool)isFoldTopSession;
- (_Bool)canFoldTopSession;
- (_Bool)hasUnreadVisibleSingleChatSession;
- (_Bool)removeSessionWithUserName:(id)arg1;
- (void)updateMainSessionListNotify:(_Bool)arg1;
- (void)updateMainSessionList;
- (id)getNormalSessionAtIndex:(long long)arg1 fulFilled:(_Bool)arg2;
- (id)getNormalBaseSessionAtIndex:(long long)arg1;
- (id)getNormalSessionAtIndex:(long long)arg1;
- (id)getTopSessionAtIndex:(long long)arg1 fulFilled:(_Bool)arg2;
- (id)getTopBaseSessionAtIndex:(long long)arg1;
- (id)getTopSessionAtIndex:(long long)arg1;
- (long long)indexOfNormalSession:(id)arg1;
- (long long)indexOfTopSession:(id)arg1;
- (id)topSessionEnumerator;
- (long long)unreadTopSessionCount;
- (long long)visibleSessionCount;
- (long long)visibleNormalSessionCount;
- (long long)visibleTopSessionCount;
- (id)forwardableSessionEnumerator;
- (id)visibleSessionEnumerator;
- (void)updateChatBoxEntryMinIndex:(long long)arg1;
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

