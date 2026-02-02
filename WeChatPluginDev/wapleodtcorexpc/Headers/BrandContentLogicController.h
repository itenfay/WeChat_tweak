//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandActionReportLogicController, BrandDeviceConnectLogicController, BrandStyleUILogicController, BrandTemplateMsgAuthLogic, NSMutableArray, NSMutableSet, NSString, TemplateMsgExposeLogic, TipsView;

@interface BrandContentLogicController
{
    TipsView *m_tipsView;
    BrandStyleUILogicController *m_uiLogicController;
    BrandActionReportLogicController *m_reportLogicController;
    BrandDeviceConnectLogicController *m_connectLogicController;
    _Bool m_isLastInMenuMode;
    unsigned long long m_lastInputMode;
    unsigned long long m_lastPoisitionMode;
    unsigned long long m_lastContentMode;
    _Bool m_shouldRecordToolViewStatus;
    _Bool m_isShowKeyboardImmediately;
    _Bool m_hasPreloadKFWorkerWeApp;
    unsigned int m_stat_timeStart;
    unsigned int m_stat_totalUnreadCount;
    unsigned int m_stat_massSendUnreadCount;
    unsigned int m_stat_templateUnreadCount;
    unsigned int m_stat_latestMsgType;
    unsigned int m_stat_latestMsgDuration;
    unsigned int m_stat_indexInSessionList;
    TemplateMsgExposeLogic *m_exposeLogic;
    BrandTemplateMsgAuthLogic *m_subscrMsgLogic;
    _Bool m_hasUnfoldHistoryMessage;
    _Bool m_hasSetInputReferMsg;
    NSMutableSet *_expandedMsgLocalIDSet;
    NSMutableArray *_needResetAlphaCellViewList;
    NSMutableSet *_expandSystemMsgSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *expandSystemMsgSet; // @synthesize expandSystemMsgSet=_expandSystemMsgSet;
@property(retain, nonatomic) NSMutableArray *needResetAlphaCellViewList; // @synthesize needResetAlphaCellViewList=_needResetAlphaCellViewList;
@property(retain, nonatomic) NSMutableSet *expandedMsgLocalIDSet; // @synthesize expandedMsgLocalIDSet=_expandedMsgLocalIDSet;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onExitRoom;
- (void)onWillEnterRoom;
- (void)onPreForwardVideoToContact:(id)arg1 videoInfo:(id)arg2;
- (void)onPreForwardMsgToContact:(id)arg1 msgWrap:(id)arg2;
- (void)report30451:(id)arg1 redirectType:(int)arg2;
- (id)pageIdentityFromExtraInfo;
- (id)inputViewReferMsgFromExtraInfo;
- (id)genSessionInfoWhenExit;
- (id)genSessionInfoWhenEnter;
- (void)recordSessionInfoWhenEnter;
- (void)deleteAllMessage;
- (void)openSettingView;
- (id)viewControllerToShowPageSheet;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)onClickMoreForTemplateMsg:(id)arg1;
- (void)addLocalSystemMessageWhenEnterSession;
- (void)onBrandLiveBannerEventWithAction:(unsigned int)arg1;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(_Bool)arg2 finderFeedExportId:(id)arg3;
- (void)tryUpdateBrandLiveStatusIfNeed;
- (void)hasTapReaderNodeView;
- (id)generateURLQueryDict:(id)arg1;
- (void)onKFWorkerMsgAvatarClicked:(id)arg1;
- (void)reportAvatarClick:(id)arg1 message:(id)arg2;
- (void)advancePreloadKFWorkerWeApp:(id)arg1;
- (void)onKFWorkerMsgDisplay:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (_Bool)hasHardDeviceBrandSubtitle;
- (id)GetPossibleContactByName:(id)arg1;
- (void)updateContactFromServer;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (_Bool)showKeyboardImmediately;
- (_Bool)shouldHideOrginInputToolView;
- (double)getCustomizedAreaWidth;
- (void)reportInputToolBarModeChanged:(unsigned int)arg1;
- (void)disconnectDevice;
- (void)connectDevice;
- (void)updateToolViewStatus;
- (id)getLogicController;
- (id)getInputToolView;
- (void)recordToolViewStatus;
- (void)showKeyboardImmediatelyEnd;
- (void)showKeyboardImmediatelyStart;
- (void)onModifyContact:(id)arg1;
- (void)startReceiveMsg:(id)arg1;
- (void)resetUILogicController:(id)arg1;
- (void)onTextBeginEditing:(id)arg1;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (unsigned int)currPageAppmsgReportScene;
- (unsigned int)currPageAppmsgEnterType;
- (_Bool)shouldPreDownloadPageData;
- (_Bool)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (_Bool)mainSwitch_shouldHandleAppmsg;
- (void)ViewDidDisappear;
- (void)ViewWillDisappear;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (void)ViewDidAppear;
- (void)ViewWillAppear;
- (void)ViewDidInit;
- (void)startScan;
- (void)createAllLogicForContact:(id)arg1;
- (void)ViewWillInit;
- (void)onFinishSelectedLocation;
- (void)hideErrTips;
- (void)showErrTips:(int)arg1;
- (void)updateSubTitle:(id)arg1;
- (void)displayDeviceListView:(id)arg1;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanSendOriginalVideo;
- (void)processImageDidFinish;
- (void)processImageDidCancel;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)wxKeyBoardSupportMessageTypes;
- (_Bool)supportWXKeyBoard;
- (void)processInsertedAsset:(id)arg1;
- (unsigned int)getMsgMinCreateTimeToLoad;
- (id)filteredMessagesFrom:(id)arg1;
- (id)getMsgFromLocalId:(unsigned int)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (void)tryExpandReaderMessageFolder:(id)arg1;
- (void)clickTimeNodeRightButton:(id)arg1;
- (void)onTemplateReaderFolderCellDidCollapse:(id)arg1;
- (void)onTemplateReaderFolderCellWillCollapse:(id)arg1;
- (void)onTemplateReaderFolderCellDidExpand:(id)arg1;
- (void)onTemplateReaderFolderCellWillExpand:(id)arg1;
- (_Bool)canCombineMessageWrapA:(id)arg1 messageWrapB:(id)arg2;
- (id)getMessageWrapLocalIDListStr:(id)arg1;
- (id)makeAMessageFolder:(id)arg1;
- (id)getEarlierMessageListWithFolder:(id)arg1;
- (id)getLaterCombinedMessageWrapList:(id)arg1;
- (id)getLaterMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)getEarlierMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (unsigned int)GetFirstLocalID;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1 scrollToTab:(_Bool)arg2;
- (void)OpenContactInfo:(id)arg1;
- (_Bool)isShowHeadImage:(id)arg1;
- (id)GetRightBarButtonImageName;
- (void)onUnfoldHistoryMsg;
- (_Bool)canShowFoldHistoryCell;
- (_Bool)shouldFoldHistoryMsg;
- (unsigned int)getMsgCountToLoad;
- (id)genMsgSource;
- (void)preAddVideoMsgWithInfo:(id)arg1;
- (void)preAddMsg:(id)arg1 msgWrap:(id)arg2;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanRemoteRecord;
- (void)onPopFromNavigationController;
- (_Bool)message_folder_enable;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

