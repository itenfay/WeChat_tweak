//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, NSRegularExpression, NSString, UIButton, UILabel, UIScrollView, UIView, WCFinderContact;
@protocol WCFinderSignatureSettingViewControllerDelegate;

@interface WCFinderSignatureSettingViewController
{
    _Bool _updateTextByMentionVC;
    _Bool _showSafePanelAlready;
    WCFinderContact *_contact;
    id <WCFinderSignatureSettingViewControllerDelegate> _m_delegate;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_editTitleLabel;
    UILabel *_wordTips;
    UIButton *_confirmButton;
    UIView *_topLine;
    UIView *_bottomLine;
    MMGrowTextView *_textView;
    double _keyboardHeight;
    unsigned long long _currentTextLength;
    NSRegularExpression *_mailMatcher;
    NSRegularExpression *_ignoreRegex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRegularExpression *ignoreRegex; // @synthesize ignoreRegex=_ignoreRegex;
@property(retain, nonatomic) NSRegularExpression *mailMatcher; // @synthesize mailMatcher=_mailMatcher;
@property(nonatomic) _Bool showSafePanelAlready; // @synthesize showSafePanelAlready=_showSafePanelAlready;
@property(nonatomic) _Bool updateTextByMentionVC; // @synthesize updateTextByMentionVC=_updateTextByMentionVC;
@property(nonatomic) unsigned long long currentTextLength; // @synthesize currentTextLength=_currentTextLength;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *wordTips; // @synthesize wordTips=_wordTips;
@property(retain, nonatomic) UILabel *editTitleLabel; // @synthesize editTitleLabel=_editTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WCFinderSignatureSettingViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (_Bool)triggerSafePanelActionSheetByTitle:(id)arg1 subTitle:(id)arg2 clickSubTitleAction:(CDUnknownBlockType)arg3 acceptMsg:(id)arg4 clickAcceptBlock:(CDUnknownBlockType)arg5 cancelMsg:(id)arg6 clickCancelBlock:(CDUnknownBlockType)arg7 buttonModelArray:(id)arg8;
- (void)updateWordCountTipsLabel:(int)arg1;
- (void)showError:(id)arg1;
- (void)cancelSelectedMentionUserWith:(id)arg1;
- (void)onMentionContact:(id)arg1;
- (void)didSelectedMentionUserWith:(id)arg1 userContact:(id)arg2;
- (id)contactAttrAtTextView:(id)arg1 atIndex:(long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)_onTextView:(id)arg1 shouldChangeRange:(struct _NSRange)arg2 byReplaceText:(id)arg3;
- (void)TextViewDidEnter:(id)arg1;
- (void)updateAttributeStr;
- (void)cutLimitLineNumber:(long long)arg1 forTextView:(id)arg2;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)pushMentionVC;
- (void)setupView;
- (void)layoutView;
- (void)setupSelectRange;
- (id)signatureValidCheckPromise:(id)arg1;
- (id)modUserSignaturePromise;
- (void)OnReturn;
- (void)OnCancel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

