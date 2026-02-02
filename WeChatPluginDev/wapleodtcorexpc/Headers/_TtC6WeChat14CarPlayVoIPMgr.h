//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat14CarPlayVoIPMgr
{
    MISSING_TYPE *currentController;
    MISSING_TYPE *rootVoIPTalkingController;
}

- (void).cxx_destruct;
- (id)init;
- (void)setTalkingControllerDelegateWithDelegate:(id)arg1;
- (id)getTalkingController;
- (_Bool)isOnVoIP;
- (_Bool)isOnTalking;
- (id)openExtraRecieveControllerWithContact:(id)arg1 toast:(id)arg2 isVideo:(_Bool)arg3;
- (id)openTalkingControllerWithContact:(id)arg1 toast:(id)arg2 isMuted:(_Bool)arg3 isVideo:(_Bool)arg4 isCaller:(_Bool)arg5;
- (id)openReceiveControllerWithContact:(id)arg1 toast:(id)arg2 isVideo:(_Bool)arg3;
- (id)openCallerControllerWithContact:(id)arg1 toast:(id)arg2 isMuted:(_Bool)arg3 isVideo:(_Bool)arg4;
- (void)onEndCallWithIsiLink:(_Bool)arg1 forExtraInvite:(_Bool)arg2;
- (void)setRoomInfoWithRoomID:(long long)arg1 roomKey:(long long)arg2;

@end

