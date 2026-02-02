//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableString, NSString, UIButton, UILabel, WAHiddenTextField;
@protocol IWARichTextViewHelper, WAPhoneVerifyWindowDelegate;

@interface WAPhoneVerifyWindow : UIView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_countDown;
    UIButton *_closeButton;
    NSMutableArray *_numLabels;
    NSMutableString *_input;
    int _secCount;
    id <WAPhoneVerifyWindowDelegate> _verifyWindowDelegate;
    long long _inputCount;
    NSString *_phoneNum;
    id <IWARichTextViewHelper> _richTextHelper;
    WAHiddenTextField *_confirmCodeTF;
}

+ (id)setupWindow:(id)arg1 phone:(id)arg2 inputCount:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WAHiddenTextField *confirmCodeTF; // @synthesize confirmCodeTF=_confirmCodeTF;
@property(retain, nonatomic) id <IWARichTextViewHelper> richTextHelper; // @synthesize richTextHelper=_richTextHelper;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(nonatomic) long long inputCount; // @synthesize inputCount=_inputCount;
@property(nonatomic) __weak id <WAPhoneVerifyWindowDelegate> verifyWindowDelegate; // @synthesize verifyWindowDelegate=_verifyWindowDelegate;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onDelete;
- (void)onChar:(id)arg1;
- (struct CGRect)contentViewFrame;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 linkRect:(struct CGRect)arg2;
- (void)onClose:(id)arg1;
- (void)countDown;
- (void)initView;
- (void)closeWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

