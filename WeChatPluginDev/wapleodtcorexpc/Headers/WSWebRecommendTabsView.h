//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol WSWebRecommendTabsViewDelegate;

@interface WSWebRecommendTabsView : UIView
{
    id <WSWebRecommendTabsViewDelegate> _delegate;
    UIView *_tabUnderLine;
    NSMutableArray *_tabButtons;
    NSMutableDictionary *_reddotStatusDic;
    NSArray *_tabListData;
    long long _currentIndex;
}

+ (double)tabViewBottomMargin;
+ (double)getTabBarItemWidth:(id)arg1;
+ (_Bool)isHasNewLifeTab:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *tabListData; // @synthesize tabListData=_tabListData;
@property(retain, nonatomic) NSMutableDictionary *reddotStatusDic; // @synthesize reddotStatusDic=_reddotStatusDic;
@property(retain, nonatomic) NSMutableArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(retain, nonatomic) UIView *tabUnderLine; // @synthesize tabUnderLine=_tabUnderLine;
@property(nonatomic) __weak id <WSWebRecommendTabsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateButtonColor:(double)arg1;
- (void)updateUnderLinePos:(double)arg1;
- (void)scrollToPosition:(double)arg1;
- (id)outsideGetTabsReddotInfoDic;
- (void)configContentUI:(_Bool)arg1 numberOnRedDot:(long long)arg2 withCategory:(long long)arg3;
- (void)configContentReddot:(_Bool)arg1 numberReddot:(long long)arg2 withCategory:(long long)arg3;
- (void)innerConfigContentReddot;
- (void)clearReddotStatus;
- (void)refreshReddotLayout;
- (void)tabButtonSelected:(id)arg1 index:(long long)arg2 reason:(unsigned long long)arg3;
- (void)tabButtonClicked:(id)arg1;
- (void)updateTabButtonState:(long long)arg1 needAnim:(_Bool)arg2;
- (void)outsideCallTabSelected:(long long)arg1 reason:(unsigned long long)arg2;
- (long long)outsideCallTabSelectedWithCategory:(long long)arg1;
- (id)tabViewForInfo:(id)arg1;
- (_Bool)configTabList:(id)arg1;
- (double)getHorizolMargin:(id)arg1;
- (void)refreshTabLanguage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

