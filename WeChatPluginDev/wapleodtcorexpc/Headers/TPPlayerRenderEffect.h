//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TPPlayerRenderEffect : NSObject
{
    long long _playerId;
    long long _effectId;
    long long _effectType;
    long long _startTimeMs;
    long long _endTimeMs;
    NSDictionary *_params;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(long long)arg1 effectId:(long long)arg2 effectType:(long long)arg3 startTimeMs:(long long)arg4 endTimeMs:(long long)arg5 params:(id)arg6;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) long long endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(nonatomic) long long effectType; // @synthesize effectType=_effectType;
@property(nonatomic) long long effectId; // @synthesize effectId=_effectId;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

