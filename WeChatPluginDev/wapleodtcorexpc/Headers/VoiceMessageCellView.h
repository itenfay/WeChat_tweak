//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CTRichTextView, MMBadgeView, MMTimer, MMUIActivityIndicatorView, NSArray, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, VoiceMessageViewModel;

@interface VoiceMessageCellView
{
    UIView *m_translateView;
    UILabel *m_secLabel;
    UIImageView *m_playingImageView;
    UIImageView *m_recordingView;
    MMBadgeView *m_unreadImageView;
    UIButton *m_quickTransTipButton;
    UIButton *m_resumePlayButton;
    CTRichTextView *m_oTranslateTextLabel;
    CTRichTextView *m_translatingTextLabel;
    UIView *m_translatingView;
    NSArray *m_translateMenus;
    MMTimer *m_animationTimer;
    UIView *m_textTranslateView;
    RichTextView *m_textTranslateTextView;
    MMUIActivityIndicatorView *m_textTranslateLoadingView;
    UIImageView *m_textTranslateSuccessIconView;
    UILabel *m_textTranslateSuccessLabel;
    NSArray *m_textTranslateMenus;
    _Bool m_isTranslating;
    _Bool m_isAnimatingTranslateText;
}

- (void).cxx_destruct;
- (id)additionalCustomActions;
- (unsigned long long)accessibilityTraits;
- (void)onEndPlayingMsg:(id)arg1 autoPlayEnabled:(_Bool)arg2;
- (void)onBeginPlayingMsg:(id)arg1 autoPlayEnabled:(_Bool)arg2;
- (void)onExtChatBackgroundChanged:(id)arg1;
- (void)OnVoiceTranslateFail:(id)arg1;
- (void)OnVoiceTranslateSuccess:(id)arg1;
- (void)OnVoiceTranslateBegin:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)doTranslateTextLineAnimation:(id)arg1 lineNumber:(int)arg2;
- (void)animateSetTranslateText:(id)arg1;
- (void)setTranslateText:(id)arg1;
- (void)setTranslatingText:(id)arg1;
- (void)updateTranslateText;
- (void)stopTextAnimation;
- (void)startTextAnimation;
- (void)startTranslatingAnimation;
- (id)getViewController;
- (id)getMediaWrap;
- (void)onWindowHide;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)getVoicePath;
- (void)updateVoiceLength;
- (void)updateSecLabelColor;
- (void)stopPlaying;
- (void)startPlaying;
- (_Bool)checkVoiceState:(int)arg1;
- (_Bool)responseUserClick;
- (void)onClick;
- (void)onTouchUpInside;
- (_Bool)isTouchInView:(id)arg1;
- (_Bool)shouldLayoutIfNeeded;
- (void)showVoiceTransView;
- (void)onVoiceTrans:(id)arg1;
- (void)onVoiceTransClose:(id)arg1;
- (void)onVoiceTransStop:(id)arg1;
- (void)onSwitch:(id)arg1;
- (_Bool)canShowVoiceTransMenu;
- (id)operationMenuItems;
- (void)onLongTouch;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)addTranslateViewMenus;
- (void)handleTranslateMenuWillHideMenuNotification:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (void)reportTranslateClickAction:(unsigned int)arg1;
- (void)onCopyTranslate:(id)arg1;
- (void)onDoubleTapTranslateView:(id)arg1;
- (void)onTapTranslateView:(id)arg1;
- (void)onLongPressTranslateView:(id)arg1;
- (id)displayViewForImageBrowser;
- (void)initTranslateTextLabel;
- (void)initTranslateView;
- (void)initTranslatingTextLabel;
- (void)initTranslatingView;
- (id)createTranslateView;
- (id)createTranslateTextLabel;
- (double)resumeButtonWidth;
- (void)onClickResumePlayButton:(id)arg1;
- (void)updateResumePlayButtonPosition;
- (void)updateResumePlayButtonColor;
- (void)initResumePlayButton;
- (double)translateButtonWidth;
- (void)animateHiddenQuickTransTips;
- (void)animateShowQuickTransTips;
- (void)onVoiceTransByQuickButton:(id)arg1;
- (void)updateQuickTransTipButtonPosition;
- (void)updateQuickTransTipButtonColor;
- (void)initQuickTransTipButton;
- (double)redDotWidth;
- (void)initUnreadView;
- (void)initRecordingView;
- (void)initPlayingImageView;
- (void)initSecLabel;
- (void)onAppear;
- (void)updateStatus;
- (void)layoutContentView;
- (id)initWithViewModel:(id)arg1;
- (void)onReportTextTranslationErrorWithReason:(unsigned int)arg1;
- (void)onReportTextTranslationErrorWithMenuItemView:(id)arg1;
- (void)onReportTextTranslationError:(id)arg1;
- (void)onSetTranslateLanguage:(id)arg1;
- (void)translateMsg;
- (void)onClickTextTranslate:(id)arg1;
- (void)onForwardTextTranslate:(id)arg1;
- (void)onFavoriteTextTranslate:(id)arg1;
- (void)onCopyTextTranslate:(id)arg1;
- (void)onTapTextTranslateView:(id)arg1;
- (void)onLongPressTextTranslateView:(id)arg1;
- (void)onDoubleTapTextTranslateView:(id)arg1;
- (void)addTextTranslateViewMenus;
- (void)setTextTranslateText;
- (void)updateTextTranslateSuccessView;
- (void)updateTextTranslateLoadingView;
- (void)initTextTranslateTextView;
- (void)initTextTranslateView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VoiceMessageViewModel *viewModel; // @dynamic viewModel;

@end

