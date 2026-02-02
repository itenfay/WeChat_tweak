//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TPPlayerPrepareEndEventInfo
{
    long long _durationMs;
    long long _playerType;
}

@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
- (id)init;

@end

