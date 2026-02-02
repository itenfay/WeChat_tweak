//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString;

@interface WCNewClickStatReportConfig
{
    unsigned int _configVersion;
    unsigned int _nextUpdateInterval;
    unsigned int _samplePeriod;
    NSArray *_arrEventConfig;
    NSData *_versionBuffer;
}

+ (id)reportConfigWithXml:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_versionBuffer;
+ (void)PBArrayAdd_arrEventConfig;
+ (void)PBArrayAdd_samplePeriod;
+ (void)PBArrayAdd_nextUpdateInterval;
+ (void)PBArrayAdd_configVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *versionBuffer; // @synthesize versionBuffer=_versionBuffer;
@property(retain, nonatomic) NSArray *arrEventConfig; // @synthesize arrEventConfig=_arrEventConfig;
@property(nonatomic) unsigned int samplePeriod; // @synthesize samplePeriod=_samplePeriod;
@property(nonatomic) unsigned int nextUpdateInterval; // @synthesize nextUpdateInterval=_nextUpdateInterval;
@property(nonatomic) unsigned int configVersion; // @synthesize configVersion=_configVersion;
- (_Bool)isMatchSpecialPVPage:(id)arg1 prePage:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

