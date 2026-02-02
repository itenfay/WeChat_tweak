//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSString;
@protocol UploadVoicePrintMgrDelegate;

@interface UploadVoicePrintMgr
{
    unsigned int _uploadType;
    unsigned int _curVoiceId;
    unsigned int _curResId;
    unsigned int _curScene;
    _Bool _isUploading;
    _Bool _isEnd;
    NSMutableArray *_uploadQueue;
    unsigned int _voiceTicket;
    unsigned int _cacheLastOffset;
    unsigned int _cacheLastlength;
    unsigned int _sameLoopCount;
    float _upload_per_time;
    id <UploadVoicePrintMgrDelegate> delegate;
    MMTimer *checkUploadQueueTimer;
    NSString *RsaVerifyTicket;
    NSString *RsaCreateTicket;
    NSString *_RsaVoiceKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *RsaVoiceKey; // @synthesize RsaVoiceKey=_RsaVoiceKey;
@property(retain, nonatomic) NSString *RsaCreateTicket; // @synthesize RsaCreateTicket;
@property(retain, nonatomic) NSString *RsaVerifyTicket; // @synthesize RsaVerifyTicket;
@property(retain, nonatomic) MMTimer *checkUploadQueueTimer; // @synthesize checkUploadQueueTimer;
@property(nonatomic) __weak id <UploadVoicePrintMgrDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned int curResId; // @synthesize curResId=_curResId;
- (void)AddNewPart:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)MainUpdateQueue:(id)arg1;
- (void)Stop;
- (void)Start:(unsigned int)arg1 UploadType:(unsigned int)arg2 withScene:(unsigned int)arg3 andResID:(unsigned int)arg4;
- (void)ResetVoiceTicket;
- (void)dealloc;
- (id)init;
- (void)doUpload:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)checkUploadQueue;
- (void)stopUploadTaskWithErr:(int)arg1;
- (void)stopUploadTaskWithErr:(int)arg1 andErrMsg:(id)arg2;
- (void)stopUploadTask;
- (void)clearTempFile;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cleanItem;

@end

