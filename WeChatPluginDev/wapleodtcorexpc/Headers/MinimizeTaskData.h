//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MinimizeTaskContainerInfo, MinimizeTaskExtInfo, NSArray, NSData, NSString;

@interface MinimizeTaskData
{
    _Bool _shouldIgnoreSubtitleWhenRecoverTask;
    _Bool _bForbidAddDuplicateTask;
    _Bool _bForbidReplacement;
    _Bool _isDisableVoiceTic;
    _Bool _isForeground;
    _Bool _isNew;
    _Bool _canMaximizeForStateView;
    unsigned int _taskBizType;
    unsigned int _taskCreateTime;
    unsigned int _taskLastEntryTime;
    unsigned int _currentTransitionType;
    unsigned int _taskStateType;
    NSString *_taskBizName;
    NSString *_taskBizKey;
    NSData *_taskContextData;
    NSString *_taskTitle;
    NSString *_taskSubtitle;
    NSString *_taskTitleTail;
    NSString *_taskDisplaySourceName;
    NSString *_taskDisplayUserName;
    NSString *_taskFooterText;
    NSString *_taskDefaultThumbImgName;
    NSData *_taskThumbImgData;
    NSString *_taskThumbUrl;
    NSString *_taskDefaultIconName;
    NSData *_taskIconImgData;
    NSString *_taskIconUrl;
    unsigned long long _taskServerId;
    unsigned long long _taskBizSeq;
    NSString *_taskSubtitleTail;
    NSString *_forbidReplaceReason;
    MinimizeTaskExtInfo *_taskExtInfo;
    unsigned long long _directLaunchType;
    NSString *_taskKey;
    NSString *_delegateClassName;
    NSArray *_taskStateList;
    MinimizeTaskContainerInfo *_containerInfo;
    unsigned long long _sizeChangedAnimAnchorPoint;
}

+ (CDUnknownBlockType)comparator;
+ (void)initialize;
+ (void)PBArrayAdd_taskBizSeq;
+ (void)PBArrayAdd_taskDisplayUserName;
+ (void)PBArrayAdd_taskBizType;
+ (void)PBArrayAdd_taskServerId;
+ (void)PBArrayAdd_shouldIgnoreSubtitleWhenRecoverTask;
+ (void)PBArrayAdd_taskExtInfo;
+ (void)PBArrayAdd_taskTitleTail;
+ (void)PBArrayAdd_delegateClassName;
+ (void)PBArrayAdd_taskKey;
+ (void)PBArrayAdd_isForeground;
+ (void)PBArrayAdd_taskSubtitle;
+ (void)PBArrayAdd_taskTitle;
+ (void)PBArrayAdd_taskIconUrl;
+ (void)PBArrayAdd_taskIconImgData;
+ (void)PBArrayAdd_taskDefaultIconName;
+ (void)PBArrayAdd_taskContextData;
+ (void)PBArrayAdd_taskBizKey;
+ (void)PBArrayAdd_taskBizName;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (id)swift_taskLastEntryTime;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)taskLastEntryTime;
+ (id)swift_taskFooterText;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)taskFooterText;
+ (id)swift_taskTitleTail;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)taskTitleTail;
+ (id)swift_taskSubtitle;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)taskSubtitle;
+ (id)swift_taskTitle;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)taskTitle;
+ (id)swift_taskDisplaySourceName;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)taskDisplaySourceName;
+ (id)swift_taskIconUrl;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)taskIconUrl;
+ (id)swift_taskIconImgData;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)taskIconImgData;
+ (id)swift_taskDefaultIconName;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)taskDefaultIconName;
+ (id)swift_taskThumbUrl;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)taskThumbUrl;
+ (id)swift_taskThumbImgData;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)taskThumbImgData;
+ (id)swift_taskDefaultThumbImgName;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)taskDefaultThumbImgName;
+ (id)swift_taskExtInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)taskExtInfo;
+ (id)swift_delegateClassName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)delegateClassName;
+ (id)swift_taskKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)taskKey;
+ (id)swift_taskCreateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)taskCreateTime;
+ (id)swift_taskContextData;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)taskContextData;
+ (id)swift_taskBizKey;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)taskBizKey;
+ (id)swift_taskBizName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)taskBizName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long sizeChangedAnimAnchorPoint; // @synthesize sizeChangedAnimAnchorPoint=_sizeChangedAnimAnchorPoint;
@property(nonatomic) _Bool canMaximizeForStateView; // @synthesize canMaximizeForStateView=_canMaximizeForStateView;
@property(retain, nonatomic) MinimizeTaskContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property(nonatomic) unsigned int taskStateType; // @synthesize taskStateType=_taskStateType;
@property(retain, nonatomic) NSArray *taskStateList; // @synthesize taskStateList=_taskStateList;
@property(nonatomic) unsigned int currentTransitionType; // @synthesize currentTransitionType=_currentTransitionType;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSString *delegateClassName; // @synthesize delegateClassName=_delegateClassName;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
@property(nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(nonatomic) unsigned long long directLaunchType; // @synthesize directLaunchType=_directLaunchType;
@property(retain, nonatomic) MinimizeTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo=_taskExtInfo;
@property(nonatomic) _Bool isDisableVoiceTic; // @synthesize isDisableVoiceTic=_isDisableVoiceTic;
@property(retain, nonatomic) NSString *forbidReplaceReason; // @synthesize forbidReplaceReason=_forbidReplaceReason;
@property(nonatomic) _Bool bForbidReplacement; // @synthesize bForbidReplacement=_bForbidReplacement;
@property(nonatomic) _Bool bForbidAddDuplicateTask; // @synthesize bForbidAddDuplicateTask=_bForbidAddDuplicateTask;
@property(nonatomic) _Bool shouldIgnoreSubtitleWhenRecoverTask; // @synthesize shouldIgnoreSubtitleWhenRecoverTask=_shouldIgnoreSubtitleWhenRecoverTask;
@property(retain, nonatomic) NSString *taskSubtitleTail; // @synthesize taskSubtitleTail=_taskSubtitleTail;
@property(nonatomic) unsigned long long taskBizSeq; // @synthesize taskBizSeq=_taskBizSeq;
@property(nonatomic) unsigned long long taskServerId; // @synthesize taskServerId=_taskServerId;
@property(retain, nonatomic) NSString *taskIconUrl; // @synthesize taskIconUrl=_taskIconUrl;
@property(retain, nonatomic) NSData *taskIconImgData; // @synthesize taskIconImgData=_taskIconImgData;
@property(retain, nonatomic) NSString *taskDefaultIconName; // @synthesize taskDefaultIconName=_taskDefaultIconName;
@property(retain, nonatomic) NSString *taskThumbUrl; // @synthesize taskThumbUrl=_taskThumbUrl;
@property(retain, nonatomic) NSData *taskThumbImgData; // @synthesize taskThumbImgData=_taskThumbImgData;
@property(retain, nonatomic) NSString *taskDefaultThumbImgName; // @synthesize taskDefaultThumbImgName=_taskDefaultThumbImgName;
@property(retain, nonatomic) NSString *taskFooterText; // @synthesize taskFooterText=_taskFooterText;
@property(retain, nonatomic) NSString *taskDisplayUserName; // @synthesize taskDisplayUserName=_taskDisplayUserName;
@property(retain, nonatomic) NSString *taskDisplaySourceName; // @synthesize taskDisplaySourceName=_taskDisplaySourceName;
@property(retain, nonatomic) NSString *taskTitleTail; // @synthesize taskTitleTail=_taskTitleTail;
@property(retain, nonatomic) NSString *taskSubtitle; // @synthesize taskSubtitle=_taskSubtitle;
@property(retain, nonatomic) NSString *taskTitle; // @synthesize taskTitle=_taskTitle;
@property(nonatomic) unsigned int taskLastEntryTime; // @synthesize taskLastEntryTime=_taskLastEntryTime;
@property(nonatomic) unsigned int taskCreateTime; // @synthesize taskCreateTime=_taskCreateTime;
@property(retain, nonatomic) NSData *taskContextData; // @synthesize taskContextData=_taskContextData;
@property(nonatomic) unsigned int taskBizType; // @synthesize taskBizType=_taskBizType;
@property(retain, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(retain, nonatomic) NSString *taskBizName; // @synthesize taskBizName=_taskBizName;
@property(readonly, copy) NSString *description;
- (_Bool)isStateEqualTo:(id)arg1;
- (_Bool)isTaskIconEqualTo:(id)arg1;
- (void)copyInternalInfoFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

