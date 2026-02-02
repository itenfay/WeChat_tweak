//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UIScrollView, UIView, WCDataItem, WCMomentsClickHandler, WCUserComment;

@interface WCTextDetailViewController
{
    UIScrollView *_bgScrollView;
    WCDataItem *_dataItem;
    NSString *_copyedText;
    RichTextView *_contentDescView;
    NSString *_contentDesc;
    RichTextView *m_translateView;
    UIButton *m_translateStatusView;
    UIView *m_translateLineView;
    int eTranslateStatus;
    WCUserComment *m_userComment;
    _Bool m_isAdComment;
    unsigned int m_scene;
    WCMomentsClickHandler *_clickHandler;
}

+ (id)makeDataWrapForWCTranslate:(id)arg1;
- (void).cxx_destruct;
- (_Bool)canShowFavBtn;
- (id)getContentDesc;
- (id)getSnsTranslateDataWrap;
- (_Bool)isCommentTranslateDataWrap:(id)arg1;
- (_Bool)isTimelineTranslateDataWrap:(id)arg1;
- (_Bool)isCorrectTranslateDataWrap:(id)arg1;
- (void)reportMenuAction:(long long)arg1;
- (void)momentsContactMgr:(id)arg1 didUpdateContact:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2;
- (double)initContentTranslateView:(id)arg1 andSuperScrollView:(id)arg2;
- (void)onChangeTranslateLanguage:(id)arg1;
- (void)onCancelTranslateInTranslatedArea:(id)arg1;
- (void)onCancelTranslate:(id)arg1;
- (void)_doTranslate;
- (void)onTranslate:(id)arg1;
- (id)GetTranslateSnsKeyID;
- (void)onSearchTopicClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 isWord:(_Bool)arg3 withView:(id)arg4;
- (void)onExpose:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)onCopy:(id)arg1;
@property(readonly, nonatomic) WCMomentsClickHandler *clickHandler; // @synthesize clickHandler=_clickHandler;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)reloadView;
- (void)setupTitle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCommentUserInfo:(id)arg1 fromDataItem:(id)arg2 isAdComment:(_Bool)arg3;
- (id)initWithDataItem:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

