//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;
@protocol HeadImgDownloaderDelegate;

@interface MMHDHeadImgDownloader
{
    id <HeadImgDownloaderDelegate> downloadDelegate;
    NSMutableDictionary *_m_downloadTaskDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_downloadTaskDic; // @synthesize m_downloadTaskDic=_m_downloadTaskDic;
@property(nonatomic) __weak id <HeadImgDownloaderDelegate> downloadDelegate; // @synthesize downloadDelegate;
- (void)onDownloadPartOK:(id)arg1 task:(id)arg2;
- (void)onDownloadPartFailForTask:(id)arg1;
- (void)onDownloadCompleteForTask:(id)arg1;
- (void)updateNormalHeadForTask:(id)arg1;
- (id)generateNormalHeadData:(id)arg1;
- (void)MessageReturnCDN:(id)arg1 task:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startDownloadWithMars:(id)arg1;
- (unsigned int)startDownloadTaskWithURLChannel:(id)arg1;
- (_Bool)startDownloadHeadImageWithdDownloadTask:(id)arg1;
- (unsigned int)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (unsigned int)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (void)stopDownloadForName:(id)arg1;
- (_Bool)saveData:(id)arg1 forTask:(id)arg2 file:(id)arg3;
- (_Bool)downloadHDImg:(id)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3;
- (unsigned int)getFileSize:(id)arg1;
- (id)getTempFilePath:(id)arg1;
- (void)removeTaskForName:(id)arg1;
- (id)getTaskForName:(id)arg1;
- (_Bool)addTask:(id)arg1;
- (_Bool)isExistTheSameUsername:(id)arg1;
- (void)dealloc;
- (id)init;

@end

