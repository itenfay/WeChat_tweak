//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMOrderCenterOrderDataProvider <NSObject>
- (void)getReplacementOrdersAtPositionalIndex:(unsigned long long)arg1 withAttachedIndex:(NSString *)arg2 successBlock:(void (^)(NSArray *, _Bool))arg3 failBlock:(void (^)(int, NSString *))arg4;
- (void)getOrdersWithSuccessBlock:(void (^)(NSArray *, _Bool))arg1 failBlock:(void (^)(int, NSString *))arg2 forceRefresh:(_Bool)arg3;

@optional
- (NSString *)noDataPrompt;
@end

