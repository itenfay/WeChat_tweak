//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPLoopbackParams : NSObject
{
    _Bool _isLoopback;
    long long _startPositionMs;
    long long _endPositionMs;
}

+ (id)paramsWithIsLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMs:(long long)arg3;
@property(nonatomic) long long endPositionMs; // @synthesize endPositionMs=_endPositionMs;
@property(nonatomic) long long startPositionMs; // @synthesize startPositionMs=_startPositionMs;
@property(nonatomic) _Bool isLoopback; // @synthesize isLoopback=_isLoopback;

@end

