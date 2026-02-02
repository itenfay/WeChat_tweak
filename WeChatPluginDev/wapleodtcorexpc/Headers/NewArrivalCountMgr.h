//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NewArrivalCountData;

@interface NewArrivalCountMgr
{
    NewArrivalCountData *m_data;
}

- (void).cxx_destruct;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)lastMessageChange:(id)arg1 MsgWrap:(id)arg2;
- (void)lastMessageChange:(id)arg1 msgid:(unsigned int)arg2 msg:(id)arg3;
- (_Bool)zeroSXNewArrivalCount;
- (unsigned int)getSXNewArrivalCount;
- (id)init;
- (void)zeroSXNewArrivalMsgItem;
- (void)callExt:(id)arg1;
- (void)callSXExt;
- (_Bool)loadData;
- (id)getPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

