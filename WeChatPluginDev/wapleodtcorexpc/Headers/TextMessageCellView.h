//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CommonMessageCellView, MMInputMsgReferView, MMTipsViewController, MMUIActivityIndicatorView, NSArray, NSDate, NSString, NavigateLogicController, RichTextView, TextFloatViewController, TextMessageViewModel, UIButton, UIImageView, UILabel, UIView, WCUIActionSheet;

@interface TextMessageCellView
{
    RichTextView *m_richTextView;
    MMTipsViewController *m_oTranslateIntroView;
    WCUIActionSheet *m_uiActionSheet;
    NavigateLogicController *m_navigationLogic;
    UIView *m_translateView;
    RichTextView *m_translateRichTextView;
    MMUIActivityIndicatorView *m_oTranslateLoadingView;
    UILabel *m_translateSuccessLabel;
    UIImageView *m_translateSuccessIconView;
    NSArray *m_translateMenus;
    TextFloatViewController *m_oFloatViewController;
    TextFloatViewController *m_oFloatViewControllerForReferMsg;
    CommonMessageCellView *m_referHandler;
    UIButton *m_moreButton;
    UIButton *m_autoTransButton;
    _Bool m_bClickLink;
    MMInputMsgReferView *m_msgReplyView;
    UIButton *_jumpGroupNoticeBtn;
    NSDate *_visibleDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *visibleDate; // @synthesize visibleDate=_visibleDate;
@property(retain, nonatomic) UIButton *jumpGroupNoticeBtn; // @synthesize jumpGroupNoticeBtn=_jumpGroupNoticeBtn;
@property(retain, nonatomic) MMInputMsgReferView *msgReplyView; // @synthesize msgReplyView=m_msgReplyView;
- (_Bool)isGroupNotice;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)notifyAutoTranslateStop;
- (void)notifyAutoTranslateStart;
- (void)onWCGroupLatestRoomDescChanged:(long long)arg1 room:(id)arg2;
- (void)menuResponder:(id)arg1 didCopyText:(id)arg2;
- (id)getCurrentMessageWrap;
- (id)getRichTextViewForDelegate;
- (id)delegateView;
- (_Bool)isEmojiLocation:(unsigned long long)arg1 bStart:(_Bool)arg2;
- (float)getLineHeight;
- (long long)getTouchIndexWithTouchPoint:(struct CGPoint)arg1 FrontCursor:(_Bool)arg2;
- (struct _NSRange)getTouchRangeWithTouchPoint:(struct CGPoint)arg1;
- (id)getTextString;
- (id)getStringWithRange:(struct _NSRange)arg1;
- (id)getSelectRectsWithRange:(struct _NSRange)arg1;
- (void)statCopyText:(id)arg1;
- (void)onClickAsRefer;
- (void)handleReportExposureForReferMsg:(id)arg1 timeIntervale:(long long)arg2;
- (void)handleTapForReferMsg:(id)arg1;
- (void)handleTapReferMessage;
- (id)getOperateMenuItem;
- (_Bool)addCoverViewToControllerTable;
- (_Bool)highLightSearchKeyWords:(id)arg1;
- (_Bool)pressIntoSelectCopyStatusWithTranlateText:(struct CGPoint)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onSearchWeAppBoxClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onAddressClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSearchTopicClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)longPressOnLink:(id)arg1;
- (void)onWeAppMPShortLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onBankCardNumberClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onBankCardNumberLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkHighlighted:(_Bool)arg1 url:(id)arg2 frame:(struct CGRect)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (id)additionalCustomActions;
- (void)accessibilityElementDidBecomeFocused;
- (void)updateCellViewAccessibility;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onFloatPreviewMenuSearch:(id)arg1;
- (void)onFloatPreviewMenuForward;
- (void)onFloatPreviewMenuSelectAll;
- (void)onFloatPreviewMenuCopy:(id)arg1;
- (void)onFloatPreviewMenuHidden;
- (void)onFloatPreviewLongPress;
- (id)getViewController;
- (id)getMediaWrap;
- (void)onWindowHide;
- (void)onClickMoreButton:(id)arg1;
- (void)showFloatPreviewWithForceUseOriginText:(_Bool)arg1;
- (id)createTextFloatView;
- (void)showFloatPreviewForContentText;
- (void)onTouchUpInside;
- (void)onLongTouch:(struct CGPoint)arg1;
- (void)onTouchDownRepeat;
- (_Bool)autoHighlight;
- (_Bool)supportDoubleTap;
- (void)onFingertipSearch;
- (void)onMenuHide;
- (void)onDelete:(id)arg1;
- (void)onShowMsgReplyMenuItem:(id)arg1;
- (void)onSchedule:(id)arg1;
- (void)onMore:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onReportTranslationErrorWithReason:(unsigned int)arg1;
- (void)onReportTranslationErrorWithMenuItemView:(id)arg1;
- (void)onReportTranslationError:(id)arg1;
- (void)onSetTranslateLanguage:(id)arg1;
- (void)translateMsg;
- (void)onTranslateMsg:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onAppButtonClicked:(id)arg1;
- (void)onSolitaire:(id)arg1;
- (_Bool)canShowTranslateMenuItem;
- (id)getFingertipSearchItem;
- (id)operationMenuItems;
- (_Bool)canShowRevokeMsgMenuItem;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCopyLinkText:(id)arg1;
- (_Bool)translatePreventLongPressLink;
- (_Bool)preventLongPressLink;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)onClickAutoTransButton;
- (void)onClickFullBtn;
- (void)initAutoTransButton;
- (void)onReturnToOriginalMsg;
- (void)onLongPressMsgReplyView:(id)arg1;
- (void)onTapMsgReplyView:(id)arg1;
- (void)initMsgReplyView;
- (void)initMoreButton;
- (void)setRichTextViewBgColor:(id)arg1;
- (void)initRichTextView;
- (id)displayViewForRefer;
- (void)onDisappear;
- (void)willMoveToWindow:(id)arg1;
- (void)setNeedsDisplay;
- (double)contentViewCenterY;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateStatus;
- (void)updateContentOffset;
- (_Bool)isNetworkAvailable;
- (void)onClearTranslateCache:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCopyTranslate:(id)arg1;
- (void)handleTranslateMenuWillHideMenuNotification:(id)arg1;
- (void)addTranslateViewMenus;
- (void)onDoubleTapTranslateView:(id)arg1;
- (void)onTapTranslateView:(id)arg1;
- (void)setTranslateText;
- (void)updateTranslateSuccessView;
- (void)updateTranslateStatusButton;
- (void)initTranslateRichTextView;
- (void)initTranslateView;
- (void)updateHoverStyle;
- (void)layoutContentView;
- (id)getRichTextView;
- (id)getMsgReplyView;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TextMessageViewModel *viewModel; // @dynamic viewModel;

@end

