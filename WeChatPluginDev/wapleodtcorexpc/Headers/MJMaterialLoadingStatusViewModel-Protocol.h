//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MJMaterialLoadingStatusViewModel <NSObject>
- (void)mj_loadMaterialWithID:(NSString *)arg1 progressHandler:(void (^)(float))arg2 completionHandler:(void (^)(NSError *))arg3;
- (float)mj_loadingProgressWithID:(NSString *)arg1;
- (unsigned long long)mj_loadingStatusWithID:(NSString *)arg1;
@end

