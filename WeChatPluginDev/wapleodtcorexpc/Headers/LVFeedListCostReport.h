//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LVFeedListCostReport : NSObject
{
    _Bool _isFromPreload;
    _Bool _isShowBeforeEnter;
    _Bool _watchLaterCountWhenShow;
    _Bool _feedCountWhenShow;
    NSString *_sessionId;
    unsigned long long _enterTime;
    unsigned long long _timeCost;
    unsigned long long _exitTimeCost;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool feedCountWhenShow; // @synthesize feedCountWhenShow=_feedCountWhenShow;
@property(nonatomic) _Bool watchLaterCountWhenShow; // @synthesize watchLaterCountWhenShow=_watchLaterCountWhenShow;
@property(nonatomic) _Bool isShowBeforeEnter; // @synthesize isShowBeforeEnter=_isShowBeforeEnter;
@property(nonatomic) unsigned long long exitTimeCost; // @synthesize exitTimeCost=_exitTimeCost;
@property(nonatomic) _Bool isFromPreload; // @synthesize isFromPreload=_isFromPreload;
@property(nonatomic) unsigned long long timeCost; // @synthesize timeCost=_timeCost;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)markExit;
- (void)markShow:(_Bool)arg1 watchLaterCount:(long long)arg2 feedCount:(long long)arg3;
- (void)markEnter;
- (unsigned int)logId;

@end

