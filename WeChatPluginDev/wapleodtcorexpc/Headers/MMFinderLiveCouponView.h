//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCouponItem, MMUIButton, NSString, UILabel, UIView;
@protocol MMFinderLiveCouponViewDelegate;

@interface MMFinderLiveCouponView
{
    _Bool _actionButtonHidden;
    _Bool _isAnchor;
    id <MMFinderLiveCouponViewDelegate> _delegate;
    MMFinderLiveCouponItem *_couponItem;
    UIView *_leftContainer;
    UILabel *_discountLabel;
    UILabel *_discountDescLabel;
    UIView *_centerContainer;
    UILabel *_titleLabel;
    UILabel *_remainLabel;
    UILabel *_descLabel;
    MMUIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *remainLabel; // @synthesize remainLabel=_remainLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *centerContainer; // @synthesize centerContainer=_centerContainer;
@property(retain, nonatomic) UILabel *discountDescLabel; // @synthesize discountDescLabel=_discountDescLabel;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UIView *leftContainer; // @synthesize leftContainer=_leftContainer;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) MMFinderLiveCouponItem *couponItem; // @synthesize couponItem=_couponItem;
@property(nonatomic) _Bool actionButtonHidden; // @synthesize actionButtonHidden=_actionButtonHidden;
@property(nonatomic) __weak id <MMFinderLiveCouponViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onActionButtonClicked;
- (void)updateActionButton:(_Bool)arg1 active:(_Bool)arg2 title:(id)arg3;
- (void)layoutRightContent;
- (void)layoutCenterContent;
- (void)layoutLeftContent;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupActionButton:(id)arg1;
- (void)setupCenterLabel:(id)arg1;
- (void)setupDiscountLabel:(id)arg1;
- (void)fillWithCouponItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isAnchor:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

