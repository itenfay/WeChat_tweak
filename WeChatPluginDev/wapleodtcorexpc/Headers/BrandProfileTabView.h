//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, UIColor, UIFont, UIView;
@protocol BrandProfileTabViewDelegate;

@interface BrandProfileTabView
{
    id <BrandProfileTabViewDelegate> _delegate;
    NSArray *_itemInfoList;
    UIFont *_titleFont;
    UIColor *_titleNormalColor;
    UIColor *_titleSelectedColor;
    UIColor *_indicatorColor;
    double _indicatorHeight;
    double _indicatorWidth;
    long long _selectedIndex;
    long long _alwaysClickableIndex;
    long long _indicatorIgnoreIndex;
    NSMutableArray *_buttonList;
    UIView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSMutableArray *buttonList; // @synthesize buttonList=_buttonList;
@property(nonatomic) long long indicatorIgnoreIndex; // @synthesize indicatorIgnoreIndex=_indicatorIgnoreIndex;
@property(nonatomic) long long alwaysClickableIndex; // @synthesize alwaysClickableIndex=_alwaysClickableIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) double indicatorWidth; // @synthesize indicatorWidth=_indicatorWidth;
@property(nonatomic) double indicatorHeight; // @synthesize indicatorHeight=_indicatorHeight;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(retain, nonatomic) UIColor *titleSelectedColor; // @synthesize titleSelectedColor=_titleSelectedColor;
@property(retain, nonatomic) UIColor *titleNormalColor; // @synthesize titleNormalColor=_titleNormalColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSArray *itemInfoList; // @synthesize itemInfoList=_itemInfoList;
@property(nonatomic) __weak id <BrandProfileTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSelectedIndicatorFrame:(_Bool)arg1;
- (void)updateSelectedIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 selectType:(unsigned long long)arg2;
- (void)onTabButtonClick:(id)arg1;
- (_Bool)isNoSubviews;
- (double)calcuteTabViewHeight;
- (void)layoutSubviews;
- (void)recreateButtonList;
- (void)setupIndicatorView;
- (id)init;

@end

