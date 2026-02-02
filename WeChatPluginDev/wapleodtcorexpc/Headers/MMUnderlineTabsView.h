//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray, UIColor, UIView;

@interface MMUnderlineTabsView : UIControl
{
    _Bool _disableBottomLine;
    UIColor *_underlineDefaultColor;
    double _underlineOffset;
    double _tabSpacing;
    unsigned long long _selectedTabIndex;
    UIColor *_underlineColor;
    UIView *_backgroundView;
    UIView *_contentView;
    UIView *_underlineView;
    NSArray *_tabItems;
    NSMutableArray *_itemInfoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *itemInfoList; // @synthesize itemInfoList=_itemInfoList;
@property(retain, nonatomic) NSArray *tabItems; // @synthesize tabItems=_tabItems;
@property(retain, nonatomic) UIView *underlineView; // @synthesize underlineView=_underlineView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(nonatomic) unsigned long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(nonatomic) _Bool disableBottomLine; // @synthesize disableBottomLine=_disableBottomLine;
@property(nonatomic) double tabSpacing; // @synthesize tabSpacing=_tabSpacing;
@property(nonatomic) double underlineOffset; // @synthesize underlineOffset=_underlineOffset;
@property(retain, nonatomic) UIColor *underlineDefaultColor; // @synthesize underlineDefaultColor=_underlineDefaultColor;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setSelectedTabIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)layoutUnderlineViewWithTabInfo:(id)arg1;
- (void)setContentViewBackgroundColor:(id)arg1;
- (void)layoutTabViewWithTabInfo:(id)arg1;
- (void)updateWithTabItems:(id)arg1;
- (id)tabItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double preferWidth;
@property(readonly, nonatomic) unsigned long long numberOfTabItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end

