//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveBatchRewardWeVisionRenderTask, MMFinderLiveTaskId, NSMutableArray, NSString;
@protocol MMFinderLiveBatchRewardAnimationRenderingDelegate;

@interface MMFinderLiveBatchRewardAnimationWeVisionRenderer : NSObject
{
    id <MMFinderLiveBatchRewardAnimationRenderingDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    NSMutableArray *_renderTaskQueue;
    NSMutableArray *_waitingTaskQueue;
    MMFinderLiveBatchRewardWeVisionRenderTask *_currentRenderTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveBatchRewardWeVisionRenderTask *currentRenderTask; // @synthesize currentRenderTask=_currentRenderTask;
@property(retain, nonatomic) NSMutableArray *waitingTaskQueue; // @synthesize waitingTaskQueue=_waitingTaskQueue;
@property(retain, nonatomic) NSMutableArray *renderTaskQueue; // @synthesize renderTaskQueue=_renderTaskQueue;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveBatchRewardAnimationRenderingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeCurrentTaskRenderingOfAnimationWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)startRenderingOfTask:(id)arg1;
- (id)liveTask;
- (id)getActualLuaScriptFilePath;
- (id)getActualLuaScriptFolderPath;
- (id)getActualTemplateResourcePath;
- (id)getTemplateResourcePath;
- (void)initActualResDir;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onCurrentTaskAnimationEnd;
- (_Bool)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)tryNextRenderTask;
- (void)addBatchRewardAnimationWithGift:(id)arg1 comboId:(id)arg2 animationImgNum:(unsigned int)arg3;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

