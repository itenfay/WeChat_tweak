//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCDataItem, WCMediaItem;

@interface WCMediaDownloader : NSObject
{
    WCDataItem *_dataItem;
    WCMediaItem *_mediaItem;
    WCMediaDownloader *_retainedSelf;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WCMediaDownloader *retainedSelf; // @synthesize retainedSelf=_retainedSelf;
@property(readonly, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)Video_startDownload;
- (_Bool)Video_hasDownloaded;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)Image_startDownload;
- (_Bool)Image_hasDownloaded;
- (void)clear;
- (void)didFinishWithError:(id)arg1;
- (void)startDownloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasDownloaded;
- (void)_releaseSelf;
- (void)_retainSelf;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

