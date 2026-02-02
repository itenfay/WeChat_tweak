//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContactVerifyLogic, NSString;

@interface BrandBasedPluginContactInfoAssist
{
    CContactVerifyLogic *_contactVerifyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContactVerifyLogic *contactVerifyLogic; // @synthesize contactVerifyLogic=_contactVerifyLogic;
- (void)contactAddContactOk:(id)arg1;
- (void)handleOnAddContactOk:(id)arg1;
- (void)uninstallPlugin;
- (void)installPlugin;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)handleTopSwitchChange:(id)arg1;
- (void)enterContactSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

