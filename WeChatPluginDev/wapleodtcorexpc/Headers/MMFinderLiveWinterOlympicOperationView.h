//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveActivityTask, MMFinderLiveActivityTaskId, MMFinderLiveOlympicsOperationViewModel;
@protocol MMFinderLiveWinterOlympicOperationViewDelegate;

@interface MMFinderLiveWinterOlympicOperationView
{
    id <MMFinderLiveWinterOlympicOperationViewDelegate> _operationDelegate;
    MMFinderLiveOlympicsOperationViewModel *_olympicsOperationViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveOlympicsOperationViewModel *olympicsOperationViewModel; // @synthesize olympicsOperationViewModel=_olympicsOperationViewModel;
@property(nonatomic) __weak id <MMFinderLiveWinterOlympicOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)prepareForCertificateHiding;
- (void)prepareForCertificateShowing;
- (void)startParticipateAnimation:(id)arg1 backgroundFadeInDelay:(double)arg2;
- (void)bindToViewModel:(id)arg1;
- (void)layoutLotteryWidgets;
- (void)createSendingMoreBubbleViewIfNeeded;
- (void)createRewardRecipientSelectionViewIfNeeded;
- (void)createRewardGiftRecievingAnimationViewIfNeeded;
- (void)createFollowConfirmIfNeeded;
- (void)createAndLayoutGameFrameSetViewsIfNeed;
- (void)layoutOnlineStateView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateSyncActivityCommentResp:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
@property(readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
- (void)layoutUI;
- (void)removeCertificateBackgroundAndParticipateAnimation;
- (void)dealloc;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(_Bool)arg2;

@end

