//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface TemplateMsgService
{
    MemoryMappedKV *_mmkv;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
- (void)report11608:(id)arg1 userName:(id)arg2 actionType:(unsigned long long)arg3 containerType:(unsigned int)arg4 sessionId:(unsigned int)arg5;
- (_Bool)wasReaderFooterClicked:(id)arg1 localId:(unsigned int)arg2;
- (void)updateReaderFooterClick:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)wasMsgExpanded:(id)arg1 localId:(unsigned int)arg2;
- (void)updateMsgExpand:(id)arg1 localId:(unsigned int)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

