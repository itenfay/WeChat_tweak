//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUsersInfo, MMFinderLiveKTVContext, MMFinderLiveKTVManageLogic, MMFinderLiveKTVPerfAdjustLogic, MMFinderLiveKTVReporter, MMFinderLiveKTVStateInfo, MMLiveKtvResourceState, NSString, WCFinderDataItem;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVBox : NSObject
{
    _Bool _isKTVMode;
    int _commentScene;
    id <MMLiveUniqueTaskId> _taskId;
    MMFinderLiveKTVManageLogic *_ktvManageLogic;
    MMLiveKtvResourceState *_ktvResourceState;
    MMFinderLiveKTVPerfAdjustLogic *_ktvPerfAdjustLogic;
    MMFinderLiveKTVContext *_ktvContext;
    CDUnknownBlockType _ktvManageLogicCreateCallback;
    MMFinderLiveConnectMicUsersInfo *_allConnectedMicUsersInfo;
    WCFinderDataItem *_finderDataItem;
    CDUnknownBlockType _ktvGetAnchorSdkUserIdCallback;
    MMFinderLiveKTVReporter *_reporter;
}

+ (unsigned long long)getKTVViewScene:(id)arg1;
+ (id)replaceCommaToSemicolon:(id)arg1;
+ (id)getMistakeRecordsDetail:(id)arg1;
+ (unsigned long long)getLiveId:(id)arg1;
+ (void)reportPositionMistakeLagWithTaskId:(id)arg1 cnt:(unsigned long long)arg2 allDuration:(int)arg3 averMaxAcceptMistake:(int)arg4 averPositionUpdateInterval:(int)arg5 mistakeRecords:(id)arg6 role:(unsigned long long)arg7 uniqueId:(id)arg8 viewScene:(unsigned long long)arg9;
+ (void)reportPlayFailWithTaskId:(id)arg1 error:(unsigned long long)arg2 extra:(long long)arg3 role:(unsigned long long)arg4 uniqueId:(id)arg5 songId:(id)arg6 viewScene:(unsigned long long)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveKTVReporter *reporter; // @synthesize reporter=_reporter;
@property(copy, nonatomic) CDUnknownBlockType ktvGetAnchorSdkUserIdCallback; // @synthesize ktvGetAnchorSdkUserIdCallback=_ktvGetAnchorSdkUserIdCallback;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo; // @synthesize allConnectedMicUsersInfo=_allConnectedMicUsersInfo;
@property(copy, nonatomic) CDUnknownBlockType ktvManageLogicCreateCallback; // @synthesize ktvManageLogicCreateCallback=_ktvManageLogicCreateCallback;
@property(retain, nonatomic) MMFinderLiveKTVContext *ktvContext; // @synthesize ktvContext=_ktvContext;
@property(retain, nonatomic) MMFinderLiveKTVPerfAdjustLogic *ktvPerfAdjustLogic; // @synthesize ktvPerfAdjustLogic=_ktvPerfAdjustLogic;
@property(retain, nonatomic) MMLiveKtvResourceState *ktvResourceState; // @synthesize ktvResourceState=_ktvResourceState;
@property(retain, nonatomic) MMFinderLiveKTVManageLogic *ktvManageLogic; // @synthesize ktvManageLogic=_ktvManageLogic;
@property(nonatomic) _Bool isKTVMode; // @synthesize isKTVMode=_isKTVMode;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
- (id)ktvReporter;
@property(readonly, copy, nonatomic) NSString *anchorSdkUserId;
- (void)updateFinderDataItem:(id)arg1;
- (void)updateAllConnectedMicUsersInfo:(id)arg1;
- (void)exitKTVMode;
- (void)enterKTVMode;
@property(readonly, nonatomic) MMFinderLiveKTVStateInfo *ktvStateInfo;
- (void)createKTVPerfAdjustLogic;
- (void)createKTVManageLogic;
- (void)loadKTVResources;
- (void)createKTVResourceState;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

@end

