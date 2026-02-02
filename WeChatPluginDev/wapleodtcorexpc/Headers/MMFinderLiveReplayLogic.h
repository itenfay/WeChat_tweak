//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveReplayTask, MMFinderLiveReplayTaskId, NSData, NSString;
@protocol MMFinderLiveReplayLogicDelegate;

@interface MMFinderLiveReplayLogic : NSObject
{
    _Bool _isFetchingPreviewThumb;
    _Bool _hasFetchedPreviewThumb;
    unsigned int _continueFailCnt;
    id <MMFinderLiveReplayLogicDelegate> _logicDelegate;
    MMFinderLiveReplayTaskId *_replayTaskId;
    NSData *_lastPreviewThumbReqBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int continueFailCnt; // @synthesize continueFailCnt=_continueFailCnt;
@property(nonatomic) _Bool hasFetchedPreviewThumb; // @synthesize hasFetchedPreviewThumb=_hasFetchedPreviewThumb;
@property(nonatomic) _Bool isFetchingPreviewThumb; // @synthesize isFetchingPreviewThumb=_isFetchingPreviewThumb;
@property(retain, nonatomic) NSData *lastPreviewThumbReqBuffer; // @synthesize lastPreviewThumbReqBuffer=_lastPreviewThumbReqBuffer;
@property(retain, nonatomic) MMFinderLiveReplayTaskId *replayTaskId; // @synthesize replayTaskId=_replayTaskId;
@property(nonatomic) __weak id <MMFinderLiveReplayLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)clearFetchingPreviewThumbParams;
- (void)inner_getReplayPreviewThumbList;
- (void)getReplayPreviewThumbList;
- (void)fetchDetailNewDataItem;
- (void)enableCurrentLiveReplay:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)enableCurrentLiveReplay:(_Bool)arg1 scene:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)enableCurrentLiveReplay:(_Bool)arg1 isDelete:(_Bool)arg2 scene:(long long)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)saveLastLiveInfo;
- (_Bool)getLiveInfoWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)clearLive;
@property(readonly, nonatomic) MMFinderLiveReplayTask *replayLiveTask;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

