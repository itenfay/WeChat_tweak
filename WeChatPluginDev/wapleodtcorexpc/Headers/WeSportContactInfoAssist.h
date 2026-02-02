//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSString, UrlController;

@interface WeSportContactInfoAssist
{
    UrlController *m_urlController;
    ForwardMessageLogicController *m_forwardLogic;
}

- (void).cxx_destruct;
- (void)cancelFocus;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)uninstallPlugin;
- (void)installPlugin;
- (void)handleTopSwitchChange:(id)arg1;
- (void)handleMuteSwitchChange:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearMsg;
- (void)onSetPrivacy;
- (void)onShowDataSource;
- (void)goToCommonQuestion;
- (id)getCurrentViewController;
- (void)inviteFriend;
- (void)goWeSportSessionFrame;
- (void)goWeSportCenter;
- (void)reloadInstalledTableViewData;
- (id)getPluginIntro;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

