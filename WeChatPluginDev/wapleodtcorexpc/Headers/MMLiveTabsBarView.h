//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveTabsBarViewInitParameter, NSArray;
@protocol MMLiveTabsBarViewDelegate;

@interface MMLiveTabsBarView : UIView
{
    id <MMLiveTabsBarViewDelegate> _delegate;
    MMLiveTabsBarViewInitParameter *_param;
    NSArray *_tabButtons;
    UIView *_tabIndicatorView;
    double _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) double currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIView *tabIndicatorView; // @synthesize tabIndicatorView=_tabIndicatorView;
@property(retain, nonatomic) NSArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(retain, nonatomic) MMLiveTabsBarViewInitParameter *param; // @synthesize param=_param;
@property(nonatomic) __weak id <MMLiveTabsBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectTab:(id)arg1;
- (id)buildTabButtonWithIndex:(unsigned long long)arg1 title:(id)arg2;
- (void)buildTabIndicatorIfNeeded;
- (void)buildTabsWithTitles:(id)arg1;
- (void)setTabTitles:(id)arg1;
- (void)layoutSubviews;
- (id)initWithParameter:(id)arg1;

@end

