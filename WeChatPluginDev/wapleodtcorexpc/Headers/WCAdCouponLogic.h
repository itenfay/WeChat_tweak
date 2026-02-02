//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdConfirmHalfScreenBaseView, WCAdCouponInfo, WCAdvertiseInfo, WCCanvasDynamicDataLoader;
@protocol WCAdCouponLogicDelegate;

@interface WCAdCouponLogic
{
    id <WCAdCouponLogicDelegate> _delegate;
    WCAdCouponInfo *_adCouponInfo;
    WCAdConfirmHalfScreenBaseView *_halfScreenView;
    WCCanvasDynamicDataLoader *_dataLoader;
    WCAdvertiseInfo *_adData;
    NSString *_snsId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) WCAdConfirmHalfScreenBaseView *halfScreenView; // @synthesize halfScreenView=_halfScreenView;
@property(retain, nonatomic) WCAdCouponInfo *adCouponInfo; // @synthesize adCouponInfo=_adCouponInfo;
@property(nonatomic) __weak id <WCAdCouponLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGetCouponWithResult:(long long)arg1 errMsg:(id)arg2;
- (id)fetchMMViewController;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)arg1;
- (void)start;
- (id)initWithCouponInfo:(id)arg1 adAdData:(id)arg2 andSnsId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

