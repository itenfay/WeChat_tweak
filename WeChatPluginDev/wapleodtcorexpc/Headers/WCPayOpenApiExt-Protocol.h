//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WCPayOpenApiParamter;

@protocol WCPayOpenApiExt <NSObject>

@optional
- (void)OnWCPayOpenApiWapUrl:(NSString *)arg1 BundleID:(NSString *)arg2;
- (void)OnWCPayJointPayOpenApi:(NSDictionary *)arg1 openApiParam:(WCPayOpenApiParamter *)arg2;
- (void)OnWCPayOpenApi:(NSDictionary *)arg1 openApiParam:(WCPayOpenApiParamter *)arg2;
@end

