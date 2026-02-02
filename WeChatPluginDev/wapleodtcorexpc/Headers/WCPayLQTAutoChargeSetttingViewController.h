//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayLQTPickerPanelView;
@protocol WCPayLQTAutoChargeSetttingViewControllerDelegate;

@interface WCPayLQTAutoChargeSetttingViewController
{
    id <WCPayLQTAutoChargeSetttingViewControllerDelegate> _delegate;
    WCPayLQTPickerPanelView *_pickerPanelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayLQTPickerPanelView *pickerPanelView; // @synthesize pickerPanelView=_pickerPanelView;
@property(nonatomic) __weak id <WCPayLQTAutoChargeSetttingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)timeStringFromTimeSpan:(unsigned int)arg1;
- (void)onPickerPanelViewConfirmWithTimeSpan:(id)arg1;
- (void)onPickerPanelViewDismiss;
- (void)chargeTimeCellClick;
- (void)confirmClose;
- (void)cancelClose;
- (void)onSwitchChange:(id)arg1;
- (void)makeChargeTimeCell:(id)arg1;
- (void)makeSwicthCell:(id)arg1;
- (id)setupHeaderView;
- (void)reloadTableView;
- (void)showOpenSuccToastIfNeed;
- (void)setupContentView;
- (void)leftBtnClick;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

