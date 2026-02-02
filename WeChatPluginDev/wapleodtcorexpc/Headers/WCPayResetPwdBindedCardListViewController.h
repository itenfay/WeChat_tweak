//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTipsViewController, NSMutableArray, NSString, RichTextView, UIButton, WCPayBindCardInfo;
@protocol WCPayResetPwdBindedCardListViewControllerDelegate;

@interface WCPayResetPwdBindedCardListViewController
{
    UIButton *m_footerButton;
    NSMutableArray *m_cellInfoArray;
    WCPayBindCardInfo *selectedPayCardInfo;
    id <WCPayResetPwdBindedCardListViewControllerDelegate> m_delegate;
    _Bool bSelectedNewCardToResetPwd;
    RichTextView *richTextView;
    _Bool bPoped;
    UIButton *_qaButton;
    MMTipsViewController *_errorTipsViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTipsViewController *errorTipsViewController; // @synthesize errorTipsViewController=_errorTipsViewController;
@property(retain, nonatomic) UIButton *qaButton; // @synthesize qaButton=_qaButton;
- (void)onQAButtonClick;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)OnSelectNewCard;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)OnSelectInvalidCard:(id)arg1;
- (void)OnSelectCard:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadCardListView;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)OnResetPwdBindedCardListBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)checkBankCanShow:(id)arg1;
- (id)checkBankAvailable:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

