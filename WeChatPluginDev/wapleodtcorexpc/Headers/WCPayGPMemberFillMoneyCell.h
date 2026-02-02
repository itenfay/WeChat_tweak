//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, MMUILabel, MMUIView, NSString, UIButton, UIImageView, WCUITextField;
@protocol WCPayGPMemberFillMoneyCellDelegate;

@interface WCPayGPMemberFillMoneyCell
{
    _Bool _disableEdit;
    id <WCPayGPMemberFillMoneyCellDelegate> _delegate;
    unsigned long long _maxPerAmount;
    MMUIView *_cellContentView;
    WCUITextField *_textField;
    MMHeadImageView *_headImgView;
    MMUILabel *_nicknameLabel;
    MMUIView *_keyboardInputToolBar;
    UIImageView *_checkMarkImgView;
    MMUIView *_lineView;
    MMUILabel *_postfixLabel;
    MMUILabel *_tipsLabel;
    MMUILabel *_commentLabel;
    UIButton *_previousBtn;
    UIButton *_nextBtn;
    CContact *_contact;
    double _payAmount;
    NSString *_comment;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableEdit; // @synthesize disableEdit=_disableEdit;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) double payAmount; // @synthesize payAmount=_payAmount;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UIButton *previousBtn; // @synthesize previousBtn=_previousBtn;
@property(retain, nonatomic) MMUILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUILabel *postfixLabel; // @synthesize postfixLabel=_postfixLabel;
@property(retain, nonatomic) MMUIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
@property(retain, nonatomic) MMUIView *keyboardInputToolBar; // @synthesize keyboardInputToolBar=_keyboardInputToolBar;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) WCUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MMUIView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(nonatomic) unsigned long long maxPerAmount; // @synthesize maxPerAmount=_maxPerAmount;
@property(nonatomic) __weak id <WCPayGPMemberFillMoneyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)nextTextField;
- (void)previousTextField;
- (void)resignTextField;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setNextBtnEnable:(_Bool)arg1;
- (void)setPreviousBtnEnable:(_Bool)arg1;
- (void)makeTextFieldBecomeFirstResponder;
- (void)updateCellContentWithContact:(id)arg1 payAmount:(double)arg2 displayName:(id)arg3 needShowSepLine:(_Bool)arg4 comment:(id)arg5 disableEdit:(_Bool)arg6;
- (void)configLayout;
- (id)genKeyboardInputToolbar;
- (void)setupContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

