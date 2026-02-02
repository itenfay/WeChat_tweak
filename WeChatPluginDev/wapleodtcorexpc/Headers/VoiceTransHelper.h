//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MMTimer, NSString, WebviewLocalResItem;
@protocol VoiceTransDelegate;

@interface VoiceTransHelper
{
    unsigned int m_uNotifyId;
    unsigned int m_iCurVoiceResultSeq;
    WebviewLocalResItem *m_webViewItem;
    unsigned int m_uiScene;
    NSString *m_nsVoicePath;
    NSString *m_nsVoiceTransPath;
    unsigned int m_uNetGetInterval;
    _Bool m_bNeedGetResult;
    _Bool m_bIsGetting;
    unsigned int m_uTotalLen;
    unsigned int m_uStartPos;
    unsigned int m_uDataLen;
    unsigned int m_uUploadFailTimes;
    unsigned int m_uSampleRateForSilk;
    MMTimer *m_getTimer;
    long long m_webViewItemFormat;
    int _translateScene;
    id <VoiceTransDelegate> m_delegate;
    CMessageWrap *m_msgWrap;
    NSString *m_nsVoiceID;
}

- (void).cxx_destruct;
@property(nonatomic) int translateScene; // @synthesize translateScene=_translateScene;
@property(retain, nonatomic) NSString *m_nsVoiceID; // @synthesize m_nsVoiceID;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(nonatomic) __weak id <VoiceTransDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnVoiceTransNotify:(unsigned int)arg1 Sequence:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)saveVoiceTrans:(id)arg1;
- (void)reportVoiceID:(id)arg1 result:(int)arg2;
- (void)HandleGetVoiceTransResp:(id)arg1 Event:(unsigned int)arg2;
- (void)GetVoiceTrans;
- (void)TimeToGetVoieceTrans;
- (void)startGetTimer;
- (void)HandleUploadVoiceResp:(id)arg1 Event:(unsigned int)arg2;
- (void)UploadVoice;
- (void)HandleCheckVoiceResp:(id)arg1 Event:(unsigned int)arg2;
- (void)doCheckVoice;
- (void)stopVoiceTrans;
- (void)stopTimer;
- (void)startVoiceTrans;
- (void)startWebviewVoiceTransWithFormat:(long long)arg1;
- (void)startWebviewVoiceTrans;
- (id)initWithWebviewLocalResItem:(id)arg1 VoiceID:(id)arg2;
- (id)initWithVoiceMsg:(id)arg1 VoiceID:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

