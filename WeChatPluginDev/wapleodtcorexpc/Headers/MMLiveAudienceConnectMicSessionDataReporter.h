//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSString;

@interface MMLiveAudienceConnectMicSessionDataReporter : NSObject
{
    unsigned int _liveMode;
    unsigned int _liveSubMode;
    MMFinderLiveTaskId *_taskId;
    NSString *_subSessionId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int liveSubMode; // @synthesize liveSubMode=_liveSubMode;
@property(nonatomic) unsigned int liveMode; // @synthesize liveMode=_liveMode;
@property(retain, nonatomic) NSString *subSessionId; // @synthesize subSessionId=_subSessionId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)reportSessionWithType:(unsigned long long)arg1;
- (void)reportSessionEnd;
- (void)reportSessionBegin;
- (void)updateDataWithSubSessionId:(id)arg1 liveMode:(unsigned int)arg2 liveSubMode:(unsigned int)arg3;
- (id)initWithTaskId:(id)arg1;

@end

