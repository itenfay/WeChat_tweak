//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback, NSDictionary, NSString;

@protocol MMKJSEvent <NSObject>
- (void)kindaCloseWebViewImpl:(_Bool)arg1 completion:(MMVoidCallback *)arg2;
- (void)kindaEndWithResult:(NSString *)arg1 extraInfo:(NSDictionary *)arg2;
- (long long)kindaGetType;
@end

