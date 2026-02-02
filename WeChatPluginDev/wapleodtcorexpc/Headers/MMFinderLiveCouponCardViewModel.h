//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveCouponCardView, MMFinderLiveCouponItem, MMFinderLiveTaskId, NSString;
@protocol MMFinderLiveCouponCardViewModelDelegate;

@interface MMFinderLiveCouponCardViewModel : NSObject
{
    _Bool _audienceReceived;
    MMFinderLiveCouponCardView *_cardView;
    MMFinderLiveCouponItem *_coupon;
    MMFinderLiveTaskId *_taskID;
    id <MMFinderLiveCouponCardViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audienceReceived; // @synthesize audienceReceived=_audienceReceived;
@property(nonatomic) __weak id <MMFinderLiveCouponCardViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) MMFinderLiveCouponItem *coupon; // @synthesize coupon=_coupon;
@property(nonatomic) __weak MMFinderLiveCouponCardView *cardView; // @synthesize cardView=_cardView;
- (void)onCouponDidUpdate:(id)arg1;
- (void)onLocalSatisfiedForAudience;
- (void)onFinderContactFollowStatusRealUpdate:(id)arg1;
- (void)onPostFinderLiveMessageToPublicSuccessForTaskId:(id)arg1 content:(id)arg2;
- (void)onPostFinderLiveLike:(id)arg1 taskId:(id)arg2 postResult:(id)arg3;
@property(readonly, nonatomic) _Bool isNormalAudience;
- (id)initWithInfo:(id)arg1 taskID:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

