//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonOperateCgi, EmoticonUploadCdn, EmoticonUploadInfoObj, EmoticonUploadPrepareCgi, NSString;
@protocol EmoticonUploaderDelegate;

@interface EmoticonUploader
{
    _Bool _isActive;
    _Bool _shouldOperateAdd;
    id <EmoticonUploaderDelegate> _delegate;
    EmoticonUploadInfoObj *_uploadInfo;
    EmoticonUploadPrepareCgi *_prepareCgi;
    EmoticonUploadCdn *_uploadCdn;
    EmoticonOperateCgi *_operateCgi;
    NSString *_realMd5;
    unsigned long long _failReason;
    unsigned long long _operateRetryCount;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(nonatomic) unsigned long long operateRetryCount; // @synthesize operateRetryCount=_operateRetryCount;
@property(nonatomic) unsigned long long failReason; // @synthesize failReason=_failReason;
@property(retain, nonatomic) NSString *realMd5; // @synthesize realMd5=_realMd5;
@property(nonatomic) _Bool shouldOperateAdd; // @synthesize shouldOperateAdd=_shouldOperateAdd;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) EmoticonOperateCgi *operateCgi; // @synthesize operateCgi=_operateCgi;
@property(retain, nonatomic) EmoticonUploadCdn *uploadCdn; // @synthesize uploadCdn=_uploadCdn;
@property(retain, nonatomic) EmoticonUploadPrepareCgi *prepareCgi; // @synthesize prepareCgi=_prepareCgi;
@property(retain, nonatomic) EmoticonUploadInfoObj *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(nonatomic) __weak id <EmoticonUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEmoticonUploadCdnFail;
- (void)onEmoticonUploadCdnSuccessWithRealMd5:(id)arg1;
- (void)onEmoticonUploadPrepareFail;
- (void)onEmoticonUploadPrepareSuccess:(id)arg1;
- (void)onUploaderFailWithRealMd5:(id)arg1;
- (void)onUploaderFail;
- (void)onUploaderSuccessWithEmojiInfoObj:(id)arg1;
- (void)cancelUpload;
- (void)startUpload;
- (id)initWithUploadInfo:(id)arg1 shouldOperateAdd:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithUploadInfo:(id)arg1 shouldOperateAdd:(_Bool)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

