//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTextStateMediaDataPB, MMTextStateMediaDownloadImageCdnMgr, MMTextStateMediaDownloadVideoCdnMgr, MMTextStateMediaUploadCdnMgr, NSString;

@interface MMTextStateMediaMgr
{
    MMTextStateMediaDataPB *m_textStateMediaData;
    MMTextStateMediaDownloadVideoCdnMgr *_downloadVideoCdnMgr;
    MMTextStateMediaDownloadImageCdnMgr *_downloadImageCdnMgr;
    MMTextStateMediaUploadCdnMgr *_uploadMediaCdnMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTextStateMediaUploadCdnMgr *uploadMediaCdnMgr; // @synthesize uploadMediaCdnMgr=_uploadMediaCdnMgr;
@property(retain, nonatomic) MMTextStateMediaDownloadImageCdnMgr *downloadImageCdnMgr; // @synthesize downloadImageCdnMgr=_downloadImageCdnMgr;
@property(retain, nonatomic) MMTextStateMediaDownloadVideoCdnMgr *downloadVideoCdnMgr; // @synthesize downloadVideoCdnMgr=_downloadVideoCdnMgr;
- (void)didTextStateMediaUploadFail:(id)arg1;
- (void)didTextStateMediaUploadSuccess:(id)arg1;
- (void)p_loadTextStateMediaInternal;
- (void)p_saveTextStateMediaToDataFileInternal;
- (id)p_getTextStateMediaDataFilePath;
- (void)setCurrentTextStateMediaUploadTaskInfoPublishType:(unsigned int)arg1;
- (void)saveTextStateMediaUploadTaskInfo:(id)arg1;
- (_Bool)IsStreamDownloadingWithMediaItem:(id)arg1;
- (_Bool)StopVideoDownloadWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)StartVideoDownloadWithMediaWrap:(id)arg1;
- (void)StartVideoPreloadWithItems:(id)arg1;
- (void)StartDownloadImageWithMediaItem:(id)arg1 Priority:(_Bool)arg2 isThumb:(_Bool)arg3;
- (void)StartDownloadImageWithMediaItem:(id)arg1 isThumb:(_Bool)arg2;
- (void)StartPreloadImageWithItems:(id)arg1 isThumb:(_Bool)arg2;
- (void)resetAndTryUploadTaskInfo;
- (void)retryUploadMedia;
- (void)startUploadLivePhotoMedia:(id)arg1 tid:(id)arg2;
- (void)startUploadImageMedia:(id)arg1 tid:(id)arg2;
- (void)startUploadWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 tid:(id)arg4;
- (id)genTextStateTid:(id)arg1 createTime:(unsigned int)arg2 modifyTime:(unsigned int)arg3;
- (id)genTextStateTid:(id)arg1 createTime:(unsigned int)arg2;
- (void)initData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

