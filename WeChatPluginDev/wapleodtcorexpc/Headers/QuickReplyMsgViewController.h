//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, QuickReplyMsgNotifyView, QuickReplyMsgReporter, QuickReplyNotifyItem, UIView;
@protocol QuickReplyMsgViewControllerDelegate;

@interface QuickReplyMsgViewController
{
    _Bool _isPreviewEnable;
    id <QuickReplyMsgViewControllerDelegate> _delegate;
    QuickReplyMsgReporter *_reporter;
    long long _notifyViewStyle;
    QuickReplyMsgNotifyView *_msgPushNotifyView;
    UIView *_blurBgView;
    MMTimer *_autoDismissTimer;
    double _dismissTimeout;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPreviewEnable; // @synthesize isPreviewEnable=_isPreviewEnable;
@property(nonatomic) double dismissTimeout; // @synthesize dismissTimeout=_dismissTimeout;
@property(retain, nonatomic) MMTimer *autoDismissTimer; // @synthesize autoDismissTimer=_autoDismissTimer;
@property(retain, nonatomic) UIView *blurBgView; // @synthesize blurBgView=_blurBgView;
@property(retain, nonatomic) QuickReplyMsgNotifyView *msgPushNotifyView; // @synthesize msgPushNotifyView=_msgPushNotifyView;
@property(nonatomic) long long notifyViewStyle; // @synthesize notifyViewStyle=_notifyViewStyle;
@property(nonatomic) __weak QuickReplyMsgReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <QuickReplyMsgViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isEmptyMessage:(id)arg1;
- (void)resetTimer:(double)arg1;
- (void)markMessageRead:(id)arg1;
- (void)showFinishTipsAndDismiss:(id)arg1;
- (void)onNotifyViewNotifyPushClose:(id)arg1;
- (void)onNotifyViewTemporaryClose:(id)arg1;
- (void)onNotifyViewShowMoreSetting:(id)arg1 isShow:(_Bool)arg2;
- (void)onNotifyViewShowSettingBtn:(id)arg1;
- (void)onNotifyViewJumpToSetting:(id)arg1;
- (void)onNotifyViewJumpToChat:(id)arg1;
- (void)onNotifyViewReadMsg:(id)arg1;
- (void)onNotifyViewEndDraging;
- (void)onNotifyViewBeginDraging;
- (void)onNotifyViewDismissSelf;
- (void)onTouchAtNoneMsgArea;
- (_Bool)shouldHandleTouchAtPoint:(struct CGPoint)arg1;
- (void)onStrongNotificationShow;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;
- (void)initUI;
- (void)relayoutUI;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) QuickReplyNotifyItem *currNotifyItem;
- (void)showBlurBgView;
- (_Bool)shouldHandleStatusBarAppearance;
- (void)dismissWithJumpToChat:(_Bool)arg1;
- (void)dismiss;
- (void)viewDidLoad;
- (void)showQuickReplyItem:(id)arg1 dismissTimeout:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

