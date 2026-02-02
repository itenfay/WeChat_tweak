//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HeadImgDownloaderByUrl, HeadImgDownloaderByUsrName, MMHDHeadImgDownloader, NSCache, NSString;
@protocol HeadImgDelegate;

@interface MMHeadImageDownloader
{
    HeadImgDownloaderByUrl *_urlDownloader;
    HeadImgDownloaderByUsrName *_usrNameDownloader;
    MMHDHeadImgDownloader *_hdHeadImgDownloader;
    NSCache *_autoUpdatedUsrName;
    id <HeadImgDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HeadImgDelegate> delegate; // @synthesize delegate;
- (void)onHDHeadImgDownloadFinish:(id)arg1;
- (void)onHeadImgDownloadFinish:(id)arg1 Status:(id)arg2 Image:(id)arg3 Category:(unsigned char)arg4;
- (id)getUsrHDHeadImgUrl:(id)arg1;
- (_Bool)isNeedAutoUpdateHeadImgForUsr:(id)arg1;
- (void)removeUsrFromLastFailureList:(id)arg1;
- (_Bool)isNeedGetHDImg:(id)arg1;
- (unsigned int)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (unsigned int)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (id)getUsrHeadImgUrl:(id)arg1 withCategory:(unsigned char)arg2;
- (void)setDownloadCommonMode;
- (void)setDownloadFastMode;
- (void)cancelRequest:(id)arg1;
- (void)addDownloadRequestWithUrl:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (void)addDownloadRequest:(id)arg1 forCategory:(unsigned char)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

