//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AdTimerHelper : NSObject
{
    unsigned long long _activeTime;
}

@property(nonatomic) unsigned long long activeTime; // @synthesize activeTime=_activeTime;
- (unsigned long long)endAndReturnTimeInMs;
- (unsigned long long)stop;
- (void)start;
- (id)init;

@end

