//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, ShareConfirmView;

@interface CreateChatRoomHandler
{
    NSString *_groupId;
    NSString *_openId;
    NSString *_chatRoomName;
    NSString *_chatRoomNickName;
    NSString *_extMsg;
    ShareConfirmView *_confirmView;
}

- (void).cxx_destruct;
- (void)OnStayAtWeChat:(id)arg1;
- (void)OnBackToApp:(id)arg1;
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)backTo3rdApp:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)showSucessView;
- (void)openCreateChatRoomH5:(id)arg1;
- (void)sendRespAndReturnTo3rdApp:(id)arg1 errCode:(int)arg2;
- (void)realHandleReqAfterermissionValidation;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

