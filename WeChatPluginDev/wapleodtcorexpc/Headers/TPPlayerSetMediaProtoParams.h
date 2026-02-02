//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData;

@interface TPPlayerSetMediaProtoParams : NSObject
{
    long long _playerId;
    long long _mediaType;
    FlutterStandardTypedData *_mediaProto;
    long long _startPlayPosition;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(long long)arg1 mediaType:(long long)arg2 mediaProto:(id)arg3 startPlayPosition:(long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) long long startPlayPosition; // @synthesize startPlayPosition=_startPlayPosition;
@property(retain, nonatomic) FlutterStandardTypedData *mediaProto; // @synthesize mediaProto=_mediaProto;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

