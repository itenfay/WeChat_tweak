//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AdPushMsgDBMgr, NSString;

@interface MagicAdPushMgrService
{
    AdPushMsgDBMgr *_dbMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AdPushMsgDBMgr *dbMgr; // @synthesize dbMgr=_dbMgr;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)handleAdMsg:(id)arg1;
- (_Bool)clearSpecificSlotMsg:(id)arg1 withBizName:(id)arg2;
- (id)getSpecificSlotMsg:(id)arg1 withBizName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

