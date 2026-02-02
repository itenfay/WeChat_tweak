//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMBarItemCustomView, NSString, RichTextView, UILabel, WCFinderFeedContentTextViewConfig, YYLabel;
@protocol WCFinderFeedContentTextClickActionDelegate, WCFinderFeedContentTextViewLayoutDelegate;

@interface WCFinderFeedContentTextView : UIView
{
    _Bool _enableTouchExpand;
    _Bool _enableLongPress;
    _Bool _isRichTextLinkClickHandled;
    _Bool _isEnableReadMoreAction;
    _Bool _needExtraLine;
    id <WCFinderFeedContentTextClickActionDelegate> _delegate;
    id <WCFinderFeedContentTextViewLayoutDelegate> _layoutDelegate;
    RichTextView *_contentView;
    WCFinderFeedContentTextViewConfig *_config;
    UILabel *_prefixLabel;
    UIView *_prefixContainer;
    RichTextView *_preContentView;
    UIView *_suffixView;
    UIView *_clipArrowView;
    MMBarItemCustomView *_suffixMaskView;
    YYLabel *_actionLabel;
    long long _contentLine;
}

+ (struct CGSize)textSizeWithConfig:(id)arg1;
+ (double)textHeightWithConfig:(id)arg1;
+ (id)contentTextViewWithConfig:(id)arg1;
+ (_Bool)isInvisibleLinesAreLinkStyleForContent:(id)arg1 width:(double)arg2 font:(id)arg3 unExpandLineNum:(unsigned long long)arg4 lineSpacing:(double)arg5 rightIconPadding:(double)arg6;
- (void).cxx_destruct;
@property(nonatomic) _Bool needExtraLine; // @synthesize needExtraLine=_needExtraLine;
@property(nonatomic) long long contentLine; // @synthesize contentLine=_contentLine;
@property(nonatomic) _Bool isEnableReadMoreAction; // @synthesize isEnableReadMoreAction=_isEnableReadMoreAction;
@property(retain, nonatomic) YYLabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) MMBarItemCustomView *suffixMaskView; // @synthesize suffixMaskView=_suffixMaskView;
@property(retain, nonatomic) UIView *clipArrowView; // @synthesize clipArrowView=_clipArrowView;
@property(retain, nonatomic) UIView *suffixView; // @synthesize suffixView=_suffixView;
@property(retain, nonatomic) RichTextView *preContentView; // @synthesize preContentView=_preContentView;
@property(retain, nonatomic) UIView *prefixContainer; // @synthesize prefixContainer=_prefixContainer;
@property(retain, nonatomic) UILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(retain, nonatomic) WCFinderFeedContentTextViewConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isRichTextLinkClickHandled; // @synthesize isRichTextLinkClickHandled=_isRichTextLinkClickHandled;
@property(nonatomic) _Bool enableLongPress; // @synthesize enableLongPress=_enableLongPress;
@property(nonatomic) _Bool enableTouchExpand; // @synthesize enableTouchExpand=_enableTouchExpand;
@property(retain, nonatomic) RichTextView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCFinderFeedContentTextViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <WCFinderFeedContentTextClickActionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(id)arg2;
- (void)richTextView:(id)arg1 updateTruncatedTrailing:(_Bool)arg2 truncatedViewframe:(struct CGRect)arg3 lastStyleViewFrame:(struct CGRect)arg4;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)setLinkShadowOffset:(struct CGSize)arg1;
- (void)setLinkShadowColor:(id)arg1;
- (void)setActionLabelTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setTextFont:(id)arg1;
- (_Bool)isEnableResponseReadMoreAction;
- (_Bool)isContentTruncated;
- (_Bool)isActionLabelHidden;
- (void)prepareForReuse;
- (void)enableTextClick;
- (void)dismissHighLightText;
- (void)enableHeightText;
- (void)resetPrefixView;
- (void)clearSuffixView;
- (void)forceForbidSuffixClipping;
- (unsigned long long)getCurrentLines;
- (void)updateContent:(id)arg1;
- (void)updateCustomPrefixView;
- (void)updatePrefix;
- (void)updateSuffixViewFrame;
- (void)updateSuffixView;
- (void)preCalContentView;
- (void)updateContentView:(id)arg1;
- (void)updateConfig;
- (void)setUp;
- (void)delayedTouchesEnded;
- (id)displayLinks;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onExpandAction:(_Bool)arg1;
- (void)textExpandAction;
- (void)clipArrowViewAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

