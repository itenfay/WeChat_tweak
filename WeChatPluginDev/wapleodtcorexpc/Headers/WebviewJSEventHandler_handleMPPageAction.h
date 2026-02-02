//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, JSAPIHandleMPPageActionFavContext, JSAPIHandleMPPageActionShareFriendContext, JSAPIHandleMPPageActionShareTimelineContext, JSAPIHandleMPPageActionShowActionSheetContext, MMShareExcerptPreviewView, NSMutableDictionary, NSString, RecentForwardScrollView, UIImage, WCMomentsScrollActionSheet;

@interface WebviewJSEventHandler_handleMPPageAction
{
    ForwardMessageLogicController *m_forwardLogicController;
    JSAPIHandleMPPageActionShareFriendContext *m_shareFriendContext;
    JSAPIHandleMPPageActionShareTimelineContext *m_shareTimelineContext;
    JSAPIHandleMPPageActionShowActionSheetContext *m_actionsheetContext;
    JSAPIHandleMPPageActionFavContext *m_favContext;
    NSMutableDictionary *m_brandMpVideoReporterDict;
    NSMutableDictionary *m_brandLandingPageReportLogicDict;
    NSString *m_shareAction;
    UIImage *m_shareEmbedExcerptImage;
    NSString *m_shareEmbedExcerptImageSourceUrl;
    WCMomentsScrollActionSheet *m_scrollActionSheet;
    RecentForwardScrollView *m_recentForwardScrollView;
    MMShareExcerptPreviewView *m_excerptPreviewView;
}

- (void).cxx_destruct;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheetInDismissAnimation:(id)arg1;
- (void)scrollActionSheetInShowAnimation:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)currentPageKey;
- (void)doShareExcerptReportWithContacts:(id)arg1 shareExcerpt:(id)arg2;
- (id)getWebTransStatus;
- (void)clearShareEmbedExcerptData;
- (void)forwardShareEmbedExcerptToFriend:(id)arg1;
- (void)forwardShareEmbedExcerptToTimeline;
- (_Bool)showShareEmbedExcerptActionSheet;
- (_Bool)showShareEmbedExcerptOption;
- (void)shareEmbedExcerpt:(id)arg1 errMsg:(id *)arg2;
- (void)handleActionSheetLongPressScene:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (id)getMpLandingPageReportLogicByMsg:(id)arg1;
- (id)getBrandMpVideoReporterByVid:(id)arg1;
- (void)onShareEmbedExcerptEventStr:(id)arg1;
- (void)onShareEmbedMpVideoEventStr:(id)arg1 videoVid:(id)arg2;
- (_Bool)doShareTimeline;
- (_Bool)doShareFriend;
- (_Bool)doFavorite;
- (void)openEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)showShareActionSheet:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3 scene:(unsigned int)arg4;
- (void)longPressEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)directlyShareFriend:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)shareEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)onGetFuncFlag:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onShare:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)takeSnapshotOnWindow:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)setSnapshotOnWebview:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)reportRecommend:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)requestTeenModeTemporaryVisit:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)getTeenModeTemporaryVisitInfo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)getIsEnabledForCircleToSearch:(id)arg1 errMsg:(id *)arg2;
- (void)startCircleToSearch:(id)arg1 errMsg:(id *)arg2;
- (void)setVerticalScrollIndicatorVisable:(id)arg1;
- (void)getLocalData:(id)arg1 MPActionEvent:(id)arg2;
- (void)setLocalData:(id)arg1 MPActionEvent:(id)arg2;
- (void)onGetIAPProductInfo:(id)arg1 MPActionEvent:(id)arg2;
- (void)onPaySuccess:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onWriteComment:(id)arg1 MPActionEvent:(id)arg2 isSubReply:(_Bool)arg3 errMsg:(id *)arg4;
- (void)openImmerseList:(id)arg1 errMsg:(id *)arg2;
- (void)doOpenFinderLive:(id)arg1 errMsg:(id *)arg2;
- (void)translateExcerpt:(id)arg1 errMsg:(id *)arg2;
- (void)delFavoriteExcerpt:(id)arg1 errMsg:(id *)arg2;
- (void)doShowTingEntry:(id)arg1 errMsg:(id *)arg2;
- (id)doGetLiveStatus;
- (void)doFavoriteExcerpt:(id)arg1 errMsg:(id *)arg2;
- (void)disableExposeAlert:(id)arg1 errMsg:(id *)arg2;
- (void)disableContextMenu:(id)arg1 errMsg:(id *)arg2;
- (void)syncReadState:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onShowToast:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)setClipboardData:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)doFavoritePage:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)hideNavShadowView;
- (void)showNavShadowView:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)pullActionSheet:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)showMenu:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)getEnterTime:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)reportByLeaveForMPGateway:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)opInputAccessoryView:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)wxConfig:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)nonchildMode_doAction:(id)arg1 paramterDic:(id)arg2 event:(id)arg3;
- (void)childMode_doAction:(id)arg1 paramters:(id)arg2 event:(id)arg3;
- (_Bool)isNonChildModeSupportAction:(id)arg1;
- (_Bool)isChildModeSupportAction:(id)arg1;
- (void)commonMode_doAction:(id)arg1 paramterDic:(id)arg2 event:(id)arg3;
- (_Bool)isCommonAction:(id)arg1;
- (void)syncHandle_callbackFailEvent:(id)arg1 withDescription:(id)arg2;
- (void)syncHandle_callbackEvent:(id)arg1 WithResult:(id)arg2;
- (void)asyncHandle_callbackFailEvent:(id)arg1 andDescription:(id)arg2;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

