//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMAssetCompositeTaskProtocol;

@protocol MMAssetCompositorProtocol <NSObject>
+ (void)startWithTask:(id <MMAssetCompositeTaskProtocol>)arg1 resultBlock:(void (^)(id <MMAssetCompositeTaskProtocol>, NSError *, MMAssetCompositeSession *))arg2;
+ (id)new;
- (id)init;
@end

