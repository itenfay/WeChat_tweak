//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerDetailInfo : NSObject
{
    long long _type;
    long long _timeSince1970Ms;
    long long _elapsedTimeSinceBootMs;
}

@property(nonatomic) long long elapsedTimeSinceBootMs; // @synthesize elapsedTimeSinceBootMs=_elapsedTimeSinceBootMs;
@property(nonatomic) long long timeSince1970Ms; // @synthesize timeSince1970Ms=_timeSince1970Ms;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 utcTimeMs:(long long)arg2 elapsedTimeSinceBootMs:(long long)arg3;
- (id)init;

@end

