//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@protocol IMBNetwork <NSObject>
- (_Bool)abortTask:(NSString *)arg1 taskID:(NSString *)arg2 funcName:(NSString *)arg3 error:(id *)arg4;
- (void)doNetWork:(NSString *)arg1 taskID:(NSString *)arg2 funcName:(NSString *)arg3 url:(NSString *)arg4 httpHeaders:(NSDictionary *)arg5 context:(NSMutableDictionary *)arg6 completionHandler:(void (^)(NSDictionary *, MBErrorInfo *))arg7 headerHandler:(void (^)(NSDictionary *))arg8 progressHandler:(void (^)(float, unsigned long long, unsigned long long))arg9;
- (NSString *)genTaskId:(NSString *)arg1;
@end

