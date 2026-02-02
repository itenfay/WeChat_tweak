//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCClearScheduleCgi, WCGetScheduleCgi, WCTDatabase, WCTTable;

@interface WCScheduleMgr
{
    _Bool _isXlabEnable;
    _Bool _canShowMainFrameEducation;
    WCTDatabase *_database;
    WCTTable *_scheduleTable;
    WCGetScheduleCgi *_scheduleGetCgi;
    WCClearScheduleCgi *_deleteAllCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canShowMainFrameEducation; // @synthesize canShowMainFrameEducation=_canShowMainFrameEducation;
@property(retain, nonatomic) WCClearScheduleCgi *deleteAllCgi; // @synthesize deleteAllCgi=_deleteAllCgi;
@property(retain, nonatomic) WCGetScheduleCgi *scheduleGetCgi; // @synthesize scheduleGetCgi=_scheduleGetCgi;
@property(retain, nonatomic) WCTTable *scheduleTable; // @synthesize scheduleTable=_scheduleTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
@property(nonatomic) _Bool isXlabEnable; // @synthesize isXlabEnable=_isXlabEnable;
- (void)doShowMiniTaskSwipeEducation;
- (_Bool)shouldShowMiniTaskSwipeEducation;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)onCgiClearAllSuccess:(_Bool)arg1 errTips:(id)arg2;
- (void)onGetScheduleCgiFail:(id)arg1 errMsg:(id)arg2;
- (void)onGetScheduleCgi:(id)arg1 updateAllItems:(id)arg2;
- (void)onGetScheduleCgi:(id)arg1 updateFirstPageItems:(id)arg2;
- (void)onCgiAddOnceRemind:(id)arg1 success:(_Bool)arg2 errTips:(id)arg3;
- (void)onCgiDeleteSchedule:(id)arg1 success:(_Bool)arg2 errTips:(id)arg3;
- (void)onCgiModSchedule:(id)arg1 success:(_Bool)arg2 errTips:(id)arg3;
- (void)onCgiAddSchedule:(id)arg1 success:(_Bool)arg2 errTips:(id)arg3;
- (void)initDB;
- (void)showScheduleSessionWithContact:(id)arg1 message:(id)arg2 from:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)showScheduleSessionWithContact:(id)arg1 message:(id)arg2 from:(id)arg3;
- (void)showScheduleSession:(id)arg1 from:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)updateAllSchedules;
- (void)addOnceRemindItem:(id)arg1 remindDate:(id)arg2;
- (void)removeRemindForItem:(id)arg1;
- (void)modifyItem:(id)arg1 remindDate:(id)arg2;
- (id)scheduleItemsWithLimit:(long long)arg1;
- (id)scheduleItems;
- (long long)scheduleItemCount;
- (id)getScheduleItemWithRemindId:(id)arg1;
- (id)getScheduleItemFrom:(id)arg1;
- (_Bool)hasSchedule:(id)arg1;
- (_Bool)removeAllSchedules;
- (_Bool)removeItem:(id)arg1;
- (_Bool)removeItemWithMessage:(id)arg1;
- (void)addScheduleItem:(id)arg1;
- (void)handleSyncAction:(long long)arg1 remindId:(id)arg2;
- (_Bool)isScheduleEnable;
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

