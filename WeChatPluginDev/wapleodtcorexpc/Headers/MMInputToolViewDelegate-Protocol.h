//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AudioRecorderUserData, BaseChatCellView, CContact, CEmoticonWrap, CMessageWrap, ChatRoomPanelDynamicWeAppItem, ChatRoomToolMessageEventInfo, MMGrowTextView, MMUIViewController, MsgSendOpEntry, NSArray, NSData, NSDictionary, NSString, NSURL, ServiceAppData, SolitaireObj, UIImage, UITableView;

@protocol MMInputToolViewDelegate <NSObject>

@optional
- (void)onDeleteMultiMsg;
- (void)onSaveMultiMsg;
- (void)onSendMultiMsgToFriendWithPackedSend:(_Bool)arg1;
- (_Bool)isInPageSheetMode;
- (CContact *)wxKeyBoardMessageContact;
- (NSArray *)wxKeyBoardSupportMessageTypes;
- (void)sendWXKeyBoardMessage:(CMessageWrap *)arg1;
- (void)onShowGiftEntrance;
- (void)onShowMusicEntrance;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(MMGrowTextView *)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(NSArray *)arg1;
- (void)onClickTopicSearchEntry;
- (void)onShowLiveEntrance;
- (void)onStartLive;
- (void)onRevokeGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onCompleteGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onCloseGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onClickGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (BaseChatCellView *)getChatCellWithMsg:(CMessageWrap *)arg1;
- (void)onInputToolViewClearReferMsg;
- (_Bool)shouldForbidVoiceTrans;
- (void)onWeAppSessionMsgBtnClick:(NSData *)arg1;
- (void)onWeAppSessionMsgBtnHide;
- (void)onToolViewDidMoveToWindow;
- (_Bool)shouldHideToolViewOnKeyboardHide;
- (void)keyboardWillHide;
- (UITableView *)getMsgTableView;
- (MMUIViewController *)GetCurrentViewController;
- (_Bool)isViewControllerAnimated;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)onTextDeleteAll;
- (void)sendCaptruedImage:(NSURL *)arg1;
- (_Bool)canSendCaptureImage;
- (void)pasteImage:(UIImage *)arg1;
- (_Bool)canPasteImage;
- (NSString *)getCurrentChatName;
- (void)redEnvelopesLogic;
- (void)transferMoneyLogic;
- (NSArray *)getServiceAppList;
- (void)openServiceApp:(ServiceAppData *)arg1;
- (void)onChatRoomToolButtonClick;
- (void)onStreamVoiceInputButtonClick;
- (NSString *)chatUserNameForSightStatistics;
- (void)onShowInputToolWeAppAr:(NSArray *)arg1;
- (void)onInputToolWeAppButtonClickedWithItem:(ChatRoomPanelDynamicWeAppItem *)arg1;
- (void)onOpenMyCardPkgViewController;
- (void)openMyFavoritesListController;
- (void)openEnterpriseBrandEntry;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (void)onSelectLocation;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)onMultiTalkButtonClick;
- (void)onShareCard;
- (void)onOpenFinderPicker;
- (void)SendEmoticonMesssageToolView:(CEmoticonWrap *)arg1;
- (void)TextDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2 markedTextRange:(struct _NSRange)arg3;
- (void)TextDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextBeginEditing;
- (void)openCameraController;
- (void)openFileBrowser;
- (void)openMediaBrowser;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (AudioRecorderUserData *)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)OnClickAttachmentButtonAction;
- (void)OnClickAttachmentButton:(_Bool)arg1;
- (_Bool)IsShowAttachmentButtonRedDot;
- (_Bool)IsRecording;
- (void)CancelRecording;
- (void)StopRecording;
- (void)scrollTableToBottomAnimated:(_Bool)arg1 init:(_Bool)arg2;
- (_Bool)StartRecording:(NSDictionary *)arg1;
- (void)onPositionModeChangeTo:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)SendEmojiArtMessageToolView:(NSString *)arg1;
- (void)SendTextMsgWithSolitaire:(SolitaireObj *)arg1;
- (void)SendTextMessageToolView:(NSString *)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (NSArray *)getInputToolWeAppOpEntryAr;
- (MsgSendOpEntry *)getMsgSendOpEntry;
@end

