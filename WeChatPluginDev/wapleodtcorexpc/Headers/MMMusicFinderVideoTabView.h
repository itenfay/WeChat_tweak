//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol MMMusicFinderVideoTabViewDelegate;

@interface MMMusicFinderVideoTabView : UIView
{
    id <MMMusicFinderVideoTabViewDelegate> _delegate;
    NSMutableArray *_tabButtons;
    NSMutableArray *_tabTitles;
    unsigned long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *tabTitles; // @synthesize tabTitles=_tabTitles;
@property(retain, nonatomic) NSMutableArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(nonatomic) __weak id <MMMusicFinderVideoTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tabButtonSelected:(id)arg1 index:(long long)arg2;
- (void)tabButtonClicked:(id)arg1;
- (void)revertButtonSelectedState:(unsigned long long)arg1;
- (void)setButtonSelectedState:(unsigned long long)arg1;
- (void)updateButtonSelectedState:(unsigned long long)arg1;
- (void)updateTabButtonState:(long long)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

