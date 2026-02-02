//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPLiveReportParamRecord : NSObject
{
    long long _prepareEndSinceBootTimeMs;
    long long _playerFirstStartSinceBootTimeMs;
    long long _playerStartSinceBootTimeMs;
    long long _retentionDurationMs;
    long long _bufferingStartSinceBootTimeMs;
    long long _periodBufferingTotalDurationMs;
    long long _periodBufferingCount;
    long long _periodPlayedDurationMs;
}

@property(nonatomic) long long periodPlayedDurationMs; // @synthesize periodPlayedDurationMs=_periodPlayedDurationMs;
@property(nonatomic) long long periodBufferingCount; // @synthesize periodBufferingCount=_periodBufferingCount;
@property(nonatomic) long long periodBufferingTotalDurationMs; // @synthesize periodBufferingTotalDurationMs=_periodBufferingTotalDurationMs;
@property(nonatomic) long long bufferingStartSinceBootTimeMs; // @synthesize bufferingStartSinceBootTimeMs=_bufferingStartSinceBootTimeMs;
@property(nonatomic) long long retentionDurationMs; // @synthesize retentionDurationMs=_retentionDurationMs;
@property(nonatomic) long long playerStartSinceBootTimeMs; // @synthesize playerStartSinceBootTimeMs=_playerStartSinceBootTimeMs;
@property(nonatomic) long long playerFirstStartSinceBootTimeMs; // @synthesize playerFirstStartSinceBootTimeMs=_playerFirstStartSinceBootTimeMs;
@property(nonatomic) long long prepareEndSinceBootTimeMs; // @synthesize prepareEndSinceBootTimeMs=_prepareEndSinceBootTimeMs;

@end

