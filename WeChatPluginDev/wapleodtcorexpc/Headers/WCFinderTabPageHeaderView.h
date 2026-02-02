//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSMutableArray, NSString, UIColor, UIScrollView, WCFinderTabFilterView;
@protocol WCFinderTabPageViewBasicViewDelegate, WCFinderTabViewProtocol;

@interface WCFinderTabPageHeaderView : UIView
{
    _Bool _fixWidth;
    id <WCFinderTabPageViewBasicViewDelegate> delegate;
    UIScrollView *_tabScrollView;
    UIView *_lineView;
    long long _alignment;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    NSMutableArray *_tabViewArray;
    UIView<WCFinderTabViewProtocol> *_currentSelectTabView;
    UIView *_tabBGView;
    double _tabMargin;
    UIColor *_lineColor;
    double _lineHeight;
    double _lineMargin;
    double _bottomMargin;
    WCFinderTabFilterView *_filterView;
    unsigned long long _selectFilterIndex;
    CAGradientLayer *_gradientMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(nonatomic) unsigned long long selectFilterIndex; // @synthesize selectFilterIndex=_selectFilterIndex;
@property(retain, nonatomic) WCFinderTabFilterView *filterView; // @synthesize filterView=_filterView;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double lineMargin; // @synthesize lineMargin=_lineMargin;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double tabMargin; // @synthesize tabMargin=_tabMargin;
@property(nonatomic) __weak UIView *tabBGView; // @synthesize tabBGView=_tabBGView;
@property(retain, nonatomic) UIView<WCFinderTabViewProtocol> *currentSelectTabView; // @synthesize currentSelectTabView=_currentSelectTabView;
@property(copy, nonatomic) NSMutableArray *tabViewArray; // @synthesize tabViewArray=_tabViewArray;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool fixWidth; // @synthesize fixWidth=_fixWidth;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIScrollView *tabScrollView; // @synthesize tabScrollView=_tabScrollView;
@property(nonatomic) __weak id <WCFinderTabPageViewBasicViewDelegate> delegate; // @synthesize delegate;
- (void)finderTabPageTabView:(id)arg1 changeToWidth:(double)arg2;
- (void)finderTabFilterView:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)adjustTabViewFrame;
- (void)updateButtonColor;
- (unsigned long long)currentSelectIndex;
- (void)setSelectIndex:(unsigned long long)arg1;
- (void)selectTabView:(id)arg1 isTriggerByUer:(_Bool)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)adjustContentOffsetWithTabView:(id)arg1;
- (void)adjustLineViewWithTabView:(id)arg1;
- (void)adjustFrame;
- (void)setUpUI;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateGradientMaskLayer;
- (void)initGradientMaskLayer;
- (void)adjustTabView;
- (void)adjustFilterView;
- (_Bool)hasFilter;
- (double)viewMaxWidth;
- (double)tabScrollViewMaxWidth;
- (void)setFilterNameArray:(id)arg1;
- (void)setTabName:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)removeTabAtIndex:(unsigned long long)arg1;
- (void)addTabWithTabView:(id)arg1;
- (void)addTabWithName:(id)arg1;
- (id)genDefaultTabViewArrayWithTabNameArray:(id)arg1;
- (id)initWithTabViewArray:(id)arg1 alignment:(long long)arg2;
- (id)initWithTabViewArray:(id)arg1;
- (id)initWithTabNameArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

