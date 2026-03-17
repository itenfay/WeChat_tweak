//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ChatroomUserData, GCChatBaseCellModel, GCChatRoomMessage, GCMessageViewModelConfig, GCRoomMessageResponse, NSMutableDictionary, NSString, SendChatroomMsgResponse, UIView;

@protocol GCMessageViewModelProtocol <NSObject>
- (void)onUserDataDictUpdate:(NSMutableDictionary *)arg1;
- (void)loadFirstPageIfNeed;
- (void)loadCachedMsgDataIfNeed;
- (GCMessageViewModelConfig *)bindViewModelConfig;
- (void)jumpToChannelId:(long long)arg1 seq:(unsigned long long)arg2;
- (void)updateUserDataCell:(ChatroomUserData *)arg1;
- (void)updateNoticeBarView:(UIView *)arg1;
- (void)updateCellModel:(GCChatBaseCellModel *)arg1 messageSendStatus:(unsigned long long)arg2;
- (void)updatCellModel:(GCChatBaseCellModel *)arg1 withResponse:(SendChatroomMsgResponse *)arg2;
- (void)setDisableChildViewEvent:(_Bool)arg1;
- (void)reloadCellModelInNextLoop:(GCChatBaseCellModel *)arg1;
- (void)reconfigChatCellForUserName:(NSString *)arg1 relayout:(_Bool)arg2;
- (void)onInputViewAdjustMessageView:(_Bool)arg1 topYOfInputView:(double)arg2;
- (void)handleChatRoomMsg:(GCChatRoomMessage *)arg1;
- (void)handleReceiveNewMsg:(GCRoomMessageResponse *)arg1;
- (void)exitViewModel;
- (long long)currentChannelId;
@end

