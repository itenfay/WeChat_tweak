//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMKJumpRemindInfo, MMVoidBoolStringCallback;

@protocol MMKindaJumpRemindManager <NSObject>
- (void)onDestroyJumpRemindManager;
- (void)jumpRemindImpl:(MMKJumpRemindInfo *)arg1 clientScene:(int)arg2 payScene:(int)arg3 interruptCb:(MMVoidBoolStringCallback *)arg4 continueCb:(MMVoidBoolStringCallback *)arg5;
@end

