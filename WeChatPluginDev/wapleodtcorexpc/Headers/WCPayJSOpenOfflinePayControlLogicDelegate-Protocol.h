//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCPayJSOpenOfflinePayControlLogicDelegate <NSObject>

@optional
- (void)returnToOfflinePayView;
- (void)failToStartOpenOfflinePayLogic;
- (void)succToOpenOfflinePayLogic;
@end

