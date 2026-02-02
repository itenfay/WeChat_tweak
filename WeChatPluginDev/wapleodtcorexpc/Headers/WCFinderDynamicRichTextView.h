//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, WCFinderDynamicRichTextParser, YYLabel;
@protocol WCFinderDynamicRichTextViewDelegate;

@interface WCFinderDynamicRichTextView : UIView
{
    id <WCFinderDynamicRichTextViewDelegate> _delegate;
    UIFont *_font;
    UIColor *_textColor;
    NSString *_richText;
    double _horizontalPadding;
    double _verticalPadding;
    long long _lineBreakMode;
    YYLabel *_label;
    WCFinderDynamicRichTextParser *_richTextParser;
    struct CGSize _iconSize;
    struct CGSize _iconPadding;
    struct CGSize _fontIconSize;
}

+ (id)covertRichTextToRichTextViewContent:(id)arg1 iconSize:(struct CGSize)arg2 iconColor:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDynamicRichTextParser *richTextParser; // @synthesize richTextParser=_richTextParser;
@property(retain, nonatomic) YYLabel *label; // @synthesize label=_label;
@property(nonatomic) struct CGSize fontIconSize; // @synthesize fontIconSize=_fontIconSize;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(retain, nonatomic) NSString *richText; // @synthesize richText=_richText;
@property(nonatomic) struct CGSize iconPadding; // @synthesize iconPadding=_iconPadding;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak id <WCFinderDynamicRichTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onClickText;
- (void)onTextView:(id)arg1 onClickLinkWithHref:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIsAccessibilityElement:(_Bool)arg1;
@property(nonatomic) long long textAlignment;
@property(nonatomic) long long numberOfLines;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

