//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMNotificationSetting, MonoServiceMsg;

@protocol MonoServiceMsgMgrExtension <NSObject>

@optional
- (void)monoServiceMsgMgrWillHandleMsg:(MonoServiceMsg *)arg1 withSetting:(MMNotificationSetting *)arg2 shouldShow:(_Bool)arg3;
@end

