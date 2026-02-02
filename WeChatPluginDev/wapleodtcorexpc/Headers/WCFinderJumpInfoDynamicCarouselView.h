//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, FinderJumpInfo_Style, MMTimer, MMUIButton, MMUILabel, MMWebImageView, NSString, WCFinderJumpInfoDynamicCarouselDetailItemView, WCFinderJumpInfoDynamicCarouselDetailView, WCFinderJumpInfoDynamicCarouselTitleView, WCFinderJumpInfoDynamicCarouselViewModel;
@protocol WCFinderJumpInfoDynamicCarouselViewDelegate;

@interface WCFinderJumpInfoDynamicCarouselView : UIView
{
    _Bool _isStyleInitialized;
    WCFinderJumpInfoDynamicCarouselViewModel *_viewModel;
    id <WCFinderJumpInfoDynamicCarouselViewDelegate> _delegate;
    unsigned long long _currentPhase;
    MMWebImageView *_iconImageView;
    UIView *_iconStatusContainerView;
    CAGradientLayer *_iconStatusGradientLayer;
    WCFinderJumpInfoDynamicCarouselDetailItemView *_iconStatusView;
    WCFinderJumpInfoDynamicCarouselTitleView *_titleView;
    WCFinderJumpInfoDynamicCarouselDetailView *_detailView;
    MMUILabel *_bottomLabel;
    MMUIButton *_actionButton;
    unsigned long long _style;
    MMTimer *_timer;
}

+ (id)createActionButton;
+ (id)createBottomLabel;
+ (id)createDetailView;
+ (id)createTitleView;
+ (id)createIconImageView;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isStyleInitialized; // @synthesize isStyleInitialized=_isStyleInitialized;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) WCFinderJumpInfoDynamicCarouselDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) WCFinderJumpInfoDynamicCarouselTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCFinderJumpInfoDynamicCarouselDetailItemView *iconStatusView; // @synthesize iconStatusView=_iconStatusView;
@property(retain, nonatomic) CAGradientLayer *iconStatusGradientLayer; // @synthesize iconStatusGradientLayer=_iconStatusGradientLayer;
@property(retain, nonatomic) UIView *iconStatusContainerView; // @synthesize iconStatusContainerView=_iconStatusContainerView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) unsigned long long currentPhase; // @synthesize currentPhase=_currentPhase;
@property(nonatomic) __weak id <WCFinderJumpInfoDynamicCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderJumpInfoDynamicCarouselViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)jumpInfoActionAfterAnimationToPhase:(unsigned long long)arg1;
- (void)jumpInfoAnimatedActionBeforeAnimation:(CDUnknownBlockType)arg1;
- (void)changeToPhase:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)expandJumpInfoViewForCompletePlayIfNeeded;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (int)showPosition;
- (id)jumpInfo;
- (void)dynamicCarouselViewModelDidUpdateCarouselContent:(id)arg1;
- (void)dynamicCarouselViewModelDidSwitchCarouselContent:(id)arg1;
- (void)dynamicCarouselViewModelDidReloadViewProperties:(id)arg1 shouldReloadSubviews:(_Bool)arg2;
- (void)expandCard;
- (void)showCard;
- (void)detailViewContentDidChange;
- (void)titleViewContentDidChange;
- (void)layoutSubviews;
- (void)BigCard_layoutAndFitSize:(_Bool)arg1;
- (void)SmallCard_layoutAndFitSize:(_Bool)arg1;
- (void)layoutAndFitSize:(_Bool)arg1;
- (void)showSubviewsAnimatedAfterExpandingCard:(CDUnknownBlockType)arg1;
- (void)showSubviewsAfterExpandingCard;
- (void)hideSubviewsAnimatedBeforeExpandingCard:(CDUnknownBlockType)arg1;
- (void)hideSubviewsBeforeExpandingCard;
- (void)updateCarouselDetailView;
- (void)switchCarouselDetailViewWithAnimation:(long long)arg1;
- (void)updateSubviews:(_Bool)arg1;
- (void)setStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)didClickActionButton:(id)arg1;
- (void)didClickCard:(id)arg1;
- (void)loadSubviews;
- (void)loadCardGestures;
@property(readonly, nonatomic) FinderJumpInfo_Style *jumpInfoStyle;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

