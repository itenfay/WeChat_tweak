//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSSet, NSString;

@interface SWMidasGetSubscriptionProductStatusResp : NSObject
{
    MISSING_TYPE *inSubscribedProductIDs;
    MISSING_TYPE *notPurchasedProductIDs;
    MISSING_TYPE *recentExpiredOrRefundedProductIDs;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSArray *recentExpiredOrRefundedProductIDs;
@property(nonatomic, readonly) NSSet *notPurchasedProductIDs;
@property(nonatomic, readonly) NSSet *inSubscribedProductIDs;

@end

