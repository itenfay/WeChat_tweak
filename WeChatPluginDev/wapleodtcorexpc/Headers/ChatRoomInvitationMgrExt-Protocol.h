//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseResponseErrMsg, ChatRoomInvitationWrap;

@protocol ChatRoomInvitationMgrExt

@optional
- (void)onChatRoomInvitationUnReadCountChanged;
- (void)onApproveChatRoomInvitation:(ChatRoomInvitationWrap *)arg1 success:(_Bool)arg2 errInfo:(BaseResponseErrMsg *)arg3;
- (void)onReceiveNewChatRoomInvitation:(ChatRoomInvitationWrap *)arg1;
- (void)onChatRoomInvitationStatusUpdated:(ChatRoomInvitationWrap *)arg1;
- (void)onReplaceOldChatRoomInvitation:(ChatRoomInvitationWrap *)arg1 withNewInvitation:(ChatRoomInvitationWrap *)arg2;
@end

