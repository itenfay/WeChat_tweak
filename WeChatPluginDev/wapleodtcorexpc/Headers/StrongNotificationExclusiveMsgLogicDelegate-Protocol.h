//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol StrongNotificationExclusiveMsgLogicDelegate <NSObject>

@optional
- (void)clearAllStrongNotificationItemAndMessageHiddenWindow;
- (void)closeStrongNotificationWithItemWithForcePushId:(NSString *)arg1;
- (NSArray *)getExclusiveMsgQueue;
@end

