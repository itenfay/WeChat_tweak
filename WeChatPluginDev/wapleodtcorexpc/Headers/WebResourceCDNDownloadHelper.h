//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WebviewLocalResItem;
@protocol WebResourceCDNDownloadHelperDelegate;

@interface WebResourceCDNDownloadHelper
{
    _Bool _isDownloading;
    NSMutableArray *_downloadArray;
    id <WebResourceCDNDownloadHelperDelegate> _delegate;
    WebviewLocalResItem *_curDownloadingItem;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WebResourceCDNDownloadHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCdnIdResp:(id)arg1;
- (void)startDownloadNextItem;
- (void)sendDownloadRequest;
- (void)sendGetCdnURLRequest;
- (_Bool)stopDownload;
- (_Bool)startDownload;
- (void)addDownloadItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

