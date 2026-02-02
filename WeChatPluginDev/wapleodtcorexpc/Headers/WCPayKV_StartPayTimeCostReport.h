//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayKV_StartPayTimeCostReport : NSObject
{
    unsigned long long _m_appLaunchTime;
    unsigned long long _m_logicStartTime;
    unsigned long long _m_logicNetworkEndTime;
    unsigned long long _m_logicShowViewTime;
    unsigned long long _m_isFirstLaunch;
    unsigned long long _m_hasLogNoOrderViewTime;
}

+ (id)shareInstance;
@property(nonatomic) unsigned long long m_hasLogNoOrderViewTime; // @synthesize m_hasLogNoOrderViewTime=_m_hasLogNoOrderViewTime;
@property(nonatomic) unsigned long long m_isFirstLaunch; // @synthesize m_isFirstLaunch=_m_isFirstLaunch;
@property(nonatomic) unsigned long long m_logicShowViewTime; // @synthesize m_logicShowViewTime=_m_logicShowViewTime;
@property(nonatomic) unsigned long long m_logicNetworkEndTime; // @synthesize m_logicNetworkEndTime=_m_logicNetworkEndTime;
@property(nonatomic) unsigned long long m_logicStartTime; // @synthesize m_logicStartTime=_m_logicStartTime;
@property(nonatomic) unsigned long long m_appLaunchTime; // @synthesize m_appLaunchTime=_m_appLaunchTime;
- (void)clearWhenLogicStop;
- (void)reportWithScene:(unsigned int)arg1;
- (void)recordLogicShowViewNoOrderViewTime;
- (void)recordLogicShowViewTime;
- (void)recordLogicNetworkEndTime;
- (void)recordLogicStartTime;
- (void)recordFirstLaunch;
- (void)recordLaunchTime;

@end

