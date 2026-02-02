//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIScrollView;
@protocol MMBGMSelectedTabBarViewDelegate;

@interface MMBGMSelectedTabBarView
{
    id <MMBGMSelectedTabBarViewDelegate> _delegate;
    NSMutableArray *_tabButtons;
    NSMutableArray *_tabTitles;
    unsigned long long _currentIndex;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *tabTitles; // @synthesize tabTitles=_tabTitles;
@property(retain, nonatomic) NSMutableArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(nonatomic) __weak id <MMBGMSelectedTabBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tabButtonSelectedWithIndex:(long long)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)selectIndex:(unsigned long long)arg1;
- (void)updateTabButtonState:(long long)arg1;
- (void)manualTriggerSelectBtnAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 tabModel:(id)arg2;

@end

