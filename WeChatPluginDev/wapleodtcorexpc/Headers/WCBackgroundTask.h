//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMContext, NSString;

@interface WCBackgroundTask : NSObject
{
    int _maxConcurrentCount;
    int _cumulativeCount;
    NSString *_name;
    unsigned long long _policy;
    unsigned long long _priority;
    MMContext *_context;
    unsigned long long _status;
    double _cumulativeWallTime;
}

- (void).cxx_destruct;
@property(nonatomic) double cumulativeWallTime; // @synthesize cumulativeWallTime=_cumulativeWallTime;
@property(nonatomic) int cumulativeCount; // @synthesize cumulativeCount=_cumulativeCount;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) MMContext *context; // @synthesize context=_context;
@property(nonatomic) int maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)didResume;
- (void)willResume;
- (void)didPause;
- (void)willPause;
- (void)run;
- (id)initWithName:(id)arg1;

@end

