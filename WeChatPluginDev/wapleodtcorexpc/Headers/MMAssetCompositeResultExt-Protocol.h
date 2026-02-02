//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetCompositeSession, NSError, NSString;

@protocol MMAssetCompositeResultExt <NSObject>

@optional
- (void)compositeTaskDidBeCancelled:(NSString *)arg1;
- (void)compositeTaskDidStop:(NSString *)arg1 withResult:(NSError *)arg2 compositeSession:(MMAssetCompositeSession *)arg3;
- (void)compositeTaskDidStart:(NSString *)arg1;
@end

