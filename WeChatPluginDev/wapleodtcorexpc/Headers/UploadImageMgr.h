//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MessageCommonUploader, NSMutableArray, NSString, UploadImageInfo;

@interface UploadImageMgr
{
    NSMutableArray *m_arrQueue;
    UploadImageInfo *m_oCurUpload;
    MessageCommonUploader *_uploader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MessageCommonUploader *uploader; // @synthesize uploader=_uploader;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (_Bool)isWxamEnable;
- (void)messageUploaderProgress:(id)arg1 progress:(double)arg2;
- (void)messageUploaderFailure:(id)arg1 uploadId:(id)arg2;
- (void)messageUploaderSuccess:(id)arg1 result:(id)arg2;
- (void)createUploader;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(id)arg1;
- (void)StartUploadImage:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (_Bool)IsUploading:(id)arg1;
- (void)CheckQueue;
- (void)caculateOriginSourceMD5:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

