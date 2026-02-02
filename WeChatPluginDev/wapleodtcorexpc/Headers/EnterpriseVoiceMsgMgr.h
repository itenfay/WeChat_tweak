//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;
@protocol EnterpriseVoiceMsgMgrDelegate;

@interface EnterpriseVoiceMsgMgr
{
    NSMutableDictionary *_dicMsgSource;
    _Bool _isContinueWrite;
    id <EnterpriseVoiceMsgMgrDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseVoiceMsgMgrDelegate> delegate; // @synthesize delegate;
- (void)handleDownloadVoiceMsgSuc:(id)arg1;
- (_Bool)WriteAudioFile:(id)arg1 Offset:(unsigned int)arg2 Data:(id)arg3;
- (void)handleSendVoiceMsgFail:(id)arg1;
- (void)handleSendVoiceMsgSuc:(id)arg1;
- (_Bool)uploadVoice:(id)arg1;
- (id)popMsgSource:(id)arg1;
- (void)pushMsgSource:(id)arg1;
- (id)genKeyWithChatUsrName:(id)arg1 svrID:(unsigned long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)sendVoiceMsgByUserData:(id)arg1;
- (_Bool)resendVoiceMsg:(id)arg1;
- (_Bool)CreateDownloadVoiceEvent:(id)arg1 withMsg:(id)arg2;
- (_Bool)downloadVoiceData:(id)arg1;
- (void)wrtieFileOfVoiceMsg:(id)arg1;
- (void)dealloc;
- (id)init;

@end

