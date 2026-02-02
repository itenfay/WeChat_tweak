//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMUITextField, NSString, UIImageView, UIView;
@protocol MMFinderLivePaymentSettingInputViewDelegate;

@interface MMFinderLivePaymentSettingInputView
{
    _Bool _forceDarkMode;
    UIView *_contentView;
    UIView *_wecoinIconTextFieldBackgroundView;
    UIImageView *_wecoinIconView;
    MMUITextField *_wecoinIconTextField;
    MMUIButton *_backButton;
    MMUILabel *_titleLabel;
    MMUIButton *_doneButton;
    double _contentViewHeight;
    id <MMFinderLivePaymentSettingInputViewDelegate> _operationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) __weak id <MMFinderLivePaymentSettingInputViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) MMUITextField *wecoinIconTextField; // @synthesize wecoinIconTextField=_wecoinIconTextField;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
@property(retain, nonatomic) UIView *wecoinIconTextFieldBackgroundView; // @synthesize wecoinIconTextFieldBackgroundView=_wecoinIconTextFieldBackgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)onDoneButtonClicked:(id)arg1;
- (void)backAction;
- (void)onContentViewTapped;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldHideKeyBoard;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)pageSheetWillDisappear;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (void)layoutWecoinIconTextField;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithContentViewHeight:(double)arg1 forceDarkMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

