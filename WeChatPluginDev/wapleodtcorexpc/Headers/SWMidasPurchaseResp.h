//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, SWMidasPurchaseContent, SWMidasPurchaseOption, SWMidasUser;

@interface SWMidasPurchaseResp : NSObject
{
    MISSING_TYPE *user;
    MISSING_TYPE *content;
    MISSING_TYPE *resultMsg;
    MISSING_TYPE *appleProductID;
    MISSING_TYPE *billID;
    MISSING_TYPE *portalSerialID;
    MISSING_TYPE *purchaseOption;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) SWMidasPurchaseOption *purchaseOption; // @synthesize purchaseOption;
@property(nonatomic, readonly) NSString *portalSerialID;
@property(nonatomic, readonly) NSString *billID;
@property(nonatomic, readonly) NSString *appleProductID;
@property(nonatomic, readonly) NSString *resultMsg;
@property(nonatomic, readonly) SWMidasPurchaseContent *content; // @synthesize content;
@property(nonatomic, readonly) SWMidasUser *user; // @synthesize user;

@end

