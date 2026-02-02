//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, RichTextView, UIColor, UIFont, UIImageView, UITapGestureRecognizer;

@interface WCAgreementCheckBox : UIView
{
    _Bool _selected;
    _Bool _autoExpandHitArea;
    _Bool _isEnable;
    _Bool _isOverlay;
    _Bool _needsUpdateAccessibility;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _tapLinkBlock;
    NSString *_agreement;
    UIColor *_textColor;
    UIFont *_font;
    double _iconLength;
    UIImageView *_iconView;
    RichTextView *_richTextView;
    UITapGestureRecognizer *_tapGesture;
    UIColor *_selectedIconColor;
    UIColor *_unselectedIconColor;
    unsigned long long _sizeType;
    NSMutableArray *_accessibilityElements;
    struct UIEdgeInsets _expandHitAreaInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsUpdateAccessibility; // @synthesize needsUpdateAccessibility=_needsUpdateAccessibility;
@property(retain, nonatomic) NSMutableArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(nonatomic) struct UIEdgeInsets expandHitAreaInsets; // @synthesize expandHitAreaInsets=_expandHitAreaInsets;
@property(nonatomic) _Bool isOverlay; // @synthesize isOverlay=_isOverlay;
@property(nonatomic) unsigned long long sizeType; // @synthesize sizeType=_sizeType;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(retain, nonatomic) UIColor *unselectedIconColor; // @synthesize unselectedIconColor=_unselectedIconColor;
@property(retain, nonatomic) UIColor *selectedIconColor; // @synthesize selectedIconColor=_selectedIconColor;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool autoExpandHitArea; // @synthesize autoExpandHitArea=_autoExpandHitArea;
@property(nonatomic) double iconLength; // @synthesize iconLength=_iconLength;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *agreement; // @synthesize agreement=_agreement;
@property(copy, nonatomic) CDUnknownBlockType tapLinkBlock; // @synthesize tapLinkBlock=_tapLinkBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTapCheckBox:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)updateAccessibilityIfNeeded;
- (void)adjustExpandHitAreaInsetsIfNeeded;
- (void)shake;
- (void)doSelect;
- (void)setFrame:(struct CGRect)arg1;
- (void)callSelectBlockIfNeeded;
- (double)richTextViewMaxWidthFromWidth:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initGestures;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSizeType:(unsigned long long)arg1 isEnable:(_Bool)arg2 isOverlay:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

