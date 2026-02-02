//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCDownloadArgsWrap, WCPlayerPlaybackInfo, WCPlayerReporter;
@protocol WCPlayerDownloaderDelegate;

@interface WCPlayerDownloader : NSObject
{
    _Bool _bHadRecievedAllData;
    _Bool _bHadRecieveMoov;
    _Bool _bHadStopDownload;
    _Bool _isSourceChanged;
    _Bool _isHadRetryStart;
    _Bool _isDownloadTaskLauncher;
    unsigned int _lastUpdateNetwork;
    unsigned long long _playerMode;
    WCPlayerReporter *_reporter;
    WCDownloadArgsWrap *_downloadArgsWrap;
    NSMutableArray *_arrDownloadArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    NSString *_nsM3u8;
    long long _fileLength;
    NSString *_mediaIdentifier;
    id <WCPlayerDownloaderDelegate> _delegate;
    NSString *_nsIdentifier;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _moovReadyBlock;
    CDUnknownBlockType _m3u8ReadyBlock;
    CDUnknownBlockType _dataReadyBlock;
    CDUnknownBlockType _fastCompleteBlock;
    CDUnknownBlockType _downloadCompleteBlock;
}

+ (_Bool)copyVideoFromTmpPath:(id)arg1 toFormatPath:(id)arg2 identifier:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType downloadCompleteBlock; // @synthesize downloadCompleteBlock=_downloadCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType fastCompleteBlock; // @synthesize fastCompleteBlock=_fastCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType dataReadyBlock; // @synthesize dataReadyBlock=_dataReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType m3u8ReadyBlock; // @synthesize m3u8ReadyBlock=_m3u8ReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType moovReadyBlock; // @synthesize moovReadyBlock=_moovReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) _Bool isDownloadTaskLauncher; // @synthesize isDownloadTaskLauncher=_isDownloadTaskLauncher;
@property(nonatomic) _Bool isHadRetryStart; // @synthesize isHadRetryStart=_isHadRetryStart;
@property(nonatomic) _Bool isSourceChanged; // @synthesize isSourceChanged=_isSourceChanged;
@property(nonatomic) unsigned int lastUpdateNetwork; // @synthesize lastUpdateNetwork=_lastUpdateNetwork;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(nonatomic) __weak id <WCPlayerDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
@property(nonatomic) long long fileLength; // @synthesize fileLength=_fileLength;
@property(retain, nonatomic) NSString *nsM3u8; // @synthesize nsM3u8=_nsM3u8;
@property(nonatomic) _Bool bHadStopDownload; // @synthesize bHadStopDownload=_bHadStopDownload;
@property(nonatomic) _Bool bHadRecieveMoov; // @synthesize bHadRecieveMoov=_bHadRecieveMoov;
@property(nonatomic) _Bool bHadRecievedAllData; // @synthesize bHadRecievedAllData=_bHadRecievedAllData;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) NSMutableArray *arrDownloadArgs; // @synthesize arrDownloadArgs=_arrDownloadArgs;
@property(retain, nonatomic) WCDownloadArgsWrap *downloadArgsWrap; // @synthesize downloadArgsWrap=_downloadArgsWrap;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned long long playerMode; // @synthesize playerMode=_playerMode;
- (id)randomSelectDownloadArgs;
- (_Bool)retryBySwitchDataSource;
- (int)getRecentAverageSpeed;
- (id)streamTmpPath;
- (id)formatPath;
- (void)handleProgressEvent:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)handleErrorEvent:(id)arg1;
- (void)hanleStartDownloadEvent:(id)arg1;
- (void)handleMoovReadyEvent:(id)arg1;
- (void)tryInitFileSizeWithLocalFile;
- (void)handleM3u8ReadyEvent:(id)arg1;
- (void)handleDataAvaiableEvent:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (void)tryFixMP4Size;
- (void)handleSuccessEvent:(id)arg1;
- (void)handleSourceChangedEvent;
- (void)registerDownloadEvent:(_Bool)arg1;
- (void)initCallbackBlock;
- (void)startDataPreload;
- (void)stopDownloadVideo;
- (void)onStartDownloadFailWithRetCode:(int)arg1;
- (void)delayNotifyWhenHitLocalCache;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (_Bool)startInternalDownload;
- (struct _NSRange)requestDataWithRange:(struct _NSRange)arg1 Sec:(float)arg2;
- (unsigned long long)getLocalAvailableLengthWithOffset:(unsigned long long)arg1;
- (id)getVideoDataWithRange:(struct _NSRange)arg1;
- (void)dealloc;
- (id)initWithPlaybackInfo:(id)arg1 downloadArgs:(id)arg2;

@end

