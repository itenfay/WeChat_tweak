//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerSeekParams : NSObject
{
    _Bool _isManualSeek;
    long long _playerId;
    long long _timeMs;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(long long)arg1 timeMs:(long long)arg2 isManualSeek:(_Bool)arg3;
@property(nonatomic) _Bool isManualSeek; // @synthesize isManualSeek=_isManualSeek;
@property(nonatomic) long long timeMs; // @synthesize timeMs=_timeMs;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

