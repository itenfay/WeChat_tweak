//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;
@protocol EmoticonLensIconDownloaderDelegate;

@interface EmoticonLensIconDownloader
{
    id <EmoticonLensIconDownloaderDelegate> _delegate;
    NSMutableDictionary *_downloadingTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
@property(nonatomic) __weak id <EmoticonLensIconDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnCdnDownload:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadError:(id)arg1;
- (void)startDownloadLensIcon:(id)arg1 filePath:(id)arg2 forLensId:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

