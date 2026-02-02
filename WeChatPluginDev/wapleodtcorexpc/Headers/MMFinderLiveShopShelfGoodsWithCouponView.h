//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveCouponItem, MMFinderLiveProductsTableView, MMFinderLiveShopShelfCouponsSimpleHeaderView, MMFinderLiveTaskId, NSString;
@protocol MMFinderLiveShopShelfGoodsWithCouponViewDelegate;

@interface MMFinderLiveShopShelfGoodsWithCouponView : UIView
{
    MMFinderLiveTaskId *_taskID;
    MMFinderLiveProductsTableView *_tableView;
    id <MMFinderLiveShopShelfGoodsWithCouponViewDelegate> _delegate;
    MMFinderLiveShopShelfCouponsSimpleHeaderView *_headerView;
    MMFinderLiveCouponItem *_coupon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveCouponItem *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) MMFinderLiveShopShelfCouponsSimpleHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <MMFinderLiveShopShelfGoodsWithCouponViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveProductsTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
- (void)setShopWindowItems:(id)arg1 withCoupon:(id)arg2;
@property(nonatomic) long long backMode;
- (void)onHeaderViewBackButtonClicked;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 taskID:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

