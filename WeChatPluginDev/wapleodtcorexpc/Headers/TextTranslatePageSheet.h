//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ExpandableTextView, MMUIActivityIndicatorView, NSString, RichTextView, TextTranslateCgi, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface TextTranslatePageSheet
{
    _Bool _disableLongPressMenu;
    UIView *_containerView;
    UIScrollView *_contentScrollView;
    ExpandableTextView *_originTextView;
    UIView *_seperatorLine;
    RichTextView *_translateTextView;
    MMUIActivityIndicatorView *_translateLoadingView;
    UIView *_bottomView;
    UIImageView *_successIconView;
    UILabel *_successLabel;
    UIButton *_changeLanguageButton;
    NSString *_originText;
    TextTranslateCgi *_translateCgi;
}

+ (_Bool)isEnable;
- (void).cxx_destruct;
@property(retain, nonatomic) TextTranslateCgi *translateCgi; // @synthesize translateCgi=_translateCgi;
@property(retain, nonatomic) NSString *originText; // @synthesize originText=_originText;
@property(retain, nonatomic) UIButton *changeLanguageButton; // @synthesize changeLanguageButton=_changeLanguageButton;
@property(retain, nonatomic) UILabel *successLabel; // @synthesize successLabel=_successLabel;
@property(retain, nonatomic) UIImageView *successIconView; // @synthesize successIconView=_successIconView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) MMUIActivityIndicatorView *translateLoadingView; // @synthesize translateLoadingView=_translateLoadingView;
@property(retain, nonatomic) RichTextView *translateTextView; // @synthesize translateTextView=_translateTextView;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) ExpandableTextView *originTextView; // @synthesize originTextView=_originTextView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool disableLongPressMenu; // @synthesize disableLongPressMenu=_disableLongPressMenu;
- (void)onExpandableTextViewExpand:(_Bool)arg1;
- (id)getScrollView;
- (id)getViewController;
- (void)onRemoveRTCV;
- (void)onSingleTapRTCV;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (id)getCurrentViewController;
- (void)onRichTextViewExit;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onClickChangeLanguageButton;
- (void)exitSelectState;
- (void)startTranslate;
- (void)updateUI;
- (void)layoutUI;
- (void)initView;
- (void)initConfig;
- (void)pageSheetDidShow;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

