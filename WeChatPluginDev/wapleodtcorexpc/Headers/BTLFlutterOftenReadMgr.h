//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface BTLFlutterOftenReadMgr
{
    MemoryMappedKV *_autoExpiredKV;
}

+ (_Bool)isContactHasMsgInTime:(unsigned int)arg1 username:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *autoExpiredKV; // @synthesize autoExpiredKV=_autoExpiredKV;
- (void)onDeleteContact:(id)arg1;
- (void)onAddBrandTimelineMsg:(id)arg1;
- (void)resetNewMsgStatusIfNeedWhenOpenUrl:(id)arg1 msgSvrId:(unsigned long long)arg2;
- (void)resetNewMsgStatusIfNeed:(id)arg1;
- (id)getContactData:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

