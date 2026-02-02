//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSObject;
@protocol FlutterApplicationLifeCycleDelegate;

@protocol FlutterAppLifeCycleProvider <UNUserNotificationCenterDelegate>
- (void)addApplicationLifeCycleDelegate:(NSObject<FlutterApplicationLifeCycleDelegate> *)arg1;
@end

