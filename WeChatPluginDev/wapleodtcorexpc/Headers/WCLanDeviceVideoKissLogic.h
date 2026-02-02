//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnUploadTaskInfo, NSMutableArray, NSMutableDictionary, WCLanDeviceData;

@interface WCLanDeviceVideoKissLogic
{
    NSMutableDictionary *m_sendTaskMap;
    WCLanDeviceData *m_deviceData;
    NSMutableArray *m_deviceWaitingUploadArray;
    CdnUploadTaskInfo *m_uploadInfo;
    _Bool m_isUploading;
    unsigned int m_uploadProgress;
    _Bool m_isDownloading;
    NSMutableArray *m_deviceWaitingDownloadArray;
}

- (void).cxx_destruct;
- (_Bool)isSightVideoExist;
- (_Bool)cancelTaskWithDevice:(id)arg1;
- (void)onKissDeviceProgressResponeWithProgress:(double)arg1 queueType:(unsigned long long)arg2;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)arg1 queueType:(unsigned long long)arg2;
- (void)onSendFileToWCLanDevice:(long long)arg1 Progress:(float)arg2 isFinish:(_Bool)arg3 ErrCode:(int)arg4;
- (void)kissDeviceWithJsonStr:(id)arg1 filePath:(id)arg2 device:(id)arg3;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (_Bool)stopUploadWithDevice:(id)arg1;
- (void)uploadDeviceData;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (_Bool)stopDownloadVideo:(id)arg1;
- (void)startDownloadVideo;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendVideoRequestWithDevice:(id)arg1 isTroughSever:(_Bool)arg2 fileInfo:(id)arg3 CdnUrl:(id)arg4 xorKey:(unsigned long long)arg5;
- (void)sendVideoRequestWithDevice:(id)arg1 isTroughSever:(_Bool)arg2 fileInfo:(id)arg3 CdnUrl:(id)arg4;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(_Bool)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;

@end

