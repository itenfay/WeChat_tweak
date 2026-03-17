//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback;

@protocol MMKRealNameService <NSObject>
- (void)checkRealnameLicenseImpl:(int)arg1 acceptCallback:(MMVoidCallback *)arg2 denyCallback:(MMVoidCallback *)arg3 requestingCallback:(MMVoidCallback *)arg4 responsedCallback:(MMVoidCallback *)arg5;
@end

