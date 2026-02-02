//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSString;

@interface MMLiveGameJoinTeamTipsView
{
    MMFinderLiveTaskId *_taskId;
    CDUnknownBlockType _showAction;
    CDUnknownBlockType _reloadAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reloadAction; // @synthesize reloadAction=_reloadAction;
@property(copy, nonatomic) CDUnknownBlockType showAction; // @synthesize showAction=_showAction;
@property(readonly, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)dismissWithAnimation;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimationFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)updateWithTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 descAccessibility:(id)arg5;
- (id)liveTask;
- (void)fetchGameTeamInfo;
- (void)prepareDataWithShowAction:(CDUnknownBlockType)arg1 reloadAction:(CDUnknownBlockType)arg2;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

