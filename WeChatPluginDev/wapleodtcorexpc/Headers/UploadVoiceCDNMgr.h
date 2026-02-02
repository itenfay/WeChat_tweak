//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MemoryMappedKV, NSMutableDictionary, NSRecursiveLock, UploadVoiceWrap;
@protocol UploadVoiceDelegate;

@interface UploadVoiceCDNMgr
{
    _Bool _bSending;
    id <UploadVoiceDelegate> _delegate;
    MemoryMappedKV *_tmpUploadItems;
    NSMutableDictionary *_readyUploadItems;
    UploadVoiceWrap *_currentUploadItem;
    NSRecursiveLock *_lock;
    MMTimer *_timerCheck;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timerCheck; // @synthesize timerCheck=_timerCheck;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) UploadVoiceWrap *currentUploadItem; // @synthesize currentUploadItem=_currentUploadItem;
@property(nonatomic) _Bool bSending; // @synthesize bSending=_bSending;
@property(retain, nonatomic) NSMutableDictionary *readyUploadItems; // @synthesize readyUploadItems=_readyUploadItems;
@property(retain, nonatomic) MemoryMappedKV *tmpUploadItems; // @synthesize tmpUploadItems=_tmpUploadItems;
@property(nonatomic) __weak id <UploadVoiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (void)reportUploadCDNSuccess:(id)arg1;
- (void)reportUploadCDNFail:(id)arg1;
- (void)deleteUploadItem:(id)arg1;
- (void)handleSendVoiceSuccess:(id)arg1;
- (void)handleSendVoiceFail:(id)arg1;
- (void)handleUploadCDNSuccess:(id)arg1;
- (void)handleUploadCDNFail:(id)arg1 retryCgi:(_Bool)arg2;
- (void)uploadVoiceToCDN:(id)arg1;
- (void)startSend:(id)arg1;
- (void)startSend;
- (void)initTmpUploadItems;
- (void)updateItemToPB;
- (void)loadItemFromPB;
- (id)loadPB;
- (id)getPBPath;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddNewPart:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 Offset:(unsigned int)arg4 Len:(unsigned int)arg5 VoiceTime:(unsigned int)arg6 CreateTime:(unsigned int)arg7 EndFlag:(unsigned int)arg8 CancelFlag:(unsigned int)arg9 VoiceFormat:(unsigned int)arg10 ForwardFlag:(unsigned int)arg11 msgSource:(id)arg12;
- (void)TimerCheckUpload;
- (void)Stop;
- (void)Start;
- (void)InitUploadMgr:(id)arg1 Lock:(id)arg2 Delegate:(id)arg3;
- (void)dealloc;
- (id)init;

@end

