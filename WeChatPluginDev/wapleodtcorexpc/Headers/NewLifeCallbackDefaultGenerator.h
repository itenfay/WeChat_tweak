//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface NewLifeCallbackDefaultGenerator
{
    NSMutableSet *_observerRedDotTipsPaths;
    NSMutableSet *_updatedRedDotTipsPaths;
    NSString *_command;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(retain, nonatomic) NSMutableSet *updatedRedDotTipsPaths; // @synthesize updatedRedDotTipsPaths=_updatedRedDotTipsPaths;
@property(retain, nonatomic) NSMutableSet *observerRedDotTipsPaths; // @synthesize observerRedDotTipsPaths=_observerRedDotTipsPaths;
- (void)onLiveTask:(id)arg1 liveClosed:(_Bool)arg2;
- (void)onCdnUploadEndCallback:(id)arg1;
- (void)onCdnUploadProgressCallback:(id)arg1;
- (void)onGetCreatorCenterInfoCallbackToFlutter:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onHandleAddContactNotify:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onNewBrandContact:(id)arg1;
- (void)onSelectLinkCallbackToFlutter:(id)arg1;
- (void)onSetEnvelopeUrlCallbackToFlutter:(id)arg1;
- (void)onSendNewLifeStreamNotifyEventToFlutter;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onImagePreviewControllerHideAnimation;
- (void)onImagePreviewControllerShowAnimation;
- (void)onNewLifePostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)arg1;
- (void)onNewLifePostSessionStartUpload:(id)arg1;
- (void)onNewLifePostSessionStartCompress:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)generatePostStateChangeCallback:(id)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onJumpInfoStatusChangeForFeedId:(id)arg1 scene:(unsigned int)arg2 jumpInfos:(id)arg3;
- (void)onFollowStatusChangeForFinderUsername:(id)arg1 isFollow:(_Bool)arg2;
- (void)onFeedStatusChangeForFeedId:(unsigned long long)arg1 source:(unsigned int)arg2 components:(unsigned int)arg3 monotonicData:(id)arg4;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)arg1;
- (void)onFinderDataItem:(id)arg1 updateFavStateByExtention:(_Bool)arg2;
- (void)onSelectMusicCallbackToFlutter:(id)arg1;
- (void)onMentionActionCallbackToFlutter:(id)arg1;
- (void)onSendSwitchTabEventToFlutter:(_Bool)arg1;
- (void)onSendFlowDataToFlutter:(id)arg1;
- (void)registerListenerForCommand:(id)arg1 keyList:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

