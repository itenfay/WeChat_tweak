//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@protocol YYModel <NSObject>

@optional
+ (NSDictionary *)xmlTagCustomToXMLProcesslistForConfigTag:(NSString *)arg1;
+ (NSDictionary *)xmlTagCustomFromXMLProcesslistForConfigTag:(NSString *)arg1;
+ (NSDictionary *)xmlTagPreProcesslistForConfigTag:(NSString *)arg1;
+ (NSArray *)xmlAttributePropertylistForConfigTag:(NSString *)arg1;
+ (NSArray *)modelPropertyWhitelistForConfigTag:(NSString *)arg1;
+ (NSArray *)modelPropertyBlacklistForConfigTag:(NSString *)arg1;
+ (Class)modelCustomClassForDictionary:(NSDictionary *)arg1 forConfigTag:(NSString *)arg2;
+ (NSDictionary *)modelContainerPropertyMappingForConfigTag:(NSString *)arg1;
+ (NSDictionary *)modelCustomPropertyMapperForConfigTag:(NSString *)arg1;
- (_Bool)modelCustomTransformToDictionary:(NSMutableDictionary *)arg1 forConfigTag:(NSString *)arg2;
- (_Bool)modelCustomTransformFromDictionary:(NSDictionary *)arg1 forConfigTag:(NSString *)arg2;
- (NSDictionary *)modelCustomWillTransformFromDictionary:(NSDictionary *)arg1 forConfigTag:(NSString *)arg2;
@end

