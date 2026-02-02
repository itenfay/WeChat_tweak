//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAAppIdToUsernameTransfer;

@interface WASessionContentViewController
{
    WAAppIdToUsernameTransfer *_appIdTransfer;
    NSString *_sceneID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (_Bool)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(_Bool)arg3 scene:(unsigned long long)arg4;
- (void)onClickTitle;
- (id)getWASessionContentDelegate;
- (void)updateTitleAndSubTitleView:(id)arg1;
- (void)headerImageClicked:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)onWeAppSessionMsgBtnClick:(id)arg1;
- (void)onWeAppSessionMsgBtnHide;
- (void)onBackButtonClicked:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

