//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface TemplateMsgRecvMgr
{
    NSMutableDictionary *_dictTemplateMsgRecvState;
    NSMutableDictionary *_dictIdListOfUser;
}

- (void).cxx_destruct;
- (id)getRecvStateArrayByUsername:(id)arg1;
- (void)onSetRecvState:(id)arg1;
- (void)onGetRecvState:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getRecvState:(id)arg1;
- (_Bool)shouldShowEntryForUser:(id)arg1;
- (_Bool)shouldShowBlockButtonForMsg:(id)arg1;
- (void)setRecvState:(unsigned int)arg1 toUser:(id)arg2 withTemplateId:(id)arg3;
- (void)setRecvState:(id)arg1 toUser:(id)arg2;
- (void)getRecvStateByUsername:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

