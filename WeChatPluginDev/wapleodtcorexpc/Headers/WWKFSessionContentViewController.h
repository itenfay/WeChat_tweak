//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WWKFSessionContentViewController
{
    NSString *_chatSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatSessionId; // @synthesize chatSessionId=_chatSessionId;
- (_Bool)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(_Bool)arg3 scene:(unsigned long long)arg4;
- (void)onWeAppSessionMsgBtnClick:(id)arg1;
- (void)onWeAppSessionMsgBtnHide;
- (void)onClickTitle;
- (void)updateTitleAndSubTitleView:(id)arg1;
- (void)headerImageClicked:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (id)wwkfContentLogicController;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldShowQuickReplyPush:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

