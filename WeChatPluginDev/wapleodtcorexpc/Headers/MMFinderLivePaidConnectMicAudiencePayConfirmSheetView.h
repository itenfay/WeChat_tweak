//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView;

@interface MMFinderLivePaidConnectMicAudiencePayConfirmSheetView
{
    _Bool _wecoinEnough;
    CDUnknownBlockType _clickCommonQuestionAction;
    CDUnknownBlockType _clickAgreementAction;
    MMUIButton *_exchangeNeedToKnowButton;
    MMUIButton *_commonQuestionButton;
    RichTextView *_agreementTextView;
    MMUIButton *_agreementCheckbox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) RichTextView *agreementTextView; // @synthesize agreementTextView=_agreementTextView;
@property(nonatomic) _Bool wecoinEnough; // @synthesize wecoinEnough=_wecoinEnough;
@property(retain, nonatomic) MMUIButton *commonQuestionButton; // @synthesize commonQuestionButton=_commonQuestionButton;
@property(retain, nonatomic) MMUIButton *exchangeNeedToKnowButton; // @synthesize exchangeNeedToKnowButton=_exchangeNeedToKnowButton;
@property(copy, nonatomic) CDUnknownBlockType clickAgreementAction; // @synthesize clickAgreementAction=_clickAgreementAction;
@property(copy, nonatomic) CDUnknownBlockType clickCommonQuestionAction; // @synthesize clickCommonQuestionAction=_clickCommonQuestionAction;
- (_Bool)needToShowAgreement;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showAgreementToast;
- (void)setAgreementSelected:(_Bool)arg1;
- (void)onCheckBoxClicked;
- (void)onWecoinBalanceUpdated:(long long)arg1;
- (void)customInit;
- (void)customInitMoneyLabel:(id)arg1;
- (void)customInitTipLabel:(id)arg1;
- (void)customInitActionButton:(id)arg1;
- (void)onClickActionButton;
- (void)onClickCommonQuestion;
- (void)onClickNeedToKnown;
- (void)updateWithPrice:(unsigned long long)arg1;
- (void)layoutUI;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)helpButtonWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

