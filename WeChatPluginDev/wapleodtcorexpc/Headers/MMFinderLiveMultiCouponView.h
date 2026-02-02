//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveCouponContainerView, MMFinderLiveCouponItem, MMWebImageView, NSString, UILabel;
@protocol MMFinderLiveCouponViewDelegate;

@interface MMFinderLiveMultiCouponView : UIView
{
    _Bool _actionButtonHidden;
    UILabel *_valueLabel;
    UILabel *_nameLabel;
    UILabel *_limitLabel;
    id <MMFinderLiveCouponViewDelegate> _delegate;
    MMFinderLiveCouponItem *_couponItem;
    MMFinderLiveCouponContainerView *_backgroundView;
    MMWebImageView *_tailBackgroundImageView;
}

+ (double)preferHeightForCoupon:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *tailBackgroundImageView; // @synthesize tailBackgroundImageView=_tailBackgroundImageView;
@property(retain, nonatomic) MMFinderLiveCouponContainerView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMFinderLiveCouponItem *couponItem; // @synthesize couponItem=_couponItem;
@property(nonatomic) __weak id <MMFinderLiveCouponViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool actionButtonHidden; // @synthesize actionButtonHidden=_actionButtonHidden;
@property(retain, nonatomic) UILabel *limitLabel; // @synthesize limitLabel=_limitLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void)onLoadImageOK:(id)arg1;
- (void)fillWithCouponItem:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutMain;
- (void)layoutHead;
- (void)layoutSubviews;
- (void)setContainerColor;
- (id)normalStrokeColor;
- (id)normalFillColor;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

