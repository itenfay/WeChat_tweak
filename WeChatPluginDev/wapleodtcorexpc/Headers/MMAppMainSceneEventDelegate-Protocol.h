//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UNNotificationResponse;

@protocol MMAppMainSceneEventDelegate <NSObject>
- (void)onMainSceneReceiveUserNotificationResponse:(UNNotificationResponse *)arg1;
- (void)onMainSceneWillConnected:(_Bool)arg1;
@end

