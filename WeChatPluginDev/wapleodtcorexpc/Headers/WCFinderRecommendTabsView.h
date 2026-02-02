//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString;
@protocol WCFinderRecommendTabsViewDelegate;

@interface WCFinderRecommendTabsView : UIView
{
    id <WCFinderRecommendTabsViewDelegate> _delegate;
    UIView *_tabUnderLine;
    NSMutableArray *_tabButtons;
    NSArray *_tabListData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *tabListData; // @synthesize tabListData=_tabListData;
@property(retain, nonatomic) NSMutableArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(retain, nonatomic) UIView *tabUnderLine; // @synthesize tabUnderLine=_tabUnderLine;
@property(nonatomic) __weak id <WCFinderRecommendTabsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTLTabButtonCleanLeftIconForButton:(id)arg1;
- (void)refreshTabGestureToTabType:(long long)arg1;
- (void)onSelectScrollDidEndWithTabType:(long long)arg1 toTabType:(long long)arg2;
- (struct CGRect)tabUnderLineFrameForButton:(id)arg1;
- (long long)getCurrentMaxAreaTabType;
- (void)refreshTabGesture;
- (void)updateRecommendCursorValue:(double)arg1;
- (id)getTabButtonByCategory:(long long)arg1;
- (_Bool)configRedDotUIWithCategory:(long long)arg1 showInfo:(id)arg2;
- (void)tabButtonDoubleClicked:(id)arg1;
- (void)tabButtonSingleClicked:(id)arg1;
- (void)adjustTabButtonExpandHitTestArea;
- (void)adjustTabButtonToRightSpace:(double)arg1;
- (void)adjustTabButtonToLeftSpace:(double)arg1;
- (double)getUILabelWidthWithTips:(id)arg1;
- (double)getTabsButtonMinButtonFontMinification;
- (void)adjustTabButtonToSameFont;
- (void)adjustTabButtonToCenterLayout:(double)arg1;
- (void)judgeShouldUseLeftAlignmentLayoutStyle:(double)arg1;
- (void)updateTabButtonsLayout;
- (void)updateButtonImageForConfig:(id)arg1 btn:(id)arg2;
- (_Bool)configTabList:(id)arg1;
- (id)viewWithCategory:(long long)arg1;
- (void)resetTabButtonsSize;
- (void)refreshTabSubViews;
- (void)layoutSubviews;
- (void)setTabItemNormalColor:(id)arg1 highlightColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

