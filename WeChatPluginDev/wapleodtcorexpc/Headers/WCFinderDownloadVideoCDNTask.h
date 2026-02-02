//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, WCFinderFeedMediaWrap;

@interface WCFinderDownloadVideoCDNTask : NSObject
{
    _Bool _bSourceChanged;
    _Bool _bChatRoomPreload;
    _Bool _bPreloadTask;
    _Bool _bPreloadFinish;
    _Bool _bReceiveMoov;
    _Bool _bReceivePreData;
    _Bool _preloadTaskDownloadTotalFile;
    _Bool _needPreloadFirstFrame;
    _Bool _hasPreloadFirstFrame;
    _Bool _isLowPriorityTask;
    _Bool _useMulitBitRate;
    _Bool _isHLS;
    _Bool _hotFlag;
    _Bool _isBackendPreloadTask;
    _Bool _bUseDCIP;
    unsigned int _taskId;
    int _downloadMode;
    unsigned int _createTime;
    unsigned int _preloadPercent;
    unsigned int _totalLength;
    unsigned int _finishedLegth;
    int _filetype;
    int _apptype;
    NSString *_clientId;
    WCFinderFeedMediaWrap *_mediaItem;
    NSString *_tmpPath;
    NSString *_formatPath;
    NSString *_tid;
    NSString *_dataUrl;
    NSString *_realDownLoadURL;
    unsigned long long _ui64StartTime;
    double _getMoovTime;
    unsigned long long _enQueueTime;
    unsigned long long _preloadMinSize;
    unsigned long long _firstFrameSize;
    NSString *_decodeKey;
    NSString *_videoDownloadFlag;
    NSArray *_arryIP;
    NSString *_printClientID;
    NSString *_encryptKey;
    NSString *_encryptIV;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *encryptIV; // @synthesize encryptIV=_encryptIV;
@property(copy, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(retain, nonatomic) NSString *printClientID; // @synthesize printClientID=_printClientID;
@property(retain, nonatomic) NSArray *arryIP; // @synthesize arryIP=_arryIP;
@property(nonatomic) _Bool bUseDCIP; // @synthesize bUseDCIP=_bUseDCIP;
@property(nonatomic) _Bool isBackendPreloadTask; // @synthesize isBackendPreloadTask=_isBackendPreloadTask;
@property(nonatomic) _Bool hotFlag; // @synthesize hotFlag=_hotFlag;
@property(nonatomic) _Bool isHLS; // @synthesize isHLS=_isHLS;
@property(nonatomic) _Bool useMulitBitRate; // @synthesize useMulitBitRate=_useMulitBitRate;
@property(copy, nonatomic) NSString *videoDownloadFlag; // @synthesize videoDownloadFlag=_videoDownloadFlag;
@property(copy, nonatomic) NSString *decodeKey; // @synthesize decodeKey=_decodeKey;
@property(nonatomic) unsigned long long firstFrameSize; // @synthesize firstFrameSize=_firstFrameSize;
@property(nonatomic) unsigned long long preloadMinSize; // @synthesize preloadMinSize=_preloadMinSize;
@property(nonatomic) unsigned long long enQueueTime; // @synthesize enQueueTime=_enQueueTime;
@property(nonatomic) double getMoovTime; // @synthesize getMoovTime=_getMoovTime;
@property(nonatomic) unsigned long long ui64StartTime; // @synthesize ui64StartTime=_ui64StartTime;
@property(retain, nonatomic) NSString *realDownLoadURL; // @synthesize realDownLoadURL=_realDownLoadURL;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool isLowPriorityTask; // @synthesize isLowPriorityTask=_isLowPriorityTask;
@property(nonatomic) _Bool hasPreloadFirstFrame; // @synthesize hasPreloadFirstFrame=_hasPreloadFirstFrame;
@property(nonatomic) _Bool needPreloadFirstFrame; // @synthesize needPreloadFirstFrame=_needPreloadFirstFrame;
@property(nonatomic) _Bool preloadTaskDownloadTotalFile; // @synthesize preloadTaskDownloadTotalFile=_preloadTaskDownloadTotalFile;
@property(nonatomic) _Bool bReceivePreData; // @synthesize bReceivePreData=_bReceivePreData;
@property(nonatomic) _Bool bReceiveMoov; // @synthesize bReceiveMoov=_bReceiveMoov;
@property(nonatomic) int apptype; // @synthesize apptype=_apptype;
@property(nonatomic) int filetype; // @synthesize filetype=_filetype;
@property(nonatomic) unsigned int finishedLegth; // @synthesize finishedLegth=_finishedLegth;
@property(nonatomic) unsigned int totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) unsigned int preloadPercent; // @synthesize preloadPercent=_preloadPercent;
@property(nonatomic) _Bool bPreloadFinish; // @synthesize bPreloadFinish=_bPreloadFinish;
@property(nonatomic) _Bool bPreloadTask; // @synthesize bPreloadTask=_bPreloadTask;
@property(nonatomic) _Bool bChatRoomPreload; // @synthesize bChatRoomPreload=_bChatRoomPreload;
@property(retain, nonatomic) NSString *formatPath; // @synthesize formatPath=_formatPath;
@property(retain, nonatomic) NSString *tmpPath; // @synthesize tmpPath=_tmpPath;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool bSourceChanged; // @synthesize bSourceChanged=_bSourceChanged;
@property(nonatomic) int downloadMode; // @synthesize downloadMode=_downloadMode;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (id)valueForKey:(id)arg1;
@property(readonly, nonatomic) NSData *finderCtrlInfo;
- (id)description;
- (id)getDNSKey;
- (id)getHost;

@end

