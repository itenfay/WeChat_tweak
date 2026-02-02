//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EcsPayInfo : NSObject
{
    NSString *_payPackage;
    NSString *_miniShopAppId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPayPackage:(id)arg1 miniShopAppId:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *miniShopAppId; // @synthesize miniShopAppId=_miniShopAppId;
@property(copy, nonatomic) NSString *payPackage; // @synthesize payPackage=_payPackage;
- (id)toList;

@end

