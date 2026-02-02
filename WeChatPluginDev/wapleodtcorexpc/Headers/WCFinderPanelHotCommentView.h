//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIImageView, UILabel, WCFinderComment, WCFinderDynamicRichTextView;
@protocol WCFinderPanelHotCommentViewDelegate;

@interface WCFinderPanelHotCommentView : UIView
{
    _Bool _forceBoldHotWord;
    id <WCFinderPanelHotCommentViewDelegate> _delagate;
    WCFinderComment *_comment;
    UILabel *_hotWordLabel;
    RichTextView *_textView;
    UIView *_suffixView;
    unsigned long long _suffixType;
    double _textViewTruncatedFY;
    UIImageView *_suffixIconImageView;
    WCFinderDynamicRichTextView *_suffixDescLabel;
    NSString *_content;
}

+ (id)reportKVDictWithComment:(id)arg1;
+ (unsigned long long)commentOvertTypeWithComment:(id)arg1;
+ (unsigned long long)commentPrefixTypeWithComment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) WCFinderDynamicRichTextView *suffixDescLabel; // @synthesize suffixDescLabel=_suffixDescLabel;
@property(retain, nonatomic) UIImageView *suffixIconImageView; // @synthesize suffixIconImageView=_suffixIconImageView;
@property(nonatomic) double textViewTruncatedFY; // @synthesize textViewTruncatedFY=_textViewTruncatedFY;
@property(nonatomic) unsigned long long suffixType; // @synthesize suffixType=_suffixType;
@property(retain, nonatomic) UIView *suffixView; // @synthesize suffixView=_suffixView;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *hotWordLabel; // @synthesize hotWordLabel=_hotWordLabel;
@property(nonatomic) _Bool forceBoldHotWord; // @synthesize forceBoldHotWord=_forceBoldHotWord;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <WCFinderPanelHotCommentViewDelegate> delagate; // @synthesize delagate=_delagate;
- (id)dynamicFontOfSize:(double)arg1;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(id)arg2;
- (id)suffixIconColor;
- (id)suffixLabelColor;
- (void)resetTextViewTruncatedState;
- (void)onClickComment;
- (void)updateSuffixViewWithLeftView:(id)arg1 iconName:(id)arg2 iconSize:(struct CGSize)arg3 labelText:(id)arg4 elementsMargin:(double)arg5;
- (void)updateSuffixViewWithComment:(id)arg1;
- (void)updateHotwordLabelWithComment:(id)arg1;
- (void)updateAccessibility;
- (void)updateWithCommentList:(id)arg1 width:(double)arg2;
- (void)updateLayout;
- (void)updateSubviewsStyle;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

