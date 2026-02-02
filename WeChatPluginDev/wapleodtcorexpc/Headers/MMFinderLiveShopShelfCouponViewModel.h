//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveCouponItem, MMFinderLiveTaskId, NSString;

@interface MMFinderLiveShopShelfCouponViewModel : NSObject
{
    MMFinderLiveTaskId *_taskID;
    MMFinderLiveCouponItem *_coupon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveCouponItem *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) _Bool needActionButton;
- (id)initWithTaskID:(id)arg1 coupon:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

