//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MPChannelStrategyInfo
{
    _Bool _brandCellExposeUpdate;
    _Bool _mainSessionExposeUpdate;
    _Bool _enterBizSessionUpdate;
    _Bool _enterVideoPageUpdate;
    _Bool _autoSwitchDefaultLogo;
    unsigned int _timelineInterval;
    unsigned int _prefetchInterval;
}

+ (void)initialize;
+ (void)PBArrayAdd_autoSwitchDefaultLogo;
+ (void)PBArrayAdd_enterVideoPageUpdate;
+ (void)PBArrayAdd_enterBizSessionUpdate;
+ (void)PBArrayAdd_mainSessionExposeUpdate;
+ (void)PBArrayAdd_brandCellExposeUpdate;
+ (void)PBArrayAdd_prefetchInterval;
+ (void)PBArrayAdd_timelineInterval;
@property(nonatomic) _Bool autoSwitchDefaultLogo; // @synthesize autoSwitchDefaultLogo=_autoSwitchDefaultLogo;
@property(nonatomic) _Bool enterVideoPageUpdate; // @synthesize enterVideoPageUpdate=_enterVideoPageUpdate;
@property(nonatomic) _Bool enterBizSessionUpdate; // @synthesize enterBizSessionUpdate=_enterBizSessionUpdate;
@property(nonatomic) _Bool mainSessionExposeUpdate; // @synthesize mainSessionExposeUpdate=_mainSessionExposeUpdate;
@property(nonatomic) _Bool brandCellExposeUpdate; // @synthesize brandCellExposeUpdate=_brandCellExposeUpdate;
@property(nonatomic) unsigned int prefetchInterval; // @synthesize prefetchInterval=_prefetchInterval;
@property(nonatomic) unsigned int timelineInterval; // @synthesize timelineInterval=_timelineInterval;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

