//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MassSendBodyContainerView, MassSendMessageViewModel, NSString, UIButton, UILabel, UIView;

@interface MassSendMessageCellView
{
    MassSendBodyContainerView *m_bodyContainerView;
    UIView *m_bodyView;
    UIView *m_separatorView;
    UILabel *m_receiverLabel;
    UIButton *m_sendAgainBtn;
    UIView *m_maskImageView;
}

- (void).cxx_destruct;
- (void)animateShowComponentWithDuration:(double)arg1;
- (void)showComponent;
- (void)hideComponent;
- (void)onDelete:(id)arg1;
- (void)onCopy:(id)arg1;
- (id)getViewController;
- (void)onRemoveRTCV;
- (void)onSingleTapRTCV;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (id)getCurrentViewController;
- (void)onRichTextViewExit;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)stopAudioPlaying;
- (void)onLongPressWithRichTextCoverView;
- (void)onLongTouch:(struct CGPoint)arg1;
- (void)onSendAgain:(id)arg1;
- (void)onFinderClicked;
- (void)onEmoticonClicked;
- (void)onVoiceClicked;
- (void)onVideoClicked;
- (void)onImageClicked;
- (id)FormFinderContentView;
- (id)FormEmoticonView;
- (id)FormVideoView;
- (id)FormVoiceView;
- (id)FormImageView;
- (id)FormTextView;
- (void)initBodyView;
- (void)initBodyContainerView;
- (void)initMaskImageView;
- (void)initSendAgainButton;
- (void)initReceiverLabel;
- (void)onAppear;
- (void)showOperationMenu;
- (void)highlightMsgAnimated;
- (void)setHighlighted:(_Bool)arg1;
- (id)displayViewForImageBrowser;
- (void)layoutContentView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MassSendMessageViewModel *viewModel; // @dynamic viewModel;

@end

