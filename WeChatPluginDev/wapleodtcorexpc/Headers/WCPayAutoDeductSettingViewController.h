//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UISwitch, WCPayEntrustPayInfo, WCPayOrderDetail;
@protocol WCPayAutoDeductSettingViewControllerDelegate;

@interface WCPayAutoDeductSettingViewController
{
    id <WCPayAutoDeductSettingViewControllerDelegate> m_delegate;
    UISwitch *_switchButton;
    RichTextView *_richTextView;
    WCPayOrderDetail *_order;
    WCPayEntrustPayInfo *_entrustPayInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayEntrustPayInfo *entrustPayInfo; // @synthesize entrustPayInfo=_entrustPayInfo;
@property(retain, nonatomic) WCPayOrderDetail *order; // @synthesize order=_order;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)isCNY;
- (void)OnFooterButtonClick:(id)arg1;
- (void)changeSwitch:(id)arg1;
- (void)OnCancel;
- (void)setupData;
- (void)setDelegate:(id)arg1;
- (id)getShowInfoView:(id)arg1;
- (void)setupBottomTextView;
- (id)footerView;
- (void)makeInfoSectionContentView:(id)arg1;
- (void)makeHeaderContent;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

