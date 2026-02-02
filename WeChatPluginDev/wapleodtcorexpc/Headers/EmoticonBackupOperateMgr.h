//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AddEmoticonWrap, EmoticonCameraReportObject, EmoticonOperateCgi, EmoticonUploadCgi, EmoticonUploader, NSString, OrderedDictionary;

@interface EmoticonBackupOperateMgr
{
    _Bool m_hasAddBackupSuccessAfterInit;
    _Bool m_isLastSuccessAddEmoticonCustom;
    EmoticonOperateCgi *_m_operateCgi;
    EmoticonUploadCgi *_m_uploadCgi;
    EmoticonUploader *_m_uploader;
    AddEmoticonWrap *_m_addEmoticonWrap;
    OrderedDictionary *_m_uploadEmoticonQueue;
    EmoticonCameraReportObject *_m_reportObject;
    NSString *_operationKey;
}

+ (void)reportAddBackupEmoticon:(id)arg1 failedWithReason:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *operationKey; // @synthesize operationKey=_operationKey;
@property(retain, nonatomic) EmoticonCameraReportObject *m_reportObject; // @synthesize m_reportObject=_m_reportObject;
@property(retain, nonatomic) OrderedDictionary *m_uploadEmoticonQueue; // @synthesize m_uploadEmoticonQueue=_m_uploadEmoticonQueue;
@property(retain, nonatomic) AddEmoticonWrap *m_addEmoticonWrap; // @synthesize m_addEmoticonWrap=_m_addEmoticonWrap;
@property(retain, nonatomic) EmoticonUploader *m_uploader; // @synthesize m_uploader=_m_uploader;
@property(retain, nonatomic) EmoticonUploadCgi *m_uploadCgi; // @synthesize m_uploadCgi=_m_uploadCgi;
@property(retain, nonatomic) EmoticonOperateCgi *m_operateCgi; // @synthesize m_operateCgi=_m_operateCgi;
@property(readonly, nonatomic) _Bool isLastSuccessAddEmoticonCustom; // @synthesize isLastSuccessAddEmoticonCustom=m_isLastSuccessAddEmoticonCustom;
@property(readonly, nonatomic) _Bool hasAddBackupSuccessAfterInit; // @synthesize hasAddBackupSuccessAfterInit=m_hasAddBackupSuccessAfterInit;
- (void)endNewOperaton;
- (_Bool)startNewOperaton;
- (id)getCurrentOperationKey;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)onEmoticonUploadMd5Failed:(id)arg1 reason:(unsigned long long)arg2;
- (void)onEmoticonUploadMd5Ok:(id)arg1 emojiInfo:(id)arg2;
- (unsigned long long)countOfAddEmoticonWrapsPendingUpload;
- (_Bool)removeAddEmoticonWrapFromUploadQueueForUploadMd5:(id)arg1;
- (id)allAddEmoticonWrapInUploadQueue;
- (id)addEmoticonWrapForUploadMd5:(id)arg1;
- (_Bool)encodeEmoticonUploadQueue:(id)arg1 toFile:(id)arg2;
- (id)decodeEmoticonUploadQueueFromFile:(id)arg1;
- (void)trySaveThumbImageForAddEmoticonWrap:(id)arg1;
- (void)addBackupEmoticonOkWithAddEmoticonWrap:(id)arg1 validEmojiInfoObj:(id)arg2;
- (void)addBackupEmoticon:(id)arg1 failedWithReason:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)uploadEmoticonOk:(id)arg1 withEmojiInfo:(id)arg2;
- (void)uploadEmoticonFailed:(id)arg1 withReason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)checkUploadEmoticon;
- (void)uploadEmoticon;
- (void)addBackupEmoticonToServer:(id)arg1;
- (void)moveBackupEmoticonOperateFailed:(id)arg1;
- (void)moveBackupEmoticonOperateOk:(id)arg1 withType:(unsigned long long)arg2 insertPositionMd5:(id)arg3;
- (void)moveBackupEmoticonToServer:(id)arg1 withType:(unsigned long long)arg2 insertPositionMd5:(id)arg3;
- (void)stickyBackupEmoticonOperateFailed:(id)arg1;
- (void)stickyBackupEmoticonOperateOk:(id)arg1 withType:(unsigned long long)arg2;
- (void)preCheckGameEmoticonForSticky:(id)arg1 gameMd5:(id)arg2;
- (void)stickyBackupEmoticonToServer:(id)arg1 withType:(unsigned long long)arg2;
- (void)deleteBackupEmoticonOperateFailed:(id)arg1;
- (void)deleteBackupEmoticonOperateOk:(id)arg1 withType:(unsigned long long)arg2;
- (void)deleteBackupEmoticonFromServer:(id)arg1 withType:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

