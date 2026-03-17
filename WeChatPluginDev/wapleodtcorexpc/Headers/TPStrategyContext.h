//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPStrategyContext : NSObject
{
    long long _playerType;
    long long _errorType;
}

+ (id)contextWithPlayerType:(long long)arg1 errorType:(long long)arg2;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;

@end

