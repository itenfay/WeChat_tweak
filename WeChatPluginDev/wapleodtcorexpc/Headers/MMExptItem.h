//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface MMExptItem
{
    unsigned int _exptId;
    unsigned int _groupId;
    unsigned int _exptSeq;
    unsigned int _startTimeSec;
    unsigned int _endTimeSec;
    unsigned int _exptType;
    unsigned int _subType;
    unsigned int _lastRptTimeSec;
    unsigned int _fromSystem;
    NSDictionary *_exptArgs;
    NSString *_exptCheckSum;
    unsigned long long _bucketSrc;
    NSString *_paramHashVal;
}

+ (void)initialize;
+ (void)PBArrayAdd_paramHashVal;
+ (void)PBArrayAdd_bucketSrc;
+ (void)PBArrayAdd_fromSystem;
+ (void)PBArrayAdd_exptCheckSum;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_exptType;
+ (void)PBArrayAdd_exptArgs;
+ (void)PBArrayAdd_endTimeSec;
+ (void)PBArrayAdd_startTimeSec;
+ (void)PBArrayAdd_exptSeq;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_exptId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *paramHashVal; // @synthesize paramHashVal=_paramHashVal;
@property(nonatomic) unsigned long long bucketSrc; // @synthesize bucketSrc=_bucketSrc;
@property(nonatomic) unsigned int fromSystem; // @synthesize fromSystem=_fromSystem;
@property(nonatomic) unsigned int lastRptTimeSec; // @synthesize lastRptTimeSec=_lastRptTimeSec;
@property(retain, nonatomic) NSString *exptCheckSum; // @synthesize exptCheckSum=_exptCheckSum;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned int exptType; // @synthesize exptType=_exptType;
@property(retain, nonatomic) NSDictionary *exptArgs; // @synthesize exptArgs=_exptArgs;
@property(nonatomic) unsigned int endTimeSec; // @synthesize endTimeSec=_endTimeSec;
@property(nonatomic) unsigned int startTimeSec; // @synthesize startTimeSec=_startTimeSec;
@property(nonatomic) unsigned int exptSeq; // @synthesize exptSeq=_exptSeq;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned int exptId; // @synthesize exptId=_exptId;
- (_Bool)isFromApp;
- (unsigned int)decodeReferenceLength:(id)arg1;
- (unsigned int)decodeReferenceInt:(id)arg1 andWidth:(unsigned int)arg2;
- (id)decompressJson:(id)arg1;
- (_Bool)parseJson:(id)arg1;
- (unsigned int)checkSessionPageId;
- (_Bool)needRptSessionDetail;
- (id)toSessionConfig;
- (_Bool)isNewEdgeComputingSqlConfig;
- (_Bool)isNewEdgeComputingScriptConfig;
- (_Bool)isSessionEdgeComputingSqlConfig;
- (_Bool)isSessionEdgeComputingScriptConfig;
- (_Bool)isSessionViewBlackListConfig;
- (_Bool)isSessionPageConfig;
- (_Bool)isSessionUBAConfig;
- (_Bool)isSessionConfig;
- (_Bool)isXLabExpt;
- (_Bool)needReport;
- (_Bool)checkTypeToReport;
- (_Bool)isReady;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

