//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString, TipsReportInfo;

@interface NewTipsInfo
{
    _Bool _disposed;
    _Bool _hadBeginShow;
    unsigned int _tipsId;
    unsigned int _priority;
    unsigned int _operate;
    unsigned int _beginShowTime;
    unsigned int _disappearTime;
    unsigned int _overdueTime;
    unsigned int _minVersion;
    unsigned int _maxVersion;
    unsigned int _recieveTipsTime;
    unsigned int _realBeginShowTime;
    unsigned int _tipsDisposeTime;
    NSString *_uniqueId;
    unsigned long long _tipsType;
    NSString *_extInfo;
    TipsReportInfo *_reportInfo;
    NSMutableSet *_allowRegions;
    NSMutableSet *_allowLanguage;
    NSMutableDictionary *_dicShowInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicShowInfo;
+ (void)PBArrayAdd_tipsDisposeTime;
+ (void)PBArrayAdd_realBeginShowTime;
+ (void)PBArrayAdd_recieveTipsTime;
+ (void)PBArrayAdd_hadBeginShow;
+ (void)PBArrayAdd_disposed;
+ (void)PBArrayAdd_reportInfo;
+ (void)PBArrayAdd_maxVersion;
+ (void)PBArrayAdd_minVersion;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_overdueTime;
+ (void)PBArrayAdd_disappearTime;
+ (void)PBArrayAdd_beginShowTime;
+ (void)PBArrayAdd_tipsType;
+ (void)PBArrayAdd_uniqueId;
+ (void)PBArrayAdd_operate;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_tipsId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicShowInfo; // @synthesize dicShowInfo=_dicShowInfo;
@property(nonatomic) unsigned int tipsDisposeTime; // @synthesize tipsDisposeTime=_tipsDisposeTime;
@property(nonatomic) unsigned int realBeginShowTime; // @synthesize realBeginShowTime=_realBeginShowTime;
@property(nonatomic) unsigned int recieveTipsTime; // @synthesize recieveTipsTime=_recieveTipsTime;
@property(nonatomic) _Bool hadBeginShow; // @synthesize hadBeginShow=_hadBeginShow;
@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(retain, nonatomic) NSMutableSet *allowLanguage; // @synthesize allowLanguage=_allowLanguage;
@property(retain, nonatomic) NSMutableSet *allowRegions; // @synthesize allowRegions=_allowRegions;
@property(nonatomic) unsigned int maxVersion; // @synthesize maxVersion=_maxVersion;
@property(nonatomic) unsigned int minVersion; // @synthesize minVersion=_minVersion;
@property(retain, nonatomic) TipsReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int overdueTime; // @synthesize overdueTime=_overdueTime;
@property(nonatomic) unsigned int disappearTime; // @synthesize disappearTime=_disappearTime;
@property(nonatomic) unsigned int beginShowTime; // @synthesize beginShowTime=_beginShowTime;
@property(nonatomic) unsigned long long tipsType; // @synthesize tipsType=_tipsType;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) unsigned int operate; // @synthesize operate=_operate;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned int tipsId; // @synthesize tipsId=_tipsId;
- (id)removePathInfoWithKey:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

