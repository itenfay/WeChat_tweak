//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomAddLogicController, EmoticonMessageViewModel, MMEmoticonView, MMUIActivityIndicatorView, NSString, UIImageView, UILabel, UIView;

@interface EmoticonMessageCellView
{
    UIView *m_rewardTips;
    UILabel *m_downloadFailRetryLabel;
    UIImageView *m_downloadFailedImageView;
    MMEmoticonView *m_emoticonView;
    MMUIActivityIndicatorView *m_imageLoadingView;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
}

- (void).cxx_destruct;
- (void)onClickAsRefer;
- (id)getViewController;
- (void)showFinishedTipsWithWording:(id)arg1;
- (void)setCanShowRewardTips:(_Bool)arg1;
- (void)onClickStopShowTipsButton:(id)arg1;
- (void)showDetailPageWithNeedScrollToBottom:(_Bool)arg1 extrance:(long long)arg2;
- (void)onGoToRewardInDetailPage:(id)arg1;
- (void)onTakeCameraFollow:(id)arg1;
- (void)onShowRelatedEmoticon:(id)arg1;
- (void)startDownloadImageIsFirstTime:(_Bool)arg1;
- (void)onLongTouch;
- (void)onClick;
- (void)onTouchUpInside;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onShowDetailPage:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onSaveEmoticon:(id)arg1;
- (id)operationMenuItems;
- (void)showDownloadFailView;
- (void)showLoadingView;
- (void)initRewardTipsViewWithMaxSize:(double)arg1;
- (void)initEmoticonView;
- (struct CGRect)showRectForMenuController;
- (void)onAppear;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) EmoticonMessageViewModel *viewModel; // @dynamic viewModel;

@end

