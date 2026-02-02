//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IMBJsApiDelegate <NSObject>

@optional
- (void)onExtJsApiAdded:(id)arg1 name:(NSString *)arg2 isSync:(_Bool)arg3;
- (void)invoke:(NSString *)arg1 param:(NSDictionary *)arg2 callbackId:(unsigned long long)arg3 privateArgs:(NSDictionary *)arg4;
@end

