//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ChatRoomPanelDynamicWeAppItem, MsgSendOpEntry, NSArray, NSMutableArray, ServiceAppData, UIButton;

@protocol SelectAttachmentViewControllerDelegate <NSObject>
- (NSArray *)getServiceAppList;
- (void)didSelectAttachmentAtIndex:(unsigned long long)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (NSArray *)getInputToolWeAppOpEntryAr;
- (MsgSendOpEntry *)getMsgSendOpEntry;

@optional
- (void)onGiftButtonClicked:(UIButton *)arg1;
- (void)onFinderButtonClicked:(UIButton *)arg1;
- (void)onShowAttachViewWithPageIndex:(unsigned long long)arg1 items:(NSMutableArray *)arg2;
- (void)onShowLiveEntrance;
- (void)onLiveButtonClicked:(UIButton *)arg1;
- (void)onChatRoomToolButtonClick:(UIButton *)arg1;
- (void)onShowInputToolWeAppAr:(NSArray *)arg1;
- (void)onInputToolWeAppButtonClicked:(ChatRoomPanelDynamicWeAppItem *)arg1;
- (void)onMusicButtonClicked:(UIButton *)arg1;
- (void)onEnterpriseBrandEntryButtonClicked:(UIButton *)arg1;
- (void)onMultiTalkButtonClicked:(UIButton *)arg1;
- (void)onRedEnvelopesClicked:(UIButton *)arg1;
- (void)onVoiceInputButtonClicked:(UIButton *)arg1;
- (void)onTransferButtonClicked:(UIButton *)arg1;
- (void)onMyFavoritesButtonClicked:(UIButton *)arg1;
- (void)on3rdServiceButtonClicked:(ServiceAppData *)arg1;
- (void)onVoiceInputClicked:(UIButton *)arg1;
- (void)onVoiceVoipButtonClicked:(UIButton *)arg1;
- (void)onVideoVoipButtonClicked:(UIButton *)arg1;
- (void)onShareCardButtonClicked:(UIButton *)arg1;
- (void)onLocationButtonClicked:(UIButton *)arg1;
- (void)onCameraControllerClicked:(UIButton *)arg1;
- (void)onFileBrowserClicked:(UIButton *)arg1;
- (void)onSolitaireButtonClicked:(UIButton *)arg1;
- (void)onMediaBrowserClicked:(UIButton *)arg1;
@end

