//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTextStateMediaItem, NSArray, NSString;

@interface MMTextStateMediaDownloadTaskInfo
{
    struct C2CDownloadResult result;
    _Bool _bSourceChanged;
    _Bool _bChatRoomPreload;
    _Bool _bPreloadTask;
    _Bool _bPreloadFinish;
    _Bool _bReceiveMoov;
    _Bool _bReceivePreData;
    _Bool _bUseDCIP;
    _Bool _bUseXorEncrypt;
    int _downloadMode;
    unsigned int _createTime;
    unsigned int _preloadPercent;
    unsigned int _totalLength;
    unsigned int _finishedLegth;
    int _filetype;
    int _apptype;
    NSString *_clientId;
    MMTextStateMediaItem *_mediaItem;
    NSString *_tmpPath;
    NSString *_formatPath;
    NSArray *_arryIP;
    NSString *_dataUrl;
    unsigned long long _xorEncryKey;
    unsigned long long _ui64StartTime;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long ui64StartTime; // @synthesize ui64StartTime=_ui64StartTime;
@property(nonatomic) unsigned long long xorEncryKey; // @synthesize xorEncryKey=_xorEncryKey;
@property(nonatomic) _Bool bUseXorEncrypt; // @synthesize bUseXorEncrypt=_bUseXorEncrypt;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(retain, nonatomic) NSArray *arryIP; // @synthesize arryIP=_arryIP;
@property(nonatomic) _Bool bUseDCIP; // @synthesize bUseDCIP=_bUseDCIP;
@property(nonatomic) int apptype; // @synthesize apptype=_apptype;
@property(nonatomic) int filetype; // @synthesize filetype=_filetype;
@property(nonatomic) _Bool bReceivePreData; // @synthesize bReceivePreData=_bReceivePreData;
@property(nonatomic) _Bool bReceiveMoov; // @synthesize bReceiveMoov=_bReceiveMoov;
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
@property(retain, nonatomic) MMTextStateMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)description;
- (id)getDNSKey;
- (id)getHost;

@end

