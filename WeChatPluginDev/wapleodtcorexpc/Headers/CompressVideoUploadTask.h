//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MsgDataDownloadLogic, NSString, ThumbImageUploader, VideoEncodeParams;

@interface CompressVideoUploadTask
{
    _Bool _isSkipTransH264;
    _Bool _bTryHevcConvert;
    _Bool _isTryCompressVideoFromRawVideo;
    unsigned long long _m_ui64StartTime;
    VideoEncodeParams *_params;
    MsgDataDownloadLogic *_downloadLogic;
    ThumbImageUploader *_thumbImageUploader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ThumbImageUploader *thumbImageUploader; // @synthesize thumbImageUploader=_thumbImageUploader;
@property(retain, nonatomic) MsgDataDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(retain, nonatomic) VideoEncodeParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool isTryCompressVideoFromRawVideo; // @synthesize isTryCompressVideoFromRawVideo=_isTryCompressVideoFromRawVideo;
@property(nonatomic) _Bool bTryHevcConvert; // @synthesize bTryHevcConvert=_bTryHevcConvert;
@property(nonatomic) _Bool isSkipTransH264; // @synthesize isSkipTransH264=_isSkipTransH264;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime=_m_ui64StartTime;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)tryOverwriteMsgContent:(id)arg1;
- (void)onUploadSuccess:(id)arg1;
- (void)reportOnUploadSucc:(id)arg1;
- (void)onUploadFail:(id)arg1;
- (void)onCheckExistOnlyFail;
- (void)uploadVideoDataToCdn;
- (id)getUploadThumbPath;
- (void)uploadVideoData;
- (void)tryUploadData;
- (void)downloadVideo;
- (_Bool)tryConvertToH264;
- (void)asyncCompressVideo:(_Bool)arg1;
- (void)stopTask;
- (void)startTask;
- (_Bool)isNeedCompress;
- (id)initWithMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

