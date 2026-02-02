//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayPluginTopMsgMgr
{
}

- (id)getTopMsgRecord:(id)arg1;
- (void)removeTopMsg:(id)arg1 msgSvrId:(long long)arg2;
- (void)addTopMsg:(id)arg1 msgItem:(id)arg2;
- (void)handleAddMsg:(id)arg1 msgWrap:(id)arg2;
- (id)getTopMsgMMKVKey:(id)arg1;
- (id)getTopMsgMMKVId;
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

