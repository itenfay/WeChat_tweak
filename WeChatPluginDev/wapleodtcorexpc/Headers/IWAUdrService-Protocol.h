//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol IWAUdrService <NSObject>

@optional
+ (NSString *)getAbsolutePath:(NSString *)arg1;
+ (void)check:(NSString *)arg1 nameList:(NSArray *)arg2 type:(int)arg3 qos:(int)arg4 paramMap:(NSDictionary *)arg5;
+ (NSString *)getResourcePathWithProjectId:(NSString *)arg1 name:(NSString *)arg2;
@end

