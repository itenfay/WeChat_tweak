//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, NSString;

@interface SWMidasQueryAppleProductResp : NSObject
{
    MISSING_TYPE *productInfos;
    MISSING_TYPE *invalidProductIDs;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSSet *invalidProductIDs;
@property(nonatomic, readonly) NSSet *productInfos;

@end

