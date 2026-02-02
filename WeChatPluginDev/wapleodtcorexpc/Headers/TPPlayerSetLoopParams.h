//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerSetLoopParams : NSObject
{
    _Bool _loop;
    long long _playerId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(long long)arg1 loop:(_Bool)arg2;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

