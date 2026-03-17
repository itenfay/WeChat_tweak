//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerSetPlayRangeParams : NSObject
{
    long long _playerId;
    long long _startTimeMs;
    long long _endTimeMs;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(long long)arg1 startTimeMs:(long long)arg2 endTimeMs:(long long)arg3;
@property(nonatomic) long long endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

