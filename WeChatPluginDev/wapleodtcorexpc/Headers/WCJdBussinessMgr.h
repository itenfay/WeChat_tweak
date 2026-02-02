//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCJdRemindItem;

@interface WCJdBussinessMgr
{
    _Bool hadLoadEntranceItem;
    NSMutableArray *aryHadHandleRemindItemList;
    WCJdRemindItem *_currEntranceTipItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCJdRemindItem *currEntranceTipItem; // @synthesize currEntranceTipItem=_currEntranceTipItem;
@property(nonatomic) _Bool hadLoadEntranceItem; // @synthesize hadLoadEntranceItem;
@property(retain, nonatomic) NSMutableArray *aryHadHandleRemindItemList; // @synthesize aryHadHandleRemindItemList;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAlertViewConfirm;
- (void)handleRecvNewXmlNotication:(id)arg1;
- (void)handleRecvBewXmlJdEtranceTip:(id)arg1;
- (void)handleLocalPushWithUsrInfo:(id)arg1;
- (void)handleAPNSPushWithUsrInfo:(id)arg1;
- (void)handleInactiveAPNSPushWithUsrInfo:(id)arg1;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)arg1;
- (void)tryLoadEntranceTipItem;
- (void)saveEntranceTipItem;
- (id)getJDBussinessCachePath;
- (void)gotoWebViewController:(id)arg1 scene:(long long)arg2 needPresent:(_Bool)arg3;
- (_Bool)needShowDutyFreeTip;
- (void)setHadEnterJDCell;
- (id)getJDCellTipItem;
- (_Bool)needShowTipInJDCell;
- (_Bool)needShowRedDotInFindTab;
- (_Bool)shouldUseEntranceTipItem;
- (long long)getJDCellJumpWeappVersion;
- (id)getJDCellJumpWeappPath;
- (long long)getJDCellJumpType;
- (id)getJDCellJumpTarget;
- (id)getJDCellJumpURL;
- (long long)getCurrentScene;
- (_Bool)hasJDStoreCell;
- (id)GetJDStoreCellItem;
- (id)getAddSceneUrl:(id)arg1 scene:(long long)arg2;
- (void)checkFindEntry;
- (void)reloadfindEntry;
- (_Bool)isNotTimeWithStart:(unsigned int)arg1 Expire:(unsigned int)arg2;
- (_Bool)hadInHandleList:(id)arg1;
- (void)addActivityIdInHandleList:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

