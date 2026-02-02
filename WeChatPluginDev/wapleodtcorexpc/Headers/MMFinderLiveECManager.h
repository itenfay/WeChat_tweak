//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveECLocalSwitchManager, NSString;

@interface MMFinderLiveECManager
{
    MMFinderLiveECLocalSwitchManager *_localSwitchManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveECLocalSwitchManager *localSwitchManager; // @synthesize localSwitchManager=_localSwitchManager;
- (void)enterLiveWidgetWithProductID:(unsigned long long)arg1 reqType:(int)arg2 anchor:(id)arg3 entranceGMsgID:(id)arg4 ecSource:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)buildParamForDisplayWindowOpenProduct:(unsigned long long)arg1 appID:(id)arg2 anchor:(id)arg3 entranceGMsgID:(id)arg4 reqType:(int)arg5 ecSource:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

