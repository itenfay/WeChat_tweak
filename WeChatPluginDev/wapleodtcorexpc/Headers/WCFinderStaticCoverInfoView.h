//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor;

@interface WCFinderStaticCoverInfoView : UIView
{
    _Bool _showSeparate;
    _Bool _forbidCorner;
    UIColor *_blurColor;
    UIColor *_titleColor;
    UIColor *_seperateColor;
    double _seperatorPadding;
    NSArray *_rightItems;
    NSArray *_leftItems;
    NSMutableArray *_itemViews;
    NSMutableArray *_separateViews;
    UIView *_blurView;
    UIView *_placeholderView;
    struct CGSize _lastLayoutSize;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSMutableArray *separateViews; // @synthesize separateViews=_separateViews;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) _Bool forbidCorner; // @synthesize forbidCorner=_forbidCorner;
@property(retain, nonatomic) NSArray *leftItems; // @synthesize leftItems=_leftItems;
@property(retain, nonatomic) NSArray *rightItems; // @synthesize rightItems=_rightItems;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double seperatorPadding; // @synthesize seperatorPadding=_seperatorPadding;
@property(retain, nonatomic) UIColor *seperateColor; // @synthesize seperateColor=_seperateColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *blurColor; // @synthesize blurColor=_blurColor;
@property(nonatomic) _Bool showSeparate; // @synthesize showSeparate=_showSeparate;
- (id)createAccessibilityLabelForItems;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)needRoundCorner;
- (void)doLayout;
- (void)layoutSubviews;
- (id)checkItems:(id)arg1;
- (void)setLeftItems:(id)arg1 rightItems:(id)arg2;
- (id)allItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end

