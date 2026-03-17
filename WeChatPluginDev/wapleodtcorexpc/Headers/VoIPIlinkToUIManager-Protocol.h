//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CMessageWrap, VoipMonoMsg, ilinkToVoIPMgrStatus;

@protocol VoIPIlinkToUIManager
- (void)onDetermineIfNeedReset;
- (void)onIlinkChangeToMultiTalk;
- (void)fakeEndVoIPByChangingToMultiTalk;
- (void)ilinkInviteFailedToVoIPMgr:(CContact *)arg1 withCallType:(unsigned int)arg2 isAudio:(_Bool)arg3 status:(ilinkToVoIPMgrStatus *)arg4;
- (void)onCancelCreateMultiTalk;
- (void)ilinkReceiverOpenWindowWithContact:(CContact *)arg1 msgWrap:(CMessageWrap *)arg2 monoMsg:(VoipMonoMsg *)arg3 from:(unsigned long long)arg4 isAudioMode:(_Bool)arg5 completion:(void (^)(void))arg6;
- (void)onSetRoomID:(unsigned long long)arg1;
@end

