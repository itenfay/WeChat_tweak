//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface EdgeComputingScriptConfigModel
{
    unsigned int _dataSourceType;
    unsigned int _dataSourceID;
    unsigned int _reportID;
    unsigned int _isInstantReport;
    unsigned int _reportMethod;
    unsigned int _dbExpireTime;
    unsigned int _runPeriod;
    unsigned int _isRepeat;
    NSString *_configID;
    NSArray *_fieldConfigModels;
    NSString *_scriptURL;
    NSString *_script;
    NSString *_originalJson;
    NSString *_scriptMD5;
}

+ (void)initialize;
+ (void)PBArrayAdd_scriptURL;
+ (void)PBArrayAdd_reportMethod;
+ (void)PBArrayAdd_scriptMD5;
+ (void)PBArrayAdd_isRepeat;
+ (void)PBArrayAdd_runPeriod;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_script;
+ (void)PBArrayAdd_dbExpireTime;
+ (void)PBArrayAdd_isInstantReport;
+ (void)PBArrayAdd_fieldConfigModels;
+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_dataSourceID;
+ (void)PBArrayAdd_dataSourceType;
+ (void)PBArrayAdd_configID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *scriptMD5; // @synthesize scriptMD5=_scriptMD5;
@property(nonatomic) unsigned int isRepeat; // @synthesize isRepeat=_isRepeat;
@property(nonatomic) unsigned int runPeriod; // @synthesize runPeriod=_runPeriod;
@property(retain, nonatomic) NSString *originalJson; // @synthesize originalJson=_originalJson;
@property(retain, nonatomic) NSString *script; // @synthesize script=_script;
@property(retain, nonatomic) NSString *scriptURL; // @synthesize scriptURL=_scriptURL;
@property(nonatomic) unsigned int dbExpireTime; // @synthesize dbExpireTime=_dbExpireTime;
@property(nonatomic) unsigned int reportMethod; // @synthesize reportMethod=_reportMethod;
@property(nonatomic) unsigned int isInstantReport; // @synthesize isInstantReport=_isInstantReport;
@property(retain, nonatomic) NSArray *fieldConfigModels; // @synthesize fieldConfigModels=_fieldConfigModels;
@property(nonatomic) unsigned int reportID; // @synthesize reportID=_reportID;
@property(nonatomic) unsigned int dataSourceID; // @synthesize dataSourceID=_dataSourceID;
@property(nonatomic) unsigned int dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(retain, nonatomic) NSString *configID; // @synthesize configID=_configID;
- (id)toString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

