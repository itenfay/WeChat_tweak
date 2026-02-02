//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIScrollView;
@protocol WCFinderFeedPickerTabViewDelegate;

@interface WCFinderFeedPickerTabView
{
    _Bool _isUsingPlaneStyle;
    id <WCFinderFeedPickerTabViewDelegate> _delegate;
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
@property(nonatomic) _Bool isUsingPlaneStyle; // @synthesize isUsingPlaneStyle=_isUsingPlaneStyle;
@property(nonatomic) __weak id <WCFinderFeedPickerTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tabButtonSelectedWithIndex:(long long)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)selectIndex:(unsigned long long)arg1;
- (void)revertButtonSelectedState:(unsigned long long)arg1;
- (void)setButtonSelectedState:(unsigned long long)arg1;
- (void)updateButtonSelectedState:(unsigned long long)arg1;
- (void)updateTabButtonState:(long long)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithTabViewModels:(id)arg1;

@end

