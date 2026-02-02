//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EcsPayResult : NSObject
{
    NSString *_payPackage;
    NSString *_result;
    NSString *_errMsg;
    NSString *_miniShopAppId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPayPackage:(id)arg1 result:(id)arg2 errMsg:(id)arg3 miniShopAppId:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *miniShopAppId; // @synthesize miniShopAppId=_miniShopAppId;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *payPackage; // @synthesize payPackage=_payPackage;
- (id)toList;

@end

