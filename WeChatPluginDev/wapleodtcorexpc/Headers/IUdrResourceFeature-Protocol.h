//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, WXUDRResource;

@protocol IUdrResourceFeature <NSObject>
- (NSString *)decodeVirtualPath:(NSString *)arg1;
- (NSString *)getAbsolutePath:(NSString *)arg1;
- (NSString *)getPostDir:(WXUDRResource *)arg1;
- (void)clearAll;
- (void)registerProject:(NSString *)arg1 className:(NSString *)arg2;
- (void)specifiedCheck:(NSString *)arg1 name:(NSString *)arg2 version:(unsigned int)arg3 extInfo:(NSString *)arg4;
- (void)batchCheck:(NSArray *)arg1 nameMap:(NSDictionary *)arg2 qos:(int)arg3 paramMap:(NSDictionary *)arg4;
- (void)check:(NSString *)arg1 nameList:(NSArray *)arg2 qos:(int)arg3 paramMap:(NSDictionary *)arg4;
- (NSArray *)getResourceList:(NSString *)arg1;
- (WXUDRResource *)getResource:(NSString *)arg1 name:(NSString *)arg2;
@end

