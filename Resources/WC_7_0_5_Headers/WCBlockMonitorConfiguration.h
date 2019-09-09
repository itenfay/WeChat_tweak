//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface WCBlockMonitorConfiguration : NSObject <NSCoding>
{
    _Bool _bMainThreadHandle;
    _Bool _bPrintCPUUsage;
    _Bool _bGetCPUHighLog;
    _Bool _bGetPowerConsumeStack;
    _Bool _bFilterSameStack;
    _Bool _bPrintMemomryUse;
    unsigned int _runloopTimeOut;
    unsigned int _checkPeriodTime;
    unsigned int _perStackInterval;
    unsigned int _mainThreadCount;
    float _limitCPUPercent;
    float _powerConsumeStackCPULimit;
    unsigned int _triggerToBeFilteredCount;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool bFilterSameStack; // @synthesize bFilterSameStack=_bFilterSameStack;
@property(nonatomic) _Bool bGetCPUHighLog; // @synthesize bGetCPUHighLog=_bGetCPUHighLog;
@property(nonatomic) _Bool bGetPowerConsumeStack; // @synthesize bGetPowerConsumeStack=_bGetPowerConsumeStack;
@property(nonatomic) _Bool bMainThreadHandle; // @synthesize bMainThreadHandle=_bMainThreadHandle;
@property(nonatomic) _Bool bPrintCPUUsage; // @synthesize bPrintCPUUsage=_bPrintCPUUsage;
@property(nonatomic) _Bool bPrintMemomryUse; // @synthesize bPrintMemomryUse=_bPrintMemomryUse;
@property(nonatomic) unsigned int checkPeriodTime; // @synthesize checkPeriodTime=_checkPeriodTime;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) float limitCPUPercent; // @synthesize limitCPUPercent=_limitCPUPercent;
@property(nonatomic) unsigned int mainThreadCount; // @synthesize mainThreadCount=_mainThreadCount;
@property(nonatomic) unsigned int perStackInterval; // @synthesize perStackInterval=_perStackInterval;
@property(nonatomic) float powerConsumeStackCPULimit; // @synthesize powerConsumeStackCPULimit=_powerConsumeStackCPULimit;
@property(nonatomic) unsigned int runloopTimeOut; // @synthesize runloopTimeOut=_runloopTimeOut;
@property(nonatomic) unsigned int triggerToBeFilteredCount; // @synthesize triggerToBeFilteredCount=_triggerToBeFilteredCount;

@end
