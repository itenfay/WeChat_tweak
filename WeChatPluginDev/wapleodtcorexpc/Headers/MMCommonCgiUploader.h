//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMCommonUploadResult, NSMutableArray, NSMutableDictionary, NSString;
@protocol MMCommonCgiUploaderDelegate;

@interface MMCommonCgiUploader : NSObject
{
    _Bool _isRunning;
    unsigned int _sectionLength;
    NSString *_uploadFilePath;
    long long _scene;
    long long _fileType;
    long long _maxConcurrentCount;
    NSString *_lastUploadId;
    NSString *_thumbFileId;
    NSString *_thumbAesKey;
    NSString *_midFileId;
    NSString *_midAesKey;
    long long _midType;
    NSString *_bigFileSignature;
    NSString *_bigFileAesKey;
    NSString *_customRequestHeader;
    unsigned long long _fileSize;
    NSString *_uploadFileMd5;
    MMCommonUploadResult *_result;
    id <MMCommonCgiUploaderDelegate> _delegate;
    NSString *_currUploadId;
    NSMutableArray *_waitingTasks;
    NSMutableDictionary *_runningTasks;
    long long _sectionIndexLimit;
    long long _sectionCount;
    long long _successCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long successCount; // @synthesize successCount=_successCount;
@property(nonatomic) long long sectionCount; // @synthesize sectionCount=_sectionCount;
@property(nonatomic) long long sectionIndexLimit; // @synthesize sectionIndexLimit=_sectionIndexLimit;
@property(retain, nonatomic) NSMutableDictionary *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(retain, nonatomic) NSMutableArray *waitingTasks; // @synthesize waitingTasks=_waitingTasks;
@property(retain, nonatomic) NSString *currUploadId; // @synthesize currUploadId=_currUploadId;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <MMCommonCgiUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMCommonUploadResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *uploadFileMd5; // @synthesize uploadFileMd5=_uploadFileMd5;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *customRequestHeader; // @synthesize customRequestHeader=_customRequestHeader;
@property(retain, nonatomic) NSString *bigFileAesKey; // @synthesize bigFileAesKey=_bigFileAesKey;
@property(retain, nonatomic) NSString *bigFileSignature; // @synthesize bigFileSignature=_bigFileSignature;
@property(nonatomic) long long midType; // @synthesize midType=_midType;
@property(retain, nonatomic) NSString *midAesKey; // @synthesize midAesKey=_midAesKey;
@property(retain, nonatomic) NSString *midFileId; // @synthesize midFileId=_midFileId;
@property(retain, nonatomic) NSString *thumbAesKey; // @synthesize thumbAesKey=_thumbAesKey;
@property(retain, nonatomic) NSString *thumbFileId; // @synthesize thumbFileId=_thumbFileId;
@property(retain, nonatomic) NSString *lastUploadId; // @synthesize lastUploadId=_lastUploadId;
@property(nonatomic) unsigned int sectionLength; // @synthesize sectionLength=_sectionLength;
@property(nonatomic) long long maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
@property(nonatomic) long long fileType; // @synthesize fileType=_fileType;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *uploadFilePath; // @synthesize uploadFilePath=_uploadFilePath;
- (id)createInitialParam;
- (id)createSectionTasks;
- (void)onTaskFailure:(id)arg1 canRetry:(_Bool)arg2 retCode:(long long)arg3;
- (void)onTaskSuccess:(id)arg1 response:(id)arg2;
- (void)uploadInnerSections;
- (void)uploadSingleSection;
- (void)stopUpload;
- (void)startUpload;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

