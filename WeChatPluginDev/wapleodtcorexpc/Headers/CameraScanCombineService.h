//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanCombineModelGetter, CameraScanCombineModelInfo, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CameraScanCombineService
{
    _Bool _ffeSvrConfigDetectBlock;
    _Bool _ffeSvrConfigPreloadBlock;
    NSString *_ffeSvrConfigStr;
    NSString *_ffeSvrConfigVersion;
    long long _ffeSvrConfigModelVersion;
    NSString *_ffeSvrConfigInfoGuideText;
    NSString *_ffeSvrConfigDetObjGuideText;
    long long _ffeSvrConfigReqUploadTimeout;
    long long _ffeSvrConfigReqRetrievalTimeout;
    long long _ffeSvrConfigReqInteval;
    CameraScanCombineModelGetter *_modelGetter;
    CameraScanCombineModelInfo *_modelInfo;
    NSObject<OS_dispatch_queue> *_modelQueue;
    long long _scanBlackCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long scanBlackCount; // @synthesize scanBlackCount=_scanBlackCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modelQueue; // @synthesize modelQueue=_modelQueue;
@property(retain, nonatomic) CameraScanCombineModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(retain, nonatomic) CameraScanCombineModelGetter *modelGetter; // @synthesize modelGetter=_modelGetter;
@property(nonatomic) _Bool ffeSvrConfigPreloadBlock; // @synthesize ffeSvrConfigPreloadBlock=_ffeSvrConfigPreloadBlock;
@property(nonatomic) _Bool ffeSvrConfigDetectBlock; // @synthesize ffeSvrConfigDetectBlock=_ffeSvrConfigDetectBlock;
@property(nonatomic) long long ffeSvrConfigReqInteval; // @synthesize ffeSvrConfigReqInteval=_ffeSvrConfigReqInteval;
@property(nonatomic) long long ffeSvrConfigReqRetrievalTimeout; // @synthesize ffeSvrConfigReqRetrievalTimeout=_ffeSvrConfigReqRetrievalTimeout;
@property(nonatomic) long long ffeSvrConfigReqUploadTimeout; // @synthesize ffeSvrConfigReqUploadTimeout=_ffeSvrConfigReqUploadTimeout;
@property(copy, nonatomic) NSString *ffeSvrConfigDetObjGuideText; // @synthesize ffeSvrConfigDetObjGuideText=_ffeSvrConfigDetObjGuideText;
@property(copy, nonatomic) NSString *ffeSvrConfigInfoGuideText; // @synthesize ffeSvrConfigInfoGuideText=_ffeSvrConfigInfoGuideText;
@property(nonatomic) long long ffeSvrConfigModelVersion; // @synthesize ffeSvrConfigModelVersion=_ffeSvrConfigModelVersion;
@property(copy, nonatomic) NSString *ffeSvrConfigVersion; // @synthesize ffeSvrConfigVersion=_ffeSvrConfigVersion;
@property(copy, nonatomic) NSString *ffeSvrConfigStr; // @synthesize ffeSvrConfigStr=_ffeSvrConfigStr;
- (void)reportOnAlertForReboot;
- (void)recordOnRecievedBuffer;
- (void)recordNotRecievingBufferInLongTerm;
- (void)recordNotRecievingBufferInShortTerm;
- (void)increaseBlockCountAndCheckAlert;
- (_Bool)shouldAlertScanFailForReboot;
- (id)currentModelInfo;
- (void)updateCurrentModelInfo;
- (id)scanCombineSvrDetGuideText;
- (id)scanCombineSvrGuideText;
- (long long)scanCombineSvrRetrievalTimeout;
- (long long)scanCombineSvrUploadTimeout;
- (long long)scanCombineSvrRequestMinInterval;
- (long long)scanCombineSvrRequestInterval;
- (_Bool)scanCombineSvrPreloadControl;
- (_Bool)scanCombineSvrFuckupControl;
- (id)scanCombineSvrVersion;
- (_Bool)canSvrConfigApplyOnEngine;
- (id)scanCombineSvrConfig;
- (void)onFetchCombineConfigureFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onFetchCombineConfigureSuccess:(id)arg1 confVersion:(id)arg2 confGuide:(id)arg3 detObjGuide:(id)arg4;
- (void)fetchLatestScanCombineSvrConfig;
- (void)loadSvrControlFromConfig:(id)arg1;
- (void)loadSvrConfigFromMMKV;
- (void)clearSvrConfig;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

