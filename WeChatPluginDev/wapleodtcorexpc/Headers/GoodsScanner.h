//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanGoodsAdInfo, CameraScanGoodsJSAPIInfo, CameraScannerViewWrapper, LocationRetriever, NSMutableSet, NSObject, NSRecursiveLock, NSString;
@protocol GoodsScannerDelegate, OS_dispatch_queue;

@interface GoodsScanner
{
    float _scaleRatio;
    struct CGPoint _cropInputOrigin;
    _Bool _isDecoding;
    _Bool _isUseAlbumSnapshot;
    _Bool _isSvrRespDetectFail;
    _Bool _hasReportWhenOpenHalfScreenPage;
    int _albumFrameID;
    unsigned int _clearFrameWidth;
    unsigned int _clearFrameHeight;
    unsigned int _tabSessionIDForReport;
    unsigned int _scanSessionIDForReport;
    id <GoodsScannerDelegate> _delegate;
    unsigned long long _sessionID;
    long long _businessType;
    long long _businessSubType;
    CameraScanGoodsAdInfo *_adInfo;
    void *_focusEngine;
    NSObject<OS_dispatch_queue> *_engineQueue;
    NSString *_configVersion;
    NSMutableSet *_requestIDSet;
    char *_clearFrameData;
    struct opaqueCMSampleBuffer *_currentSampleBuffer;
    NSRecursiveLock *_variablesLock;
    CameraScannerViewWrapper *_cameraScannerWrapper;
    CameraScanGoodsJSAPIInfo *_jsapiInfo;
    LocationRetriever *_locationRetriever;
}

+ (id)calcuatePhashMemInfoForPicture:(id)arg1 confStr:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int scanSessionIDForReport; // @synthesize scanSessionIDForReport=_scanSessionIDForReport;
@property(nonatomic) unsigned int tabSessionIDForReport; // @synthesize tabSessionIDForReport=_tabSessionIDForReport;
@property(nonatomic) _Bool hasReportWhenOpenHalfScreenPage; // @synthesize hasReportWhenOpenHalfScreenPage=_hasReportWhenOpenHalfScreenPage;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) CameraScanGoodsJSAPIInfo *jsapiInfo; // @synthesize jsapiInfo=_jsapiInfo;
@property(nonatomic) __weak CameraScannerViewWrapper *cameraScannerWrapper; // @synthesize cameraScannerWrapper=_cameraScannerWrapper;
@property(retain, nonatomic) NSRecursiveLock *variablesLock; // @synthesize variablesLock=_variablesLock;
@property(nonatomic) struct opaqueCMSampleBuffer *currentSampleBuffer; // @synthesize currentSampleBuffer=_currentSampleBuffer;
@property(nonatomic) char *clearFrameData; // @synthesize clearFrameData=_clearFrameData;
@property(nonatomic) unsigned int clearFrameHeight; // @synthesize clearFrameHeight=_clearFrameHeight;
@property(nonatomic) unsigned int clearFrameWidth; // @synthesize clearFrameWidth=_clearFrameWidth;
@property(nonatomic) _Bool isSvrRespDetectFail; // @synthesize isSvrRespDetectFail=_isSvrRespDetectFail;
@property(nonatomic) int albumFrameID; // @synthesize albumFrameID=_albumFrameID;
@property(retain, nonatomic) NSMutableSet *requestIDSet; // @synthesize requestIDSet=_requestIDSet;
@property(retain, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(nonatomic) _Bool isUseAlbumSnapshot; // @synthesize isUseAlbumSnapshot=_isUseAlbumSnapshot;
@property(nonatomic) _Bool isDecoding; // @synthesize isDecoding=_isDecoding;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue; // @synthesize engineQueue=_engineQueue;
@property(nonatomic) void *focusEngine; // @synthesize focusEngine=_focusEngine;
@property(retain, nonatomic) CameraScanGoodsAdInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(nonatomic) long long businessSubType; // @synthesize businessSubType=_businessSubType;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak id <GoodsScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)memoryMappedKV;
- (unsigned int)getInfoTextUpdateTime;
- (id)getInfoTextForCurrentLanguage;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)tryRetrieveLocationIfNeed;
- (void)setupLocationRetriever;
- (void)reportAIEngineInfoWithResultAction:(long long)arg1 tabSessionID:(unsigned int)arg2 scanSessionID:(unsigned int)arg3;
- (void)reportAIEngineInfoWhenDetectSuccess;
- (void)recordTabSessionID:(unsigned int)arg1 scanSessionID:(unsigned int)arg2;
- (void)setFocusEngineNetworkType;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)requestIDForSessionID:(unsigned long long)arg1 frameID:(unsigned int)arg2;
- (void)onSendImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(_Bool)arg4;
- (void)onSendImageInfoSuccess:(id)arg1;
- (void)onFetchDynamicWordingFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onFetchDynamicWordingSuccess:(id)arg1;
- (void)onFetchScanConfigureFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onFetchScanConfigureSuccess:(id)arg1 confVersion:(id)arg2;
- (id)getImageBySampleBufferref:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)getCameraSnapshotImage;
- (void)handleRotatedImageBuffer:(struct Mat)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)scanOnePicture:(id)arg1;
- (void)stop;
- (void)start;
- (void)cancelAllCallback;
- (void)deallocFocusEngine;
- (void)setupFocusEngine;
- (void)setupEngineQueue;
- (void)releaseCurrentSampleBuffer;
- (struct opaqueCMSampleBuffer *)getAndRetainCurrentSampleBuffer;
- (void)removeAllRequestIDFromSet;
- (void)removeRequestIDFromSet:(id)arg1;
- (void)addRequestIDToSet:(id)arg1;
- (_Bool)isRequestIDInSet:(id)arg1;
- (void)dealloc;
- (id)initWithCameraScannerViewWrapper:(id)arg1 businessType:(long long)arg2 businessSubType:(long long)arg3 adInfo:(id)arg4 jsapiInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

