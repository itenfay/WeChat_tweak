//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, CMessageWrap, CdnProgressInfo, CdnUploadTaskInfo, MMCommonCgiUploader, NSString, NSURL;
@protocol VideoUploadTaskDelegate;

@interface VideoUploadTask : NSObject
{
    _Bool _isSlowMotion;
    _Bool _isUseCgi;
    _Bool _isRawTask;
    _Bool _bCheckExistOnly;
    _Bool _enableHitCheck;
    _Bool _bJustUploadDataWithoutMD5Hit;
    int _taskState;
    int _retryMaxCount;
    id <VideoUploadTaskDelegate> _delegate;
    NSString *_fileID;
    NSString *_aesKey;
    NSString *_thumbFileID;
    NSString *_thumbAeskey;
    NSURL *_url;
    AVAsset *_asset;
    NSString *_videoPath;
    CdnProgressInfo *_progressInfo;
    MMCommonCgiUploader *_cgiUploader;
    unsigned long long _startTime;
    NSString *_fileKey;
    CMessageWrap *_msgWrap;
    CdnUploadTaskInfo *_taskInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int retryMaxCount; // @synthesize retryMaxCount=_retryMaxCount;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
@property(nonatomic) _Bool enableHitCheck; // @synthesize enableHitCheck=_enableHitCheck;
@property(nonatomic) _Bool bCheckExistOnly; // @synthesize bCheckExistOnly=_bCheckExistOnly;
@property(nonatomic) _Bool isRawTask; // @synthesize isRawTask=_isRawTask;
@property(retain, nonatomic) CdnUploadTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(nonatomic) _Bool isUseCgi; // @synthesize isUseCgi=_isUseCgi;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int taskState; // @synthesize taskState=_taskState;
@property(retain, nonatomic) MMCommonCgiUploader *cgiUploader; // @synthesize cgiUploader=_cgiUploader;
@property(retain, nonatomic) CdnProgressInfo *progressInfo; // @synthesize progressInfo=_progressInfo;
@property(nonatomic) _Bool isSlowMotion; // @synthesize isSlowMotion=_isSlowMotion;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *thumbAeskey; // @synthesize thumbAeskey=_thumbAeskey;
@property(retain, nonatomic) NSString *thumbFileID; // @synthesize thumbFileID=_thumbFileID;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) __weak id <VideoUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUploadProgress:(id)arg1 uploadProgress:(double)arg2;
- (void)onUploadFail:(id)arg1 uploadId:(id)arg2 retCode:(long long)arg3;
- (void)onUploadSuccess:(id)arg1 result:(id)arg2;
- (void)changeToHardLink:(id)arg1;
- (void)taskFailWithErrorType:(int)arg1;
- (_Bool)changeToState:(int)arg1;
- (void)startForwardMsgTask;
- (void)stopTask;
- (void)setVideoAsset:(id)arg1 url:(id)arg2;
- (void)restartTaskWithoutHitCheck;
- (_Bool)isHitMD5;
- (void)onUploadSuccess:(id)arg1;
- (void)startTask;
- (void)setThumbFileID:(id)arg1 Aesk:(id)arg2;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

