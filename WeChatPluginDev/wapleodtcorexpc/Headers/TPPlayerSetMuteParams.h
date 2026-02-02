//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerSetMuteParams : NSObject
{
    _Bool _mute;
    long long _playerId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(long long)arg1 mute:(_Bool)arg2;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

