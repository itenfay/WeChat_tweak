//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPTimeUtil : NSObject
{
}

+ (long long)getCurrentTimeSince1970Ms;
+ (long long)getElapsedRealtimeSinceBootMs;
+ (long long)getElapsedRealtimeSinceBootUsUsingSysctl;
+ (long long)getElapsedRealtimeSinceBootUsUsingClockGettime;

@end

