//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSURL;

@interface MMLocalFileDetailLogicController
{
    unsigned long long _fileSize;
    NSURL *_fileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)didFail;
- (void)didFinish;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)stopDownload;
- (void)startDownload;
- (_Bool)forbidOperation;
- (_Bool)isViewBePopedStopDownload;
- (_Bool)autoDownload;
- (_Bool)isDownloading;
- (id)getMusicLocalFileDataUnit;
- (unsigned long long)GetFileSize;
- (id)GetFilePath;
- (id)GetFileName;
- (unsigned int)GetPreviewType;
- (id)initWithFileURL:(id)arg1;

@end

