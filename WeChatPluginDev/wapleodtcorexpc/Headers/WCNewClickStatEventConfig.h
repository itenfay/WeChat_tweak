//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCNewClickStatEventConfig
{
    unsigned int _eventID;
    unsigned int _expireTime;
    unsigned int _logid;
    NSString *_eventName;
    double _sampleRate;
    NSString *_regType;
    NSArray *_arrPageConfig;
    NSArray *_arrSpecialPVPageConfig;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrSpecialPVPageConfig;
+ (void)PBArrayAdd_arrPageConfig;
+ (void)PBArrayAdd_regType;
+ (void)PBArrayAdd_logid;
+ (void)PBArrayAdd_sampleRate;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_eventID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrSpecialPVPageConfig; // @synthesize arrSpecialPVPageConfig=_arrSpecialPVPageConfig;
@property(retain, nonatomic) NSArray *arrPageConfig; // @synthesize arrPageConfig=_arrPageConfig;
@property(retain, nonatomic) NSString *regType; // @synthesize regType=_regType;
@property(nonatomic) unsigned int logid; // @synthesize logid=_logid;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

