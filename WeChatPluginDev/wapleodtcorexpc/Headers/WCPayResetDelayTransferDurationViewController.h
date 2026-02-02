//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DelaySwitchSettingLogic, GetTransferWordingResponse, NSString, UIButton, WCPayResetDelayTipsNewModal;
@protocol WCPayResetDelayTransferDurationViewControllerDelegate;

@interface WCPayResetDelayTransferDurationViewController
{
    GetTransferWordingResponse *_wordingResponse;
    unsigned long long _entryScene;
    NSString *_selectedTitle;
    DelaySwitchSettingLogic *_delaySetting;
    UIButton *_footerBtn;
    NSString *_originSelectedTitle;
    WCPayResetDelayTipsNewModal *_resetDelayTipsModal;
    id <WCPayResetDelayTransferDurationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayResetDelayTransferDurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayResetDelayTipsNewModal *resetDelayTipsModal; // @synthesize resetDelayTipsModal=_resetDelayTipsModal;
@property(copy, nonatomic) NSString *originSelectedTitle; // @synthesize originSelectedTitle=_originSelectedTitle;
@property(retain, nonatomic) UIButton *footerBtn; // @synthesize footerBtn=_footerBtn;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySetting; // @synthesize delaySetting=_delaySetting;
@property(copy, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
- (void)reportAction:(id)arg1 withSelectedSwitchState:(id)arg2;
- (void)onOpenQA;
- (void)onWCPayResetDelayTipsNewModalTapCancel;
- (void)onWCPayResetDelayTipsNewModalTapConfirm;
- (void)footerBtnClick;
- (void)selcetCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)setupTableFooterView;
- (id)setupTableHeaderView;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (id)navigationBarBackgroundColor;
- (unsigned long long)switchType;
- (id)defaultSelectedTitle;
- (void)setupModel;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

