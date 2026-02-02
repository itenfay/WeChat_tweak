//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMCommonCgiUploader, MMCommonUploadResult, NSString, UniversalUploadResult;

@interface UniversalC2CDataUploader : NSObject
{
    _Bool _isUseCgi;
    _Bool _enableHitCheck;
    int _thumbFileType;
    int _middleFileType;
    int _fileType;
    NSString *_taskId;
    NSString *_thumbFilePath;
    NSString *_middleFilePath;
    NSString *_filePath;
    NSString *_thumbFileID;
    NSString *_thumbAesKey;
    NSString *_middleFileID;
    NSString *_middleAesKey;
    NSString *_fileID;
    NSString *_aeskey;
    NSString *_bigFileSignature;
    NSString *_bigFileAesKey;
    MMCommonCgiUploader *_thumbUploader;
    MMCommonCgiUploader *_middleDataUploader;
    MMCommonCgiUploader *_dataUploader;
    MMCommonUploadResult *_thumbResult;
    MMCommonUploadResult *_middleResult;
    MMCommonUploadResult *_dataResult;
    long long _scene;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completeBlock;
    UniversalUploadResult *_result;
    unsigned long long _totalFileSize;
    unsigned long long _haveUploadSize;
    NSString *_downloadingKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *downloadingKey; // @synthesize downloadingKey=_downloadingKey;
@property(nonatomic) unsigned long long haveUploadSize; // @synthesize haveUploadSize=_haveUploadSize;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(retain, nonatomic) UniversalUploadResult *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMCommonUploadResult *dataResult; // @synthesize dataResult=_dataResult;
@property(retain, nonatomic) MMCommonUploadResult *middleResult; // @synthesize middleResult=_middleResult;
@property(retain, nonatomic) MMCommonUploadResult *thumbResult; // @synthesize thumbResult=_thumbResult;
@property(retain, nonatomic) MMCommonCgiUploader *dataUploader; // @synthesize dataUploader=_dataUploader;
@property(retain, nonatomic) MMCommonCgiUploader *middleDataUploader; // @synthesize middleDataUploader=_middleDataUploader;
@property(retain, nonatomic) MMCommonCgiUploader *thumbUploader; // @synthesize thumbUploader=_thumbUploader;
@property(nonatomic) _Bool enableHitCheck; // @synthesize enableHitCheck=_enableHitCheck;
@property(nonatomic) _Bool isUseCgi; // @synthesize isUseCgi=_isUseCgi;
@property(retain, nonatomic) NSString *bigFileAesKey; // @synthesize bigFileAesKey=_bigFileAesKey;
@property(retain, nonatomic) NSString *bigFileSignature; // @synthesize bigFileSignature=_bigFileSignature;
@property(retain, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *middleAesKey; // @synthesize middleAesKey=_middleAesKey;
@property(retain, nonatomic) NSString *middleFileID; // @synthesize middleFileID=_middleFileID;
@property(nonatomic) int middleFileType; // @synthesize middleFileType=_middleFileType;
@property(retain, nonatomic) NSString *thumbAesKey; // @synthesize thumbAesKey=_thumbAesKey;
@property(retain, nonatomic) NSString *thumbFileID; // @synthesize thumbFileID=_thumbFileID;
@property(nonatomic) int thumbFileType; // @synthesize thumbFileType=_thumbFileType;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *middleFilePath; // @synthesize middleFilePath=_middleFilePath;
@property(retain, nonatomic) NSString *thumbFilePath; // @synthesize thumbFilePath=_thumbFilePath;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (id)downloadDataWithFileId:(id)arg1 aeskey:(id)arg2 filePath:(id)arg3 fileType:(int)arg4 complete:(CDUnknownBlockType)arg5;
- (void)onUploadSuccess:(id)arg1 result:(id)arg2;
- (void)onUploadProgress:(id)arg1 uploadProgress:(double)arg2;
- (void)onUploadFail:(id)arg1 uploadId:(id)arg2 retCode:(long long)arg3;
- (void)startCdnUpload;
- (_Bool)tryStartNextCgiUploadTask;
- (_Bool)startCgiUploadTask;
- (_Bool)checkLocalResource:(_Bool)arg1;
- (void)tryStartUpload;
- (void)stopUpload;
- (void)startUploadWithProgress:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (long long)getCgiUploadScene:(long long)arg1;
- (id)initWithScene:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

