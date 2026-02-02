//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShopShelfCoordinator, MMFinderLiveShopShelfMainPageHeaderCouponsAdapter, MMFinderLiveShopShelfMainPageHeaderVIPAdapter, NSArray;

@interface MMFinderLiveShopShelfMainTableHeaderView : UIView
{
    MMFinderLiveShopShelfCoordinator *_coordinator;
    UIView *_vipView;
    UIView *_couponsView;
    MMFinderLiveShopShelfMainPageHeaderVIPAdapter *_vipAdapter;
    MMFinderLiveShopShelfMainPageHeaderCouponsAdapter *_couponsAdapter;
    struct UIEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveShopShelfMainPageHeaderCouponsAdapter *couponsAdapter; // @synthesize couponsAdapter=_couponsAdapter;
@property(retain, nonatomic) MMFinderLiveShopShelfMainPageHeaderVIPAdapter *vipAdapter; // @synthesize vipAdapter=_vipAdapter;
@property(retain, nonatomic) UIView *couponsView; // @synthesize couponsView=_couponsView;
@property(retain, nonatomic) UIView *vipView; // @synthesize vipView=_vipView;
@property(nonatomic) __weak MMFinderLiveShopShelfCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)reportCouponsViewExpose;
- (void)reportExpose;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSArray *itemViews;
- (void)updateWithCoordinator;
- (id)initWithFrame:(struct CGRect)arg1;

@end

