//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSMutableArray, NSObject, NSString, WCNewClickStatItem, WCNewClickStatRecordPageItem, WCNewClickStatReportConfig;
@protocol OS_dispatch_queue;

@interface WCNewClickStatMgr
{
    WCNewClickStatItem *_reportItem;
    WCNewClickStatRecordPageItem *curPage;
    NSObject<OS_dispatch_queue> *queue;
    WCNewClickStatReportConfig *_reportConfig;
    unsigned int _eventID;
    unsigned int applicaitonSwitchSeq;
    unsigned int pid;
    unsigned int reportSeq;
    MemoryMappedKV *mapKv;
    NSMutableArray *appSwitchMergeRecords;
    unsigned int appSwitchMergeSeq;
    NSMutableArray *appStatMergeRecords;
    unsigned long long lastEnterForegroundTime;
    unsigned long long lastEnterBackgroundTime;
    NSString *enterForegroundUnreadMsg;
    NSMutableArray *unreadMergeRecords;
}

- (void).cxx_destruct;
- (void)calcSessionUnread:(id)arg1;
- (id)createRptByJsonArray:(id)arg1;
- (void)reportWeixinTime;
- (void)onRealTimeKVReportFailedWithWrap:(id)arg1;
- (void)onRealTimeKVReportSucceedWithWrap:(id)arg1;
- (void)loadAppStatData;
- (void)saveAppStatTime;
- (id)loadAppSwitchRptRecords:(id)arg1;
- (void)saveAppSwitchMergeRecords:(id)arg1 andkey:(id)arg2;
- (void)handleWeixinStatus:(_Bool)arg1;
- (void)recordOrReportAppSwitch:(id)arg1 Type:(_Bool)arg2;
- (void)saveSnapshot:(id)arg1;
- (void)notifyPageAppear:(id)arg1;
- (void)removeWidgetRecordByPageList:(id)arg1;
- (_Bool)isNeedCalWidgetStatData:(id)arg1;
- (_Bool)isNeedPageAction:(id)arg1 pageActionConfig:(id)arg2;
- (_Bool)isNeedFilter:(id)arg1;
- (void)saveRealLastSwitchBackTime;
- (void)saveCurrentReportData:(id)arg1;
- (void)loadReportConfig;
- (_Bool)isNeedToReport:(id)arg1;
- (void)checkSeq:(id)arg1;
- (void)reportAndSaveData;
- (void)reconstructOneReportItem:(unsigned int)arg1;
- (id)getWidgetNormalAttrOnPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (id)getPageNormalAttr:(id)arg1 withEventConfig:(id)arg2;
- (id)getAppNormalAttr:(id)arg1;
- (void)saveWidgetRecordForRecordPage:(id)arg1;
- (void)pageDisappear:(id)arg1;
- (void)pageAppear:(id)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)dealloc;
- (void)onWillSuspend;
- (void)onServiceTerminate;
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

