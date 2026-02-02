//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCEliminatedSlotMMKV;

@interface EcsFinderLiveMgr
{
    WCEliminatedSlotMMKV *_ecsFinderLiveInfoSlotKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCEliminatedSlotMMKV *ecsFinderLiveInfoSlotKV; // @synthesize ecsFinderLiveInfoSlotKV=_ecsFinderLiveInfoSlotKV;
- (void)getFinderLiveInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateFinderLiveInfoTime:(id)arg1;
- (_Bool)shouldUpdateNow:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

