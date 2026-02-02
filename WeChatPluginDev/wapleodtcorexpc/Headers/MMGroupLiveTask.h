//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveCommentDataFetchEngine, MMGroupLiveInfoItem, MMLiveTaskId, NSString;

@interface MMGroupLiveTask
{
    unsigned int _anchorScene;
    unsigned int _audienceScene;
    MMLiveTaskId *_taskId;
    MMGroupLiveInfoItem *_liveInfoItem;
}

+ (id)createTaskWithGroupLiveInfoItem:(id)arg1;
+ (id)createTaskWithShareLiveMsg:(id)arg1;
+ (id)createTaskWithReplaySysMsg:(id)arg1 linkUrl:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int audienceScene; // @synthesize audienceScene=_audienceScene;
@property(nonatomic) unsigned int anchorScene; // @synthesize anchorScene=_anchorScene;
@property(retain, nonatomic) MMGroupLiveInfoItem *liveInfoItem; // @synthesize liveInfoItem=_liveInfoItem;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)handleRemoteSdkUserMediaDataAvailableChanged;
- (id)pauseTimeCachedKey;
- (id)pauseStatusCachedKey;
- (id)micMutedCachedKey;
- (id)lastCameraModeCachedKey;
- (void)initBeautyLogicWithBeautyPackage:(id)arg1;
- (void)initFaceBeautyParam;
- (long long)getBeautySceneType;
- (void)initFrontCameraMirrorMode;
- (_Bool)canChangeAudioQuality;
- (_Bool)isOverDisplaySize;
- (void)updateMainRemoteViewFillMode;
- (id)conflictWording;
- (_Bool)resolveExternalConflicts;
- (_Bool)resolveConflictsWithLiveTask:(id)arg1 navigationController:(id)arg2 maximizeLiveBlock:(CDUnknownBlockType)arg3 switchLiveBlock:(CDUnknownBlockType)arg4;
- (_Bool)isOnlineStateButtonDisabled;
- (id)anchorIdentityId;
- (unsigned int)liveStartTime;
- (_Bool)isLiveClosed;
- (_Bool)isSameToTask:(id)arg1;
@property(readonly, nonatomic) MMGroupLiveCommentDataFetchEngine *groupCommentFetchEngine;
- (id)createNewCommentFetchEngine;
- (id)createNewTaskId;
- (void)updateLiveInfo:(id)arg1;
- (id)initWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 roomId:(id)arg3 andAnchorId:(id)arg4;
@property(readonly, copy, nonatomic) NSString *roomId; // @dynamic roomId;

// Remaining properties
@property(nonatomic) unsigned long long frontCameraMirrorMode; // @dynamic frontCameraMirrorMode;
@property(nonatomic) _Bool isFrontCameraMirrored; // @dynamic isFrontCameraMirrored;

@end

