//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMXp2pWrapperDelegate, OS_dispatch_queue;

@interface MMXp2pWrapper : NSObject
{
    NSString *_p2pStremId;
    NSString *_host;
    _Bool _needUpdateP2pService;
    _Bool _p2pStarted;
    NSString *_token;
    _Bool _p2pDebugStatus;
    unsigned long long _initTime;
    _Bool _bStartP2pService;
    _Bool _bPostDelayStopP2p;
    unsigned int _p2pSwitch;
    unsigned int _p2pUploadSwitch;
    unsigned int _p2pDownloadMnSwitch;
    unsigned int _p2pStatSwitch;
    unsigned int _p2pDebugLogSwitch;
    unsigned int _p2pMaxLoad;
    unsigned int _p2pMaxBufferSize;
    unsigned int _p2pUploadDawangkaSwitch;
    unsigned int _p2pVerifyStream;
    id <MMXp2pWrapperDelegate> _delegate;
    NSString *_p2pAppid;
    NSString *_p2pKey;
    NSString *_p2pSecret;
    NSString *_cdnPlayUrl;
    NSObject<OS_dispatch_queue> *_p2pProcessingQueue;
}

+ (void)destroySharedInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic, setter=setBPostDelayStopP2p:) _Bool bPostDelayStopP2p; // @synthesize bPostDelayStopP2p=_bPostDelayStopP2p;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *p2pProcessingQueue; // @synthesize p2pProcessingQueue=_p2pProcessingQueue;
@property _Bool bStartP2pService; // @synthesize bStartP2pService=_bStartP2pService;
@property(retain) NSString *cdnPlayUrl; // @synthesize cdnPlayUrl=_cdnPlayUrl;
@property(nonatomic) unsigned int p2pVerifyStream; // @synthesize p2pVerifyStream=_p2pVerifyStream;
@property(retain, nonatomic) NSString *p2pSecret; // @synthesize p2pSecret=_p2pSecret;
@property(retain, nonatomic) NSString *p2pKey; // @synthesize p2pKey=_p2pKey;
@property(retain, nonatomic) NSString *p2pAppid; // @synthesize p2pAppid=_p2pAppid;
@property(nonatomic) unsigned int p2pUploadDawangkaSwitch; // @synthesize p2pUploadDawangkaSwitch=_p2pUploadDawangkaSwitch;
@property(nonatomic) unsigned int p2pMaxBufferSize; // @synthesize p2pMaxBufferSize=_p2pMaxBufferSize;
@property(nonatomic) unsigned int p2pMaxLoad; // @synthesize p2pMaxLoad=_p2pMaxLoad;
@property(nonatomic) unsigned int p2pDebugLogSwitch; // @synthesize p2pDebugLogSwitch=_p2pDebugLogSwitch;
@property(nonatomic) unsigned int p2pStatSwitch; // @synthesize p2pStatSwitch=_p2pStatSwitch;
@property(nonatomic) unsigned int p2pDownloadMnSwitch; // @synthesize p2pDownloadMnSwitch=_p2pDownloadMnSwitch;
@property(nonatomic) unsigned int p2pUploadSwitch; // @synthesize p2pUploadSwitch=_p2pUploadSwitch;
@property(nonatomic) unsigned int p2pSwitch; // @synthesize p2pSwitch=_p2pSwitch;
@property(nonatomic) __weak id <MMXp2pWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)realStopP2P;
- (void)reset;
- (void)destroyClean;
- (void)runOnMainThread:(CDUnknownBlockType)arg1;
- (void)runAsyncOnP2pQueue:(CDUnknownBlockType)arg1;
- (void)runSyncOnP2pQueueTimeout:(CDUnknownBlockType)arg1;
- (void)runSyncOnP2pQueue:(CDUnknownBlockType)arg1;
- (id)randomStringWithLength;
- (void)updateP2pSwitches:(unsigned int)arg1 p2pUpload:(unsigned int)arg2 p2pDownloadMn:(unsigned int)arg3 p2pStat:(unsigned int)arg4 p2pDebugLog:(unsigned int)arg5 p2pMaxLoad:(unsigned int)arg6 p2pMaxBufferSize:(unsigned int)arg7 p2pUploadDawangka:(unsigned int)arg8 p2pAppid:(id)arg9 p2pKey:(id)arg10 p2pSecret:(id)arg11 p2PVerifyStream:(unsigned int)arg12;
- (void)updateP2pService;
- (void)updateStreamId:(id)arg1;
- (void)getStat;
- (id)proxyOf:(id)arg1;
- (id)host;
- (int)resume;
- (void)alias:(id)arg1 of:(id)arg2;
- (void)setLogger;
- (void)disableDebug;
- (void)enableDebug;
- (id)version;
- (id)replacePlaybackUrl:(id)arg1 streamId:(id)arg2 bHttps:(_Bool)arg3;
- (int)initWith:(id)arg1 appKey:(id)arg2 appSecretKey:(id)arg3;
- (void)startP2pService;
- (void)dealloc;
- (id)initInternal;

@end

