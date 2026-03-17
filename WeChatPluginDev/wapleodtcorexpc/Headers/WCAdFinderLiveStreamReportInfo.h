//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdFinderLiveStreamReportInfo : NSObject
{
    _Bool _joinLiveFlag;
    unsigned int _joinLiveStartTimestamp;
    unsigned int _joinLiveEndTimestamp;
    long long _playStartTimestampMs;
    long long _totalPlayTimeMs;
}

@property(nonatomic) long long totalPlayTimeMs; // @synthesize totalPlayTimeMs=_totalPlayTimeMs;
@property(nonatomic) long long playStartTimestampMs; // @synthesize playStartTimestampMs=_playStartTimestampMs;
@property(nonatomic) unsigned int joinLiveEndTimestamp; // @synthesize joinLiveEndTimestamp=_joinLiveEndTimestamp;
@property(nonatomic) unsigned int joinLiveStartTimestamp; // @synthesize joinLiveStartTimestamp=_joinLiveStartTimestamp;
@property(nonatomic) _Bool joinLiveFlag; // @synthesize joinLiveFlag=_joinLiveFlag;
- (void)processBeforeReport;
- (long long)fetchTotalPlayTimeMs;
- (void)recordPlayEnd;
- (void)recordPlayStart;

@end

