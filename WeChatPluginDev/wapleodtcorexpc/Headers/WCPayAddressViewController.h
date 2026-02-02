//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIButton, UILabel, UIView, WCBaseTextFieldItem, WCPayAreaItem, WCPayCss;
@protocol WCPayAddressViewControllerDelegate;

@interface WCPayAddressViewController
{
    id <WCPayAddressViewControllerDelegate> _m_delegate;
    UIView *_containerView;
    UIView *_headerView;
    UILabel *_titleLabel;
    UIView *_lineView;
    UIButton *_areaBaseView;
    WCPayAreaItem *_areaView;
    WCBaseTextFieldItem *_addressView;
    UIView *_footerView;
    UIButton *_nextButton;
    WCPayCss *_css;
    NSMutableArray *_itemArray;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) WCBaseTextFieldItem *addressView; // @synthesize addressView=_addressView;
@property(retain) WCPayAreaItem *areaView; // @synthesize areaView=_areaView;
@property(retain) UIButton *areaBaseView; // @synthesize areaBaseView=_areaBaseView;
@property(retain) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property __weak id <WCPayAddressViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)resignExcept:(id)arg1;
- (_Bool)buttonEnabled;
- (void)addLine:(id)arg1 option:(CDUnknownBlockType)arg2;
- (void)addRightImage:(id)arg1 baseView:(id)arg2;
- (double)leftTitleMaxWidth;
- (void)addTitle:(id)arg1 baseView:(id)arg2;
- (void)onClickNextButton;
- (void)updateNextButton;
- (void)updateFooterView;
- (void)updateAddressView;
- (void)resignItem;
- (void)onClickAreaView;
- (void)updateAreaView;
- (void)updateLineView;
- (void)updateTitleView;
- (void)updateHeaderView;
- (void)updateView;
- (void)viewDidLayoutSubviews;
- (void)onTapEmpty;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (_Bool)shouldInteractivePop;
- (void)dealloc;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

