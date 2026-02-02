//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavRecordReferView, MMTipsViewController, MMUIActivityIndicatorView, NSArray, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView;

@interface FavRecordTextNodeView
{
    RichTextView *m_textDescLabel;
    MMTipsViewController *m_oTranslateIntroView;
    UIView *m_translateView;
    RichTextView *m_translateRichTextView;
    MMUIActivityIndicatorView *m_oTranslateLoadingView;
    UILabel *m_translateSuccessLabel;
    UIImageView *m_translateSuccessIconView;
    NSArray *m_translateMenus;
    UIButton *m_warningBtn;
    FavRecordReferView *m_referView;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)onLongPressMsgReplyView;
- (void)onTapMsgReferView;
- (void)onTranslateRecordItemMessageChanged:(id)arg1;
- (void)onTranslateRecordItemMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onSearchTopicClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getCurrentViewController;
- (void)onRichTextViewExit;
- (id)getViewController;
- (void)onSingleTapRTCV;
- (_Bool)shouldShowTopicText;
- (_Bool)translatePreventLongPressLink;
- (void)updateBkgImage:(_Bool)arg1 andView:(id)arg2;
- (void)updateBkgImageToNormal;
- (void)updateBkgImage:(_Bool)arg1;
- (void)hideMenu;
- (void)onWebSearch:(id)arg1;
- (void)onSetTranslateLanguage:(id)arg1;
- (void)translateRecordItem;
- (void)onTranslateRecordItem:(id)arg1;
- (void)showTranslateViewMenus;
- (_Bool)isShowTranslateMenu;
- (id)getMenuItems;
- (void)showMenu;
- (void)setTextSearchEntity;
- (void)onFavoriteTranslate:(id)arg1;
- (void)onTextFavorite:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onCopyTranslate:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onClickTransFeedback:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onMenuControllerWillHide:(id)arg1;
- (id)getThumbImageView;
- (void)onTouchCancel;
- (id)getMMTranslateMenuItems;
- (void)setTranslateSearchEntity;
- (id)getMMMenuItems;
- (void)onLongPressWithRchTextCoverView;
- (void)onLongTouch;
- (void)removeRichTextCoverView;
- (void)onLongPressWithoutRchTextCoverView;
- (void)onClickAsRefer;
- (void)onTouchUpInside;
- (void)initMsgReferView;
- (void)initTextDescLabel;
- (void)addContentSubView;
- (_Bool)isNetworkAvailable;
- (id)getTranslateMenuItems;
- (void)setTranslateText;
- (void)updateTranslateSuccessView;
- (void)updateTranslateStatusButton;
- (void)initTranslateRichTextView;
- (void)initTranslateView;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

