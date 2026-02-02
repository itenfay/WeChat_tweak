//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMLiveStorageCleanupPinningToken, MMLiveTaskId, MMWeEffectManager;

@interface MMLiveFaceLogic : NSObject
{
    _Bool _isFaceDetectionStarted;
    MMLiveTaskId *_taskId;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
    double _lastRefreshTime;
    CDUnknownBlockType _completeBlock;
}

+ (id)baseResourceDir;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property _Bool isFaceDetectionStarted; // @synthesize isFaceDetectionStarted=_isFaceDetectionStarted;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) MMWeEffectManager *weeffectManager;
- (id)getActualResourcePath;
- (id)getTemplateResourcePath;
- (void)stopWeEffectManagerIfNeed;
- (void)startWeEffectManagerIfNeed;
- (_Bool)applyLiveFaceDetectMaterial;
- (void)onWeEffectManagerDestroyed:(id)arg1;
- (void)onWeEffectProcessedRenderFrameRefresh:(id)arg1;
- (_Bool)startFaceDetectionWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)initWithTaskId:(id)arg1;

@end

