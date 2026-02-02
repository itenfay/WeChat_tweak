//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiMediaCdnUploadDataState
{
    _Bool _enableHitCheck;
    int _retryCount;
    unsigned long long _totalFileSize;
    NSString *_uploadFileKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uploadFileKey; // @synthesize uploadFileKey=_uploadFileKey;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool enableHitCheck; // @synthesize enableHitCheck=_enableHitCheck;
- (_Bool)retryUpload;
- (struct C2CUploadRequest)getUploadRequest;
- (void)onCdnUploadDataSuccess:(id)arg1 aesk:(id)arg2;
- (void)transformToMiddleVideoUploadState;
- (void)retryUploadDataWithoutHitcheck;
- (void)checkDataMd5:(id)arg1;
- (void)onUploadFail:(id)arg1;
- (void)startUploadData;
- (id)getStateName;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

