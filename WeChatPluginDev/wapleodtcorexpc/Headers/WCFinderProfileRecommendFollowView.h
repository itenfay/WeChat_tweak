//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UIButton, UILabel, WCFinderFriendsAlsoFollowViewModel, WCFinderShowcasePagingView;

@interface WCFinderProfileRecommendFollowView : UIView
{
    _Bool _isExpand;
    _Bool _showInfoSecondLine;
    WCFinderFriendsAlsoFollowViewModel *_recommends;
    double _expandHorizontalPadding;
    UIView *_anchorRelateView;
    UIView *_backgroundView;
    CAGradientLayer *_topInnerShadow;
    CAGradientLayer *_bottomInnerShadow;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    double _cacheAnchorPosition;
    WCFinderShowcasePagingView *_pagingView;
    struct CGSize _cacheSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShowcasePagingView *pagingView; // @synthesize pagingView=_pagingView;
@property(nonatomic) _Bool showInfoSecondLine; // @synthesize showInfoSecondLine=_showInfoSecondLine;
@property(nonatomic) double cacheAnchorPosition; // @synthesize cacheAnchorPosition=_cacheAnchorPosition;
@property(nonatomic) struct CGSize cacheSize; // @synthesize cacheSize=_cacheSize;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAGradientLayer *bottomInnerShadow; // @synthesize bottomInnerShadow=_bottomInnerShadow;
@property(retain, nonatomic) CAGradientLayer *topInnerShadow; // @synthesize topInnerShadow=_topInnerShadow;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(nonatomic) __weak UIView *anchorRelateView; // @synthesize anchorRelateView=_anchorRelateView;
@property(nonatomic) double expandHorizontalPadding; // @synthesize expandHorizontalPadding=_expandHorizontalPadding;
@property(retain, nonatomic) WCFinderFriendsAlsoFollowViewModel *recommends; // @synthesize recommends=_recommends;
- (void)showcaseView:(id)arg1 willDisplayCell:(long long)arg2;
- (void)showcaseView:(id)arg1 onClickCellAtIdx:(long long)arg2;
- (void)showcaseView:(id)arg1 updateCell:(id)arg2 atIdx:(long long)arg3;
- (long long)numberOfShowcaseView:(id)arg1;
- (void)onClickMore;
- (struct CGSize)itemSizeWithContainerWidth:(double)arg1;
- (struct CGRect)calcultePagingRect:(double)arg1;
- (void)layoutAnchorPoint;
- (void)doLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setupPagingView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

