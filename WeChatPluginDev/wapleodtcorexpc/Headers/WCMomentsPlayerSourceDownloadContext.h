//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnComVideoProcessInfo, CdnDownloadTaskInfo, CdnProgressInfo, NSDate, WCDownloadArgsWrap, WCMomentsPlayerSourceDetermination;

@interface WCMomentsPlayerSourceDownloadContext : NSObject
{
    _Bool _isPreload;
    _Bool _isDownloading;
    _Bool _isDownloadMoovReady;
    _Bool _isDownloadCompleted;
    WCDownloadArgsWrap *_downloadArgs;
    WCMomentsPlayerSourceDetermination *_sourceDetermination;
    NSDate *_downloadStartTime;
    NSDate *_downloadEndTime;
    CdnComVideoProcessInfo *_downloadProgressInfoWhenMoovReady;
    CdnDownloadTaskInfo *_downloadTaskInfoWhenStopped;
    CdnProgressInfo *_downloadProgressInfoWhenPreloadCompleted;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDownloadCompleted; // @synthesize isDownloadCompleted=_isDownloadCompleted;
@property(nonatomic) _Bool isDownloadMoovReady; // @synthesize isDownloadMoovReady=_isDownloadMoovReady;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) CdnProgressInfo *downloadProgressInfoWhenPreloadCompleted; // @synthesize downloadProgressInfoWhenPreloadCompleted=_downloadProgressInfoWhenPreloadCompleted;
@property(retain, nonatomic) CdnDownloadTaskInfo *downloadTaskInfoWhenStopped; // @synthesize downloadTaskInfoWhenStopped=_downloadTaskInfoWhenStopped;
@property(retain, nonatomic) CdnComVideoProcessInfo *downloadProgressInfoWhenMoovReady; // @synthesize downloadProgressInfoWhenMoovReady=_downloadProgressInfoWhenMoovReady;
@property(retain, nonatomic) NSDate *downloadEndTime; // @synthesize downloadEndTime=_downloadEndTime;
@property(retain, nonatomic) NSDate *downloadStartTime; // @synthesize downloadStartTime=_downloadStartTime;
@property(retain, nonatomic) WCMomentsPlayerSourceDetermination *sourceDetermination; // @synthesize sourceDetermination=_sourceDetermination;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(retain, nonatomic) WCDownloadArgsWrap *downloadArgs; // @synthesize downloadArgs=_downloadArgs;

@end

