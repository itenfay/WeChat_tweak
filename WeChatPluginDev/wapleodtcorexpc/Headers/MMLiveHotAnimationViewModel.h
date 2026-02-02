//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveHotCommentAnimationInfoList, MMFinderLiveResDownloadManager, MMFinderLiveTaskId, MMLiveQueue, NSMutableDictionary, NSString, PAGView;
@protocol MMLiveHotAnimationViewPresenter;

@interface MMLiveHotAnimationViewModel : NSObject
{
    _Bool _currentAnimationLandscape;
    PAGView *_curHotCommentAnimationView;
    id <MMLiveHotAnimationViewPresenter> _viewPresenter;
    MMFinderLiveResDownloadManager *_animationDownLoadManager;
    MMFinderLiveTaskId *_taskId;
    FinderLiveHotCommentAnimationInfoList *_animationInfoList;
    NSMutableDictionary *_processedAnimationInfoDic;
    MMLiveQueue *_animationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(retain, nonatomic) NSMutableDictionary *processedAnimationInfoDic; // @synthesize processedAnimationInfoDic=_processedAnimationInfoDic;
@property(retain, nonatomic) FinderLiveHotCommentAnimationInfoList *animationInfoList; // @synthesize animationInfoList=_animationInfoList;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveResDownloadManager *animationDownLoadManager; // @synthesize animationDownLoadManager=_animationDownLoadManager;
@property(nonatomic) _Bool currentAnimationLandscape; // @synthesize currentAnimationLandscape=_currentAnimationLandscape;
@property(nonatomic) __weak id <MMLiveHotAnimationViewPresenter> viewPresenter; // @synthesize viewPresenter=_viewPresenter;
@property(nonatomic) __weak PAGView *curHotCommentAnimationView; // @synthesize curHotCommentAnimationView=_curHotCommentAnimationView;
- (id)liveTask;
- (void)onAnimationRepeat:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationStart:(id)arg1;
- (void)onFinderLive:(id)arg1 receiveHotAnimation:(id)arg2;
- (void)realPlayAnimationWith:(id)arg1;
- (id)loadPAGFileWith:(id)arg1;
- (id)findInfoForResource:(id)arg1;
- (void)tryToPlayNextAnimation;
- (void)initAnimationResource;
- (void)initData;
- (void)unregisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 animationInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

