//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMultiCouponView;
@protocol MMFinderLiveCouponViewDelegate;

@interface MMFinderLiveCouponCell
{
    MMFinderLiveMultiCouponView *_couponView;
    long long _style;
    struct UIEdgeInsets _padding;
}

+ (Class)contentClassWithStyle:(long long)arg1;
+ (double)getCellHeightWithCoupon:(id)arg1 style:(long long)arg2 padding:(struct UIEdgeInsets)arg3 width:(double)arg4;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) MMFinderLiveMultiCouponView *couponView; // @synthesize couponView=_couponView;
- (void)fillWithViewModel:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <MMFinderLiveCouponViewDelegate> delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

