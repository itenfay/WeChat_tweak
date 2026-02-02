//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiteAppJsApiCallback, NSString, UIViewController;

@interface LiteAppJsApiEmoticonStartSelect
{
    LiteAppJsApiCallback *_callBack;
    UIViewController *_controller;
}

- (void).cxx_destruct;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)onSendButtonClicked;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)onBackgroundTapped;
- (void)removeEmoticonPanel;
- (void)showEmoticonPanel:(id)arg1;
- (id)getEmoticonPanel;
- (id)createEmoticonPanel:(id)arg1;
- (void)presentEmoticonPanelModal:(id)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

