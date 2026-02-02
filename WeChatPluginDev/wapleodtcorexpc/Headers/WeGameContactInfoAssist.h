//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSString;

@interface WeGameContactInfoAssist
{
    ForwardMessageLogicController *m_forwardLogic;
}

- (void).cxx_destruct;
- (void)uninstallPlugin;
- (void)installPlugin;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearMsg;
- (id)getCurrentViewController;
- (void)setPushSetting;
- (void)inviteFriend;
- (void)goWeGameSessionFrame;
- (void)reloadInstalledTableViewData;
- (id)getPluginIntro;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

