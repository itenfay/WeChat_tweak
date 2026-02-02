//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIScrollView;
@protocol WCFinderTabPageViewBasicViewDelegate;

@interface WCFinderLiveTopicTemplateTabContainerView : UIView
{
    id <WCFinderTabPageViewBasicViewDelegate> delegate;
    NSArray *_tabViews;
    UIScrollView *_scrollView;
    unsigned long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *tabViews; // @synthesize tabViews=_tabViews;
@property(nonatomic) __weak id <WCFinderTabPageViewBasicViewDelegate> delegate; // @synthesize delegate;
- (void)setSelectedForTabView:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)didTapScrollView:(id)arg1;
- (void)setTabName:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSelectIndex:(unsigned long long)arg1;
- (_Bool)removeTabAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithTabViewArray:(id)arg1;
- (id)initWithTabNameArray:(id)arg1;
- (id)init;
- (unsigned long long)currentSelectIndex;
- (void)adjustTabViewFrame;
- (void)addTabWithTabView:(id)arg1;
- (void)addTabWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

