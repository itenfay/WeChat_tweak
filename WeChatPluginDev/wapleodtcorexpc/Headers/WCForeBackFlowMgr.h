//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCForeBackFlowMgr
{
    NSObject<OS_dispatch_queue> *queue;
    unsigned int pid;
    NSString *curPage;
    unsigned long long curPageHash;
    MemoryMappedKV *mapKv;
    unsigned long long lastEnterForegroundTime;
    unsigned long long lastEnterBackgroundTime;
    unsigned int applicaitonSwitchSeq;
    unsigned int appSwitchMergeSeq;
    unsigned int reportSeq;
    NSMutableArray *appSwitchMergeRecords;
    NSMutableArray *appStatMergeRecords;
    NSString *enterForegroundUnreadMsg;
    NSMutableArray *unreadMergeRecords;
}

- (void).cxx_destruct;
- (id)getCalcSessionType:(id)arg1;
- (void)calcSessionUnread:(id)arg1;
- (void)saveAppSwitchMergeRecords:(id)arg1 withKey:(id)arg2;
- (id)createRptByJsonArray:(id)arg1;
- (void)reportWeixinTime;
- (void)handleWeixinStatus:(_Bool)arg1 withReport:(_Bool)arg2;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (id)loadAppSwitchRptRecords:(id)arg1;
- (void)loadAppStatData;
- (void)onClearData;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

