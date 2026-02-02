//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC11SwiftyMidas27MiddlewareReprovideDelegate : _TtCs12_SwiftObject
{
    MISSING_TYPE *callbacks;
    MISSING_TYPE *logPrefix;
    MISSING_TYPE *outerDelegate;
}

- (void)productDidReprovideWithResultWithProductID:(id)arg1 reprovideResp:(id)arg2 isSuccess:(_Bool)arg3 errorMsg:(id)arg4 isFromRestored:(_Bool)arg5;
- (void)productWillReprovideWithProductID:(id)arg1;
- (id)userForProductReprovidingWithProductIDs:(id)arg1;
- (_Bool)productShouldReprovideAutomaticallyWithProductID:(id)arg1;
- (_Bool)productShouldReprovideWithProductID:(id)arg1;

@end

