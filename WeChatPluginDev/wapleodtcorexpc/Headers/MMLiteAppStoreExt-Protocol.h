//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;

@protocol MMLiteAppStoreExt <NSObject>
- (void)onStoreSetData:(NSString *)arg1 changes:(NSDictionary *)arg2;
- (void)onStoreSendResult:(NSString *)arg1 callbackId:(int)arg2 resultType:(NSString *)arg3 result:(NSObject *)arg4;
@end

