//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCNewClickAppStatData
{
    unsigned int _firstEnterTS;
    unsigned int _lastQuitTS;
    int _interval;
    int _backgroundInterval;
    unsigned int _switchCount;
    unsigned int _realSwitchCount;
    int _realInterval;
    int _realBackgroundInterval;
    unsigned int _realFirstEnterTS;
    unsigned int _realLastQuitTS;
}

+ (void)initialize;
+ (void)PBArrayAdd_realLastQuitTS;
+ (void)PBArrayAdd_realFirstEnterTS;
+ (void)PBArrayAdd_realSwitchCount;
+ (void)PBArrayAdd_realBackgroundInterval;
+ (void)PBArrayAdd_realInterval;
+ (void)PBArrayAdd_switchCount;
+ (void)PBArrayAdd_backgroundInterval;
+ (void)PBArrayAdd_interval;
+ (void)PBArrayAdd_lastQuitTS;
+ (void)PBArrayAdd_firstEnterTS;
@property(nonatomic) unsigned int realLastQuitTS; // @synthesize realLastQuitTS=_realLastQuitTS;
@property(nonatomic) unsigned int realFirstEnterTS; // @synthesize realFirstEnterTS=_realFirstEnterTS;
@property(nonatomic) int realBackgroundInterval; // @synthesize realBackgroundInterval=_realBackgroundInterval;
@property(nonatomic) int realInterval; // @synthesize realInterval=_realInterval;
@property(nonatomic) unsigned int realSwitchCount; // @synthesize realSwitchCount=_realSwitchCount;
@property(nonatomic) unsigned int switchCount; // @synthesize switchCount=_switchCount;
@property(nonatomic) int backgroundInterval; // @synthesize backgroundInterval=_backgroundInterval;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int lastQuitTS; // @synthesize lastQuitTS=_lastQuitTS;
@property(nonatomic) unsigned int firstEnterTS; // @synthesize firstEnterTS=_firstEnterTS;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

