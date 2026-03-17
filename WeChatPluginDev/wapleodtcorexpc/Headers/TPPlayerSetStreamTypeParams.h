//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerSetStreamTypeParams : NSObject
{
    long long _playerId;
    long long _streamType;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(long long)arg1 streamType:(long long)arg2;
@property(nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

