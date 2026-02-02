//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppDownloadMgr, NSDictionary, NSString;

@interface LiteAppJsApiShareMediaToTimeline
{
    _Bool _isImage;
    _Bool _useCDN;
    MMLiteAppDownloadMgr *_downloadMgr;
    NSDictionary *_tailInfo;
    NSString *_thumbUri;
    NSString *_videoPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *thumbUri; // @synthesize thumbUri=_thumbUri;
@property(nonatomic) _Bool useCDN; // @synthesize useCDN=_useCDN;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(retain, nonatomic) NSDictionary *tailInfo; // @synthesize tailInfo=_tailInfo;
@property(retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)shareVideoToTimeLineWithThumb:(id)arg1;
- (id)genUploadTaskWithVideoPath:(id)arg1 withThumbPath:(id)arg2;
- (id)genUploadTaskWithImagePath:(id)arg1;
- (void)shareMediaToTimeLine:(id)arg1 withThumbPath:(id)arg2;
- (id)getFileDataFromCDN:(id)arg1 url:(id)arg2 isImage:(_Bool)arg3;
- (id)loadFilePath:(id)arg1 isImage:(_Bool)arg2;
- (id)getValidPath:(id)arg1 isImage:(_Bool)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

