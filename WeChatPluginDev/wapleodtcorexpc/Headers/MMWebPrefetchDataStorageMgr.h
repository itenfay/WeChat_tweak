//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCEliminatedSlotMMKV;

@interface MMWebPrefetchDataStorageMgr
{
    WCEliminatedSlotMMKV *_slotMMKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCEliminatedSlotMMKV *slotMMKV; // @synthesize slotMMKV=_slotMMKV;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getMPDataMMKV;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

