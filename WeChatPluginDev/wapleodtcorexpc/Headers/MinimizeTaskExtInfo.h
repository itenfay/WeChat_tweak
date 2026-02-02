//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MinimizeTaskExtInfo
{
    unsigned int _generateScene;
    unsigned long long _generateType;
    unsigned long long _bizScene;
    NSString *_bizId;
    NSString *_bizSubId;
    NSString *_bizName;
    NSString *_generateContextId;
    NSString *_sceneNote;
    unsigned long long _taskCreateTime;
    unsigned long long _lastMinimizeTime;
    unsigned long long _lastMaximizeTime;
    NSString *_miniSessionId;
    NSString *_aggreSessionId;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_miniSessionId;
+ (void)PBArrayAdd_taskCreateTime;
+ (void)PBArrayAdd_bizName;
+ (void)PBArrayAdd_bizSubId;
+ (void)PBArrayAdd_bizId;
+ (void)PBArrayAdd_bizScene;
+ (void)PBArrayAdd_generateScene;
+ (void)PBArrayAdd_generateType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aggreSessionId; // @synthesize aggreSessionId=_aggreSessionId;
@property(retain, nonatomic) NSString *miniSessionId; // @synthesize miniSessionId=_miniSessionId;
@property(nonatomic) unsigned long long lastMaximizeTime; // @synthesize lastMaximizeTime=_lastMaximizeTime;
@property(nonatomic) unsigned long long lastMinimizeTime; // @synthesize lastMinimizeTime=_lastMinimizeTime;
@property(nonatomic) unsigned long long taskCreateTime; // @synthesize taskCreateTime=_taskCreateTime;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(retain, nonatomic) NSString *generateContextId; // @synthesize generateContextId=_generateContextId;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *bizSubId; // @synthesize bizSubId=_bizSubId;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) unsigned long long bizScene; // @synthesize bizScene=_bizScene;
@property(nonatomic) unsigned int generateScene; // @synthesize generateScene=_generateScene;
@property(nonatomic) unsigned long long generateType; // @synthesize generateType=_generateType;
- (id)archivedWCTValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

