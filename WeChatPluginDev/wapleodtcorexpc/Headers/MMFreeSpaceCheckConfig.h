//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFreeSpaceCheckConfig : NSObject
{
    unsigned int _m_lastLowAlertTime;
    unsigned int _m_lastLowerAlertTime;
    unsigned int _m_lastLowestAlertTime;
    unsigned int _m_lowAlertTimeInterval;
    unsigned int _m_lastCheckOtherUserUsedSpaceTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_lastCheckOtherUserUsedSpaceTime;
+ (void)PBArrayAdd_m_lowAlertTimeInterval;
+ (void)PBArrayAdd_m_lastLowestAlertTime;
+ (void)PBArrayAdd_m_lastLowerAlertTime;
+ (void)PBArrayAdd_m_lastLowAlertTime;
@property(nonatomic) unsigned int m_lastCheckOtherUserUsedSpaceTime; // @synthesize m_lastCheckOtherUserUsedSpaceTime=_m_lastCheckOtherUserUsedSpaceTime;
@property(nonatomic) unsigned int m_lowAlertTimeInterval; // @synthesize m_lowAlertTimeInterval=_m_lowAlertTimeInterval;
@property(nonatomic) unsigned int m_lastLowestAlertTime; // @synthesize m_lastLowestAlertTime=_m_lastLowestAlertTime;
@property(nonatomic) unsigned int m_lastLowerAlertTime; // @synthesize m_lastLowerAlertTime=_m_lastLowerAlertTime;
@property(nonatomic) unsigned int m_lastLowAlertTime; // @synthesize m_lastLowAlertTime=_m_lastLowAlertTime;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

