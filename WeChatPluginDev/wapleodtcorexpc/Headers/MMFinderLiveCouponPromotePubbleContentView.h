//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderShopCouponInfo, MMFinderLiveCouponItem, MMFinderLiveCouponView, NSString;

@interface MMFinderLiveCouponPromotePubbleContentView
{
    _Bool _willDismissing;
    MMFinderLiveCouponItem *_couponItem;
    MMFinderLiveCouponView *_couponView;
    FinderShopCouponInfo *_couponInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool willDismissing; // @synthesize willDismissing=_willDismissing;
@property(retain, nonatomic) FinderShopCouponInfo *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(retain, nonatomic) MMFinderLiveCouponView *couponView; // @synthesize couponView=_couponView;
@property(retain, nonatomic) MMFinderLiveCouponItem *couponItem; // @synthesize couponItem=_couponItem;
- (void)stopLoading;
- (void)startLoading;
- (void)onCouponAction:(id)arg1 view:(id)arg2;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (void)layoutCouponView;
- (void)handleSingleTapGesture:(id)arg1;
- (void)onShowed;
- (void)onClosed;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (id)currentPromoteItem;
- (void)onCouponDidUpdate:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

