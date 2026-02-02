//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback;

@protocol MMKindaPasswordManager <NSObject>
- (void)startResetPasswordImpl:(MMVoidCallback *)arg1 cancelCallback:(MMVoidCallback *)arg2 isDomesticUser:(_Bool)arg3;
@end

