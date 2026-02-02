//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RawVideoUploadTask
{
    _Bool _bStop;
    NSString *_downloadFileKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *downloadFileKey; // @synthesize downloadFileKey=_downloadFileKey;
@property(nonatomic) _Bool bStop; // @synthesize bStop=_bStop;
- (void)onDownloadTaskSuccess;
- (void)tryOverwriteMsgContent:(id)arg1;
- (void)onUploadSuccess:(id)arg1;
- (void)onUploadFail:(id)arg1;
- (void)onCheckExistOnlyFail;
- (void)uploadVideoDataToCdn;
- (void)tryUploadRawData;
- (void)downloadRawVideo;
- (id)generateDownloadArgsWrap;
- (void)exportNormalVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportSlowMotionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportRawVideo;
- (void)processAssetTask;
- (void)stopTask;
- (void)startTask;
- (id)initWithMsgWrap:(id)arg1;

@end

