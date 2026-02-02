//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSContext, NSArray, NSDictionary, NSString;
@protocol IMBFileSystem;

@protocol IMBPkgManagement <NSObject>
- (id <IMBFileSystem>)provideFileSystem;
- (void)provideMainScript:(void (^)(NSString *))arg1;

@optional
- (void)provideMainScriptWithJSContext:(JSContext *)arg1 callback:(void (^)(long long))arg2;
- (void)batchEvaluateScript:(NSArray *)arg1 inContext:(JSContext *)arg2 contextInfoMap:(NSDictionary *)arg3;
- (NSString *)provideScript:(NSString *)arg1;
@end

