//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ChatroomUserData, GCChatBaseCellModel, GetChatroomBaseInfoResponse, NSString;

@protocol GCChatBaseCellModelDelegate <NSObject>
- (void)onDelayMsgCompleted:(GCChatBaseCellModel *)arg1;
- (ChatroomUserData *)getUserDatOfUserName:(NSString *)arg1;
- (void)handleChoosenMsgJumpUrl:(GCChatBaseCellModel *)arg1;
- (void)handlePublishChoosenMsg:(GCChatBaseCellModel *)arg1;
- (void)handleVote:(GCChatBaseCellModel *)arg1 fromPos:(unsigned long long)arg2;
- (void)jumpToTargetChannel:(long long)arg1;
- (void)handleLocate:(GCChatBaseCellModel *)arg1;
- (void)onConfirmHandleChoose:(GCChatBaseCellModel *)arg1 isChosen:(_Bool)arg2;
- (void)onConfigureCellModel:(GCChatBaseCellModel *)arg1;
- (void)reloadCellModelInNextLoop:(GCChatBaseCellModel *)arg1;
- (NSString *)getChatRoomName;
- (_Bool)isCurChatRoomForbidInteract;
- (GetChatroomBaseInfoResponse *)getCurrentRoomResponse;
- (ChatroomUserData *)getCurrentUserData;
- (void)onSendFailImgTap:(GCChatBaseCellModel *)arg1;
- (void)handleRevokeTickle:(unsigned long long)arg1 completeBlock:(void (^)(_Bool))arg2;
- (void)handleHeadDoubleClick:(GCChatBaseCellModel *)arg1;
- (void)handleHeadTap:(GCChatBaseCellModel *)arg1;
- (void)handleBlockMsg:(GCChatBaseCellModel *)arg1;
- (void)handleManageMember:(GCChatBaseCellModel *)arg1;
- (void)willKickOutMember:(GCChatBaseCellModel *)arg1;
- (void)atWithUserName:(NSString *)arg1;
- (void)didAtWithCellModel:(GCChatBaseCellModel *)arg1;
@end

