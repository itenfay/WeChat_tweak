//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MMCommonCgiUploader, MsgDataDownloadLogic, NSString;
@protocol MessageCommonUploaderDelegate;

@interface MessageCommonUploader : NSObject
{
    _Bool _useWxam;
    _Bool _hasCheckBigFile;
    id <MessageCommonUploaderDelegate> _delegate;
    CMessageWrap *_messageWrap;
    long long _scene;
    long long _fileType;
    NSString *_bigFileSignature;
    NSString *_bigFileAesKey;
    NSString *_uploadMd5;
    double _progress;
    NSString *_thumbFileId;
    NSString *_thumbAesKey;
    NSString *_midFileId;
    NSString *_midFileAesKey;
    MMCommonCgiUploader *_fileUploader;
    long long _currUploadFileType;
    MsgDataDownloadLogic *_msgDownloadLogic;
    unsigned long long _uploadTotalSize;
    long long _midFileType;
}

- (void).cxx_destruct;
@property(nonatomic) long long midFileType; // @synthesize midFileType=_midFileType;
@property(nonatomic) unsigned long long uploadTotalSize; // @synthesize uploadTotalSize=_uploadTotalSize;
@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
@property(nonatomic) _Bool hasCheckBigFile; // @synthesize hasCheckBigFile=_hasCheckBigFile;
@property(nonatomic) long long currUploadFileType; // @synthesize currUploadFileType=_currUploadFileType;
@property(retain, nonatomic) MMCommonCgiUploader *fileUploader; // @synthesize fileUploader=_fileUploader;
@property(retain, nonatomic) NSString *midFileAesKey; // @synthesize midFileAesKey=_midFileAesKey;
@property(retain, nonatomic) NSString *midFileId; // @synthesize midFileId=_midFileId;
@property(retain, nonatomic) NSString *thumbAesKey; // @synthesize thumbAesKey=_thumbAesKey;
@property(retain, nonatomic) NSString *thumbFileId; // @synthesize thumbFileId=_thumbFileId;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *uploadMd5; // @synthesize uploadMd5=_uploadMd5;
@property(retain, nonatomic) NSString *bigFileAesKey; // @synthesize bigFileAesKey=_bigFileAesKey;
@property(retain, nonatomic) NSString *bigFileSignature; // @synthesize bigFileSignature=_bigFileSignature;
@property(nonatomic) _Bool useWxam; // @synthesize useWxam=_useWxam;
@property(nonatomic) long long fileType; // @synthesize fileType=_fileType;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(nonatomic) __weak id <MessageCommonUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDownloadAnyFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (_Bool)isMsgResourceExist;
- (void)startDownloadMsgResource;
- (void)onUploadProgress:(id)arg1 uploadProgress:(double)arg2;
- (void)onUploadFail:(id)arg1 uploadId:(id)arg2 retCode:(long long)arg3;
- (void)onUploadSuccess:(id)arg1 result:(id)arg2;
- (void)callbackFailureWithUploadId:(id)arg1;
- (void)callbackSuccessWithResult:(id)arg1;
- (void)onCheckBigFileUploadResult:(_Bool)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)uploadNormalFile;
- (void)uploadVideoFile;
- (void)uploadBigImg;
- (void)uploadMidImg;
- (void)uploadThumbImg;
- (void)startUploadFileType:(long long)arg1;
- (void)startUploadWithCheckDownload:(_Bool)arg1;
- (void)stopUpload;
- (void)startUpload;
- (id)initWithMessageWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

