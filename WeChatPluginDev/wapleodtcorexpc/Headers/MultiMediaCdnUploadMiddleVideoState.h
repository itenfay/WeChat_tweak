//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiMediaCdnUploadMiddleVideoState
{
    _Bool _enableHitCheck;
    int _retryCount;
    NSString *_uploadFileKey;
    unsigned long long _totalFileSize;
    unsigned long long _haveUploadSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long haveUploadSize; // @synthesize haveUploadSize=_haveUploadSize;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *uploadFileKey; // @synthesize uploadFileKey=_uploadFileKey;
@property(nonatomic) _Bool enableHitCheck; // @synthesize enableHitCheck=_enableHitCheck;
- (_Bool)retryUpload;
- (struct C2CUploadRequest)getUploadRequest;
- (void)onCdnUploadDataSuccess:(id)arg1 aesk:(id)arg2;
- (void)retryUploadDataWithoutHitcheck;
- (void)checkDataMd5:(id)arg1;
- (void)onUploadFail:(id)arg1;
- (void)startUpload;
- (id)getStateName;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

