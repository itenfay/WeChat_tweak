//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLivePromoteDisplayLeaseToken, MMFinderLivePromoteDisplayLeaseView, NSString, UIView;
@protocol MMFinderLiveOperationViewDelegate, MMFinderLivePromoteDisplayLeasePromotionDelegate;

@interface MMFinderLivePromoteDisplayLease : NSObject
{
    MMFinderLivePromoteDisplayLeaseToken *_token;
    NSString *_leaseId;
    MMFinderLivePromoteDisplayLeaseView *_leaseView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePromoteDisplayLeaseView *leaseView; // @synthesize leaseView=_leaseView;
@property(retain, nonatomic) NSString *leaseId; // @synthesize leaseId=_leaseId;
@property(retain, nonatomic) MMFinderLivePromoteDisplayLeaseToken *token; // @synthesize token=_token;
- (id)copyWithWeakToken;
@property(nonatomic) __weak id <MMFinderLivePromoteDisplayLeasePromotionDelegate> promotionDelegate;
@property(nonatomic) __weak id <MMFinderLiveOperationViewDelegate> operationDelegate;
@property(readonly, nonatomic) UIView *leasedDisplayView;
- (id)initWithRequest:(id)arg1;

@end

