//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseMessageViewModel, BrandTemplateMsgAuthMessageBubbleModel, CBaseContact, CContact, CEmoticonWrap, CMessageWrap, ChatTimeNodeRightButtonInfo, LinkWeAppJumpWrap, MMMusicInfo, MMRichTextCoverView, MMUIViewController, NSArray, NSDictionary, NSString, PatWrap, PushMailWrap, ReaderMessageFolderViewModel, TemplateReaderMessageFolderViewModel, TranslateInfo;

@protocol MessageNodeViewDelegate <NSObject>

@optional
- (void)reportServerNotifySubscribeMessageOp:(unsigned int)arg1 viewModel:(BaseMessageViewModel *)arg2 reportModel:(BrandTemplateMsgAuthMessageBubbleModel *)arg3;
- (void)exitSelectState;
- (void)setRichTextCoverView:(MMRichTextCoverView *)arg1;
- (_Bool)tryHandleMenu:(long long)arg1 withViewModel:(BaseMessageViewModel *)arg2;
- (_Bool)reloadDataIfNeed;
- (unsigned int)currentSpeakIndex;
- (_Bool)isSpeakingText:(CMessageWrap *)arg1;
- (unsigned int)getSessionId;
- (void)reloadMessages;
- (void)onClickFoldHistoryMsgBtn;
- (void)onContinueDownloadAppMsg:(CMessageWrap *)arg1;
- (void)onStopDownloadAppMsg:(CMessageWrap *)arg1;
- (void)onContinueUploadAppMsg:(CMessageWrap *)arg1;
- (void)onClickSearchTopic:(CMessageWrap *)arg1 withUrl:(NSString *)arg2;
- (void)onClickTransferExpireAlertTips:(NSString *)arg1 transferId:(NSString *)arg2;
- (void)onClickFetchCouponSystemMessage:(NSString *)arg1;
- (void)clickTimeNodeRightButton:(ChatTimeNodeRightButtonInfo *)arg1;
- (void)onTemplateReaderFolderCellDidCollapse:(TemplateReaderMessageFolderViewModel *)arg1;
- (void)onTemplateReaderFolderCellWillCollapse:(TemplateReaderMessageFolderViewModel *)arg1;
- (void)onTemplateReaderFolderCellDidExpand:(TemplateReaderMessageFolderViewModel *)arg1;
- (void)onTemplateReaderFolderCellWillExpand:(TemplateReaderMessageFolderViewModel *)arg1;
- (void)onReaderFolderCellDidCollapse:(ReaderMessageFolderViewModel *)arg1;
- (void)onReaderFolderCellWillCollapse:(ReaderMessageFolderViewModel *)arg1;
- (void)onReaderFolderCellDidExpand:(ReaderMessageFolderViewModel *)arg1;
- (void)onReaderFolderCellWillExpand:(ReaderMessageFolderViewModel *)arg1;
- (void)onClickTailSource:(CMessageWrap *)arg1;
- (void)onClickWeAppSource:(CMessageWrap *)arg1;
- (void)onClickViewSource:(CMessageWrap *)arg1;
- (void)onSendPat:(PatWrap *)arg1 ofOriginMessage:(CMessageWrap *)arg2 fromChat:(NSString *)arg3;
- (void)onStartRevokePatFromChat:(NSString *)arg1;
- (void)onClickPatMessageLinkWithUrl:(NSString *)arg1;
- (void)onClickRoomTodoCustomLinkWithUrl:(NSString *)arg1 chatname:(NSString *)arg2;
- (void)onClickRoomTodoView:(CMessageWrap *)arg1 revoke:(_Bool)arg2;
- (void)onCancelTopMsgMenuItemExposed:(CMessageWrap *)arg1;
- (void)onTopMsgMenuItemExposed:(CMessageWrap *)arg1;
- (void)onCancelTopMsg:(CMessageWrap *)arg1;
- (void)onTopMsg:(CMessageWrap *)arg1;
- (void)onClickReferArea:(CMessageWrap *)arg1;
- (void)onReplyMsg:(CMessageWrap *)arg1;
- (void)onVerifyFTSIndexForMsg:(CMessageWrap *)arg1;
- (void)onStartTextSolitaire:(CMessageWrap *)arg1 EnterScene:(unsigned long long)arg2;
- (void)onClickSourceView:(CMessageWrap *)arg1;
- (void)onClickMessageWrapOpenedWebViewUseFastLoad:(CMessageWrap *)arg1;
- (_Bool)isShowingExpandView;
- (_Bool)isUseDefaultChatBkgImage;
- (void)onClickPlayMusicBtn:(CMessageWrap *)arg1 isPlay:(_Bool)arg2 musicInfo:(MMMusicInfo *)arg3 clickedOnBtn:(_Bool)arg4;
- (void)onClickFavMenu:(CMessageWrap *)arg1;
- (void)onClickVoiceTranslate:(CMessageWrap *)arg1;
- (void)onClickTextFloatPreView:(CMessageWrap *)arg1;
- (void)stopTextAutoTranslate;
- (void)startTextAutoTranslate;
- (void)onClickTranslateMsg:(CMessageWrap *)arg1 translateInfo:(TranslateInfo *)arg2;
- (void)hideToolViewAnimated:(_Bool)arg1;
- (void)onPopOverViewWillDismiss;
- (void)onFavWeAppMsgAppear:(CMessageWrap *)arg1;
- (void)onTapManageButton:(NSString *)arg1;
- (void)onTapFavWeAppContent:(CMessageWrap *)arg1;
- (void)onRejectFavWeAppMsg:(CMessageWrap *)arg1 WithReasons:(NSArray *)arg2;
- (void)onRejectFavWeAppMsgPopOverWithMessage:(CMessageWrap *)arg1;
- (void)onExposeFavWeAppMsg:(CMessageWrap *)arg1;
- (void)shouldShowRelativeEmoticonViewControllerWithEmoticonWrap:(CEmoticonWrap *)arg1 andMessageWrap:(CMessageWrap *)arg2;
- (void)onEmoticonSourceTipClick;
- (void)hadShowNewXmlSystemMessage:(CMessageWrap *)arg1;
- (void)scheduleOnMsg:(CMessageWrap *)arg1;
- (void)clickNewAASysMsg:(NSString *)arg1 withMsgLocalID:(unsigned int)arg2;
- (void)shareMsgToOpenSDKByNodeView:(CMessageWrap *)arg1;
- (void)clickWeAppReceiveSessionMsg;
- (void)clickReceiveBrandMsg;
- (void)clickShieldBrandMsg;
- (void)clickLinkToDealWithSysXml:(CMessageWrap *)arg1 fromScene:(NSString *)arg2;
- (void)clickLinkToExpose;
- (void)onFullScreenWindowWillHide;
- (void)willShowMenuController:(id)arg1 inMsgWrap:(CMessageWrap *)arg2 menuSourceType:(int)arg3;
- (void)willShowMenuController:(id)arg1 inMsgWrap:(CMessageWrap *)arg2;
- (_Bool)isMsgCanRevoke:(CMessageWrap *)arg1;
- (void)revokeMsgByNodeView:(CMessageWrap *)arg1;
- (void)SetMsgPlayed:(CMessageWrap *)arg1;
- (void)locateToMsg:(CMessageWrap *)arg1;
- (void)switchEarMode;
- (void)jumpToUserProfile:(NSString *)arg1 Displayname:(NSString *)arg2 Scence:(unsigned int)arg3;
- (void)onHideKeyboard;
- (void)onMoreOperateWithMsgId:(NSString *)arg1;
- (void)onForwardMessageOK;
- (void)onMassSendSendAgain:(NSArray *)arg1;
- (void)onScrollToBottom;
- (void)tagWeAppMPShortLink:(NSString *)arg1 messageWrap:(CMessageWrap *)arg2;
- (void)tagWeAppLink:(LinkWeAppJumpWrap *)arg1 messageWrap:(CMessageWrap *)arg2;
- (void)tagLink:(NSString *)arg1 messageWrap:(CMessageWrap *)arg2;
- (MMUIViewController *)getViewController;
- (void)hasTapReaderNodeView;
- (void)longPressOnHeadImageForDebug:(CMessageWrap *)arg1;
- (_Bool)isMsgSelected:(CMessageWrap *)arg1;
- (void)longPressOnHeadImage:(CBaseContact *)arg1;
- (_Bool)canLongPressOnHeadImage:(CBaseContact *)arg1;
- (void)deleteNode:(CMessageWrap *)arg1;
- (void)StartDownloadVideo:(CMessageWrap *)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartDownloadVideo:(CMessageWrap *)arg1;
- (void)StartUploadVideo:(CMessageWrap *)arg1;
- (void)StopDownloadVideo:(CMessageWrap *)arg1;
- (void)StopUploadVideo:(CMessageWrap *)arg1;
- (void)onExposeTemplateMsg:(CMessageWrap *)arg1 extraData:(NSDictionary *)arg2;
- (void)onClickMoreForTemplateMsg:(CMessageWrap *)arg1;
- (void)readerViewClickedWithMsg:(CMessageWrap *)arg1;
- (void)headerImageClickedWithMsg:(CMessageWrap *)arg1;
- (void)headerImageClicked:(CBaseContact *)arg1;
- (void)onKFWorkerMsgAvatarClicked:(CMessageWrap *)arg1;
- (void)onKFWorkerMsgDisplay:(CMessageWrap *)arg1;
- (void)reportAvatarClick:(id)arg1 message:(CMessageWrap *)arg2;
- (void)EndPlaying:(CMessageWrap *)arg1;
- (void)BeginPlaying:(CMessageWrap *)arg1 Resume:(_Bool)arg2;
- (void)PlayVideo:(CMessageWrap *)arg1 soundable:(_Bool)arg2;
- (void)tapAppNodeView:(id)arg1;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(CContact *)arg2 WithMsg:(CMessageWrap *)arg3;
- (void)tapVideoStatus_NodeView:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)tapPushMail_NodeView:(id)arg1 withPushMailWrap:(PushMailWrap *)arg2;
- (void)tapVideoStatus_NodeView:(id)arg1;
- (void)resendMessage:(CMessageWrap *)arg1 showAlert:(_Bool)arg2;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapImage_NodeView:(id)arg1 needEditImage:(_Bool)arg2;
- (void)tapImage_NodeView:(id)arg1;
@end

