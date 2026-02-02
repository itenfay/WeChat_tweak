//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIButton, NSMutableArray, NSString, UIScrollView;
@protocol WCFinderNearbyLiveTabViewContainerDelegate, WCFinderTabPageViewBasicViewDelegate;

@interface WCFinderNearbyLiveTabViewContainer : UIView
{
    _Bool _showSearchEntry;
    id <WCFinderTabPageViewBasicViewDelegate> delegate;
    id <WCFinderNearbyLiveTabViewContainerDelegate> _containerDelegate;
    UIScrollView *_tabContainer;
    NSMutableArray *_tabViewArray;
    unsigned long long _selectIndex;
    UIView *_gradientView;
    MMUIButton *_searchImageButtonView;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIButton *searchImageButtonView; // @synthesize searchImageButtonView=_searchImageButtonView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) unsigned long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *tabViewArray; // @synthesize tabViewArray=_tabViewArray;
@property(retain, nonatomic) UIScrollView *tabContainer; // @synthesize tabContainer=_tabContainer;
@property(nonatomic) _Bool showSearchEntry; // @synthesize showSearchEntry=_showSearchEntry;
@property(nonatomic) __weak id <WCFinderNearbyLiveTabViewContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)finderTabPageTabView:(id)arg1 changeToWidth:(double)arg2;
- (void)adjustContentOffsetWithTabView:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)onClickSearchEntry:(id)arg1;
- (void)adjustTabViewFrame;
- (unsigned long long)getSelectIndex;
- (void)checkResetSearchLayer;
- (void)layoutSearchView;
- (void)setupUI;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithTabViewArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

