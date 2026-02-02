//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCStoryConfigureMgr
{
    _Bool _friendVisitSwitchOn;
    unsigned long long _headerShowLimitCount;
    unsigned long long _entranceInTimelineOfTimeDuration;
}

@property(nonatomic) _Bool friendVisitSwitchOn; // @synthesize friendVisitSwitchOn=_friendVisitSwitchOn;
@property(nonatomic) unsigned long long entranceInTimelineOfTimeDuration; // @synthesize entranceInTimelineOfTimeDuration=_entranceInTimelineOfTimeDuration;
@property(nonatomic) unsigned long long headerShowLimitCount; // @synthesize headerShowLimitCount=_headerShowLimitCount;
- (void)onMMDynamicConfigUpdated;
- (void)setupDynamicValue;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

