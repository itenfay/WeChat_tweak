//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLivePromoteDisplayLeaseRequest, NSString;
@protocol MMFinderLiveOperationViewDelegate, MMFinderLivePromoteDisplayLeasePromotionDelegate, MMFinderLivePromoteDisplayLeaseTokenDelegate;

@interface MMFinderLivePromoteDisplayLeaseToken : NSObject
{
    _Bool _invalidated;
    NSString *_leaseId;
    double _leaseBeginUnixEpochTime;
    id <MMFinderLiveOperationViewDelegate> _operationDelegate;
    id <MMFinderLivePromoteDisplayLeaseTokenDelegate> _delegate;
    MMFinderLivePromoteDisplayLeaseRequest *_request;
    id <MMFinderLivePromoteDisplayLeasePromotionDelegate> _promotionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLivePromoteDisplayLeasePromotionDelegate> promotionDelegate; // @synthesize promotionDelegate=_promotionDelegate;
@property(retain, nonatomic) MMFinderLivePromoteDisplayLeaseRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <MMFinderLivePromoteDisplayLeaseTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMFinderLiveOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) double leaseBeginUnixEpochTime; // @synthesize leaseBeginUnixEpochTime=_leaseBeginUnixEpochTime;
@property(retain, nonatomic) NSString *leaseId; // @synthesize leaseId=_leaseId;
- (void)leaseTimeout;
- (void)notifyInvalidationForReason:(unsigned long long)arg1;
- (void)notifyViewDetaching;
- (void)notifyViewAttached;
- (void)relinquishLease;
- (void)setNeedsLayout;
@property(readonly, nonatomic) id userInfo;
@property(readonly, nonatomic) _Bool userDismissable;
@property(readonly, nonatomic) _Bool relinquishUponUpcomingPromotion;
@property(readonly, nonatomic) _Bool dismissCurrentPromotion;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) double leaseDuration;
- (void)dealloc;
- (id)initWithId:(id)arg1 request:(id)arg2;

@end

