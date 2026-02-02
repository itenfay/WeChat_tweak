//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat14VoIPLCKManager
{
    MISSING_TYPE *conversationManager;
    MISSING_TYPE *haveAProcessingCall;
    MISSING_TYPE *currentUUID;
    MISSING_TYPE *haveAcceptedCall;
    MISSING_TYPE *isBackground;
    MISSING_TYPE *conversation;
    MISSING_TYPE *update;
    MISSING_TYPE *roomID;
    MISSING_TYPE *roomKey;
    MISSING_TYPE *isVideo;
    MISSING_TYPE *hasActiveAudio;
    MISSING_TYPE *noActionAfterEnteringForeground;
    MISSING_TYPE *needEndCallByFailure;
    MISSING_TYPE *user;
}

- (void).cxx_destruct;
- (id)init;
- (void)receiveCallWithContact:(id)arg1 roomID:(unsigned long long)arg2 roomKey:(unsigned long long)arg3 isVideo:(_Bool)arg4 isPushKit:(_Bool)arg5 ring:(id)arg6;
- (_Bool)haveAnsweredCall;
- (_Bool)getIfProcessingCall;
- (void)endCallOutsideWithRoomID:(unsigned long long)arg1 isCancel:(_Bool)arg2;
- (void)joinCallOutside;
- (id)getUUID;
- (_Bool)handleVoIPPushInfoWithInfo:(id)arg1;
- (void)resetStatus;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;

@end

