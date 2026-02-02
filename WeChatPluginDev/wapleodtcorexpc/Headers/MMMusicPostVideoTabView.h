//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol MMMusicPostVideoTabViewDelegate;

@interface MMMusicPostVideoTabView : UIView
{
    id <MMMusicPostVideoTabViewDelegate> _delegate;
    UIView *_tabUnderLine;
    NSMutableArray *_tabButtons;
    NSArray *_tabListData;
    unsigned long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *tabListData; // @synthesize tabListData=_tabListData;
@property(retain, nonatomic) NSMutableArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(retain, nonatomic) UIView *tabUnderLine; // @synthesize tabUnderLine=_tabUnderLine;
@property(nonatomic) __weak id <MMMusicPostVideoTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)widthToFit;
- (unsigned long long)getCurrentButtonIndex;
- (void)tabButtonSelected:(id)arg1 index:(long long)arg2 manualyTappedType:(unsigned long long)arg3;
- (void)tabButtonClicked:(id)arg1;
- (void)revertButtonSelectedState:(unsigned long long)arg1;
- (void)setButtonSelectedState:(unsigned long long)arg1;
- (void)updateButtonSelectedState:(unsigned long long)arg1;
- (void)updateTabButtonState:(long long)arg1 needAnim:(_Bool)arg2;
- (void)selectTabAtIndex:(long long)arg1 manualyTappedType:(unsigned long long)arg2;
- (double)getUILabelWidthWithTips:(id)arg1;
- (void)updateTabButtonsLayout;
- (_Bool)configTabList:(id)arg1;
- (void)refreshTabLanguage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

