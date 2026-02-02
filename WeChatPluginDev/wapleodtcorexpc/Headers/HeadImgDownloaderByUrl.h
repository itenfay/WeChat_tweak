//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface HeadImgDownloaderByUrl
{
    NSMutableArray *m_userRequestList;
}

- (void).cxx_destruct;
- (void)onModifyContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onDownloadHeadImageFail:(id)arg1;
- (void)startDownloadTaskWithURLChannel:(id)arg1;
- (void)onDownloadComplete:(id)arg1 request:(id)arg2 path:(id)arg3;
- (void)startDownloadWithMars:(id)arg1;
- (void)createNetworkRequest:(id)arg1;
- (void)setDownloadCommonMode;
- (void)setDownloadFastMode;
- (void)addDownloadRequestWithUrl:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (id)init;

@end

