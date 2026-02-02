//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnUploadTaskInfo, NSMutableArray, NSMutableDictionary, WCLanDeviceData;

@interface WCLanDeviceFileKissLogic
{
    NSMutableDictionary *m_sendTaskMap;
    WCLanDeviceData *m_deviceData;
    NSMutableArray *m_deviceWaitingUploadArray;
    CdnUploadTaskInfo *m_uploadInfo;
    _Bool m_isUploading;
    unsigned int m_uploadProgress;
}

- (void).cxx_destruct;
- (_Bool)cancelTaskWithDevice:(id)arg1;
- (void)onKissDeviceProgressResponeWithProgressInfo:(id)arg1;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (_Bool)stopUploadWithDevice:(id)arg1;
- (void)uploadDeviceData;
- (void)onSendFileToWCLanDevice:(long long)arg1 Progress:(float)arg2 isFinish:(_Bool)arg3 ErrCode:(int)arg4;
- (void)kissDeviceWithJsonStr:(id)arg1 filePath:(id)arg2 device:(id)arg3;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendFileRequestWithDevice:(id)arg1 isTroughSever:(_Bool)arg2 fileInfo:(id)arg3 uploadInfo:(id)arg4;
- (void)dealloc;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(_Bool)arg3;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;

@end

