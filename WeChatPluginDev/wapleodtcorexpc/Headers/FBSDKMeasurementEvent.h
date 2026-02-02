//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FBSDKMeasurementEvent : NSObject
{
    NSString *_name;
    NSDictionary *_args;
}

+ (void)postNotificationForEventName:(id)arg1 args:(id)arg2;
- (void).cxx_destruct;
- (id)initEventWithName:(id)arg1 args:(id)arg2;
- (void)postNotification;

@end

