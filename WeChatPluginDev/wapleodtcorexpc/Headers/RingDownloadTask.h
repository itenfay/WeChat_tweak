//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class RingDownloadInfo;

@interface RingDownloadTask : NSObject
{
    _Bool _isDownloading;
    RingDownloadInfo *_info;
    CDUnknownBlockType _resolve;
    NSObject *_selfHolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *selfHolder; // @synthesize selfHolder=_selfHolder;
@property(copy, nonatomic) CDUnknownBlockType resolve; // @synthesize resolve=_resolve;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) RingDownloadInfo *info; // @synthesize info=_info;
- (void)cancelTask;
- (void)OnCdnDownload:(id)arg1;
- (id)startdownloadRingFile;
- (id)initWithDownloadInfo:(id)arg1;

@end

