//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayCollectPalmControlLogicDelegate;

@interface WCPayCollectPalmControlLogic
{
    _Bool _isCdnUploading;
    _Bool _isNeedUploadBypass;
    _Bool _isNeedUploadCgi;
    _Bool _isNeedPalmInfoCallback;
    unsigned int _palmCaptureMode;
    unsigned int _uploadCdnType;
    id <WCPayCollectPalmControlLogicDelegate> _logicDelegate;
    NSString *_currentAppId;
    NSString *_currentCdnMediaId;
    NSString *_finalPalmResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finalPalmResult; // @synthesize finalPalmResult=_finalPalmResult;
@property(nonatomic) unsigned int uploadCdnType; // @synthesize uploadCdnType=_uploadCdnType;
@property(nonatomic) unsigned int palmCaptureMode; // @synthesize palmCaptureMode=_palmCaptureMode;
@property(nonatomic) _Bool isNeedPalmInfoCallback; // @synthesize isNeedPalmInfoCallback=_isNeedPalmInfoCallback;
@property(nonatomic) _Bool isNeedUploadCgi; // @synthesize isNeedUploadCgi=_isNeedUploadCgi;
@property(nonatomic) _Bool isNeedUploadBypass; // @synthesize isNeedUploadBypass=_isNeedUploadBypass;
@property(nonatomic) _Bool isCdnUploading; // @synthesize isCdnUploading=_isCdnUploading;
@property(retain, nonatomic) NSString *currentCdnMediaId; // @synthesize currentCdnMediaId=_currentCdnMediaId;
@property(retain, nonatomic) NSString *currentAppId; // @synthesize currentAppId=_currentAppId;
@property(nonatomic) __weak id <WCPayCollectPalmControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)handleTimeoutVideoUpload;
- (void)onPalmEntryViewControllerSetupFailed:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)onPalmEntryViewControllerRecordTimeout:(id)arg1;
- (void)onPalmEntryViewControllerTimeout:(id)arg1;
- (void)uploadCdnOnTimeout:(id)arg1 cdnType:(unsigned int)arg2;
- (id)doEncrypt:(id)arg1 data:(id)arg2;
- (id)saveResultToFile:(id)arg1 encryptFileKey:(id)arg2;
- (id)getCdnClientId:(id)arg1;
- (void)handleError:(unsigned long long)arg1 errorMessage:(id)arg2;
- (_Bool)isUploadedCorrectResource:(id)arg1;
- (id)getEncryptPalmFileKey:(id)arg1;
- (void)onCheckPalmUserResouceCgiOK:(int)arg1 errorMessage:(id)arg2;
- (id)getPalmReportInfo;
- (void)doCheckPalmResult:(id)arg1;
- (void)handleTimeOutError:(unsigned int)arg1;
- (void)onUploadOnlinePalmResourceCgiOK:(_Bool)arg1 errorMessage:(id)arg2;
- (void)doUploadBypassResult:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)uploadResultToCdn:(id)arg1 encryptFileKey:(id)arg2;
- (void)onPalmEntryViewControllerGetFinalResult:(id)arg1;
- (id)wrapPalmInfoForCallback:(id)arg1;
- (id)wrapJSApiResult:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)onPalmEntryViewControllerBack:(id)arg1;
- (void)onOpenPalmServiceAuthCgiOK:(_Bool)arg1 body:(id)arg2 errorMessage:(id)arg3;
- (void)startCheckPalmServiceAuth;
- (void)startLogic;
- (void)removeLastSavedTmpFiles;
- (void)dealloc;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

