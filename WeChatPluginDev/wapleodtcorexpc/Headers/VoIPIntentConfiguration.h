//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoIPIntentConfiguration : NSObject
{
}

+ (void)receiveNotificationFromAPNS;
+ (_Bool)isReceivedNotificationFromAPNS;
+ (_Bool)isEnable;
+ (void)setup;
+ (long long)infosCacheLimitCount;

@end

