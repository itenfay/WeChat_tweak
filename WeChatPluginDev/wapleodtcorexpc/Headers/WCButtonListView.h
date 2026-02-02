//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, UIColor;

@interface WCButtonListView : UIView
{
    _Bool _autoExpandHitArea;
    _Bool _needsLayoutButtons;
    double _buttonPadding;
    double _separatorLineHeight;
    UIColor *_separatorColor;
    CDUnknownBlockType _generateButtonHandler;
    NSMutableDictionary *_keyToButtonItemDict;
    NSMutableArray *_itemList;
}

+ (id)generateSeparatorLine;
+ (id)generateBottomButton;
+ (id)keyForButton:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsLayoutButtons; // @synthesize needsLayoutButtons=_needsLayoutButtons;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSMutableDictionary *keyToButtonItemDict; // @synthesize keyToButtonItemDict=_keyToButtonItemDict;
@property(copy, nonatomic) CDUnknownBlockType generateButtonHandler; // @synthesize generateButtonHandler=_generateButtonHandler;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double separatorLineHeight; // @synthesize separatorLineHeight=_separatorLineHeight;
@property(nonatomic) double buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(nonatomic) _Bool autoExpandHitArea; // @synthesize autoExpandHitArea=_autoExpandHitArea;
- (void)onTapButton:(id)arg1;
- (void)addLineBreak;
- (id)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)layoutButtonsAndSeparatorsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

