//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, NSMutableArray, NSString, QuickReplyMsgReporter, QuickReplyMsgViewController;

@interface QuickReplyMsgMgr
{
    _Bool _recordingUnreadMsg;
    _Bool _isShowingNotifyView;
    QuickReplyMsgViewController *_replyMsgViewController;
    NSString *_replyingSession;
    long long _notifyViewStyle;
    NSMutableArray *_missedUnreadMsgs;
    NSMutableArray *_pendingNotifyItems;
    QuickReplyMsgReporter *_reporter;
    MMPageSheetAdapter *_pageSheetAdapter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) QuickReplyMsgReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSMutableArray *pendingNotifyItems; // @synthesize pendingNotifyItems=_pendingNotifyItems;
@property(retain, nonatomic) NSMutableArray *missedUnreadMsgs; // @synthesize missedUnreadMsgs=_missedUnreadMsgs;
@property(nonatomic) long long notifyViewStyle; // @synthesize notifyViewStyle=_notifyViewStyle;
@property(nonatomic) _Bool isShowingNotifyView; // @synthesize isShowingNotifyView=_isShowingNotifyView;
@property(nonatomic) _Bool recordingUnreadMsg; // @synthesize recordingUnreadMsg=_recordingUnreadMsg;
@property(retain, nonatomic) NSString *replyingSession; // @synthesize replyingSession=_replyingSession;
@property(retain, nonatomic) QuickReplyMsgViewController *replyMsgViewController; // @synthesize replyMsgViewController=_replyMsgViewController;
- (void)onProfileChange;
- (void)onExptItemListChange;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onMsgPageSheetEnterFullscreen:(id)arg1;
- (void)onMsgPageSheetMarkUnread:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetWillAppear:(id)arg1;
- (_Bool)isOutdateMsg:(id)arg1;
- (id)getCurrentTopViewController;
- (long long)currNotifyViewStyle;
- (_Bool)isReplying;
- (_Bool)canShowPushForContact:(id)arg1 msgWrap:(id)arg2;
- (_Bool)canShowPushAtViewController:(id)arg1 sessionUserName:(id)arg2;
- (_Bool)canShowPushAtCurrentPage:(id)arg1;
- (void)removePendingMsgsWithUsername:(id)arg1;
- (void)requestCanShowMsgDetail:(CDUnknownBlockType)arg1;
- (void)handleMissedUnreadMsgWithDetailSetting:(long long)arg1;
- (void)handleMissedUnreadMsg;
- (_Bool)recordUnreadMsgAtReplying:(id)arg1;
- (void)onNewSyncEnterSession:(id)arg1 createTime:(unsigned int)arg2;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onSettingFinderUnreadMsgChange:(_Bool)arg1;
- (void)onQuickReplyOpenNotifySetting;
- (void)onQuickReplyMsgDismissed:(_Bool)arg1;
- (void)reportSystemSetting;
- (_Bool)isNotifySettingClose;
- (long long)quickReplyDetailSetting;
- (_Bool)isBannerContentSettingEnable;
- (_Bool)isNewBannerSettingEnable;
- (_Bool)isNotifyTemporaryClosed;
- (void)clearTemporaryDisableSetting;
- (void)disableMessageNotifyOneHouer;
- (void)disableMessageNotifyInToday;
- (void)disableMessageNotify:(_Bool)arg1;
- (void)handleShowPageSheetSession:(id)arg1;
- (void)showPageSheetSession:(id)arg1 fromViewController:(id)arg2 withPageSheetDelegate:(id)arg3;
- (void)showPageSheetSession:(id)arg1 fromViewController:(id)arg2;
- (void)showPageSheetWithLogic:(id)arg1 fromViewController:(id)arg2;
- (void)showPageSheetSession:(id)arg1;
- (void)showQuickReplyItem:(id)arg1 timeout:(double)arg2;
- (void)showQuickReplyItem:(id)arg1;
- (void)showQuickReplyMsg:(id)arg1 message:(id)arg2 timeout:(double)arg3;
- (void)stopRecordUnreadMsg;
- (void)startRecordUnreadMsgWithBizType:(long long)arg1 bizInfo:(id)arg2 style:(long long)arg3;
- (void)startRecordUnreadMsg;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

