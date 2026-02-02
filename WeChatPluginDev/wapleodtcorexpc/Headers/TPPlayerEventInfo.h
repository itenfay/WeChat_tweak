//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerEventInfo : NSObject
{
    long long _eventId;
    long long _eventTimeSinceBootMs;
    long long _eventTimeSince1970Ms;
}

@property(nonatomic) long long eventTimeSince1970Ms; // @synthesize eventTimeSince1970Ms=_eventTimeSince1970Ms;
@property(nonatomic) long long eventTimeSinceBootMs; // @synthesize eventTimeSinceBootMs=_eventTimeSinceBootMs;
@property(nonatomic) long long eventId; // @synthesize eventId=_eventId;
- (id)initWithEventId:(long long)arg1;
- (id)init;

@end

