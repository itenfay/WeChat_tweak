//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogBaseViewController, FaceRecogConfigLogic, FaceRecogReporter, FaceRecogUploadLogic, LocationRetriever, MMUIViewController, NSString, UIColor;
@protocol FaceRecogBaseHandlerDelegate, FaceRecogHandlerDelegate;

@interface FaceRecogBaseHandler
{
    _Bool _needGuide;
    _Bool _needUploadVideo;
    _Bool _isRSA;
    _Bool _hasShowVC;
    _Bool _hasShowAlert;
    _Bool _isRunning;
    _Bool _useHttp;
    _Bool _userCancel;
    float _brightnessValue;
    unsigned int _scene;
    unsigned int _finishDelayTime;
    id <FaceRecogBaseHandlerDelegate> _faceDelegate;
    id <FaceRecogHandlerDelegate> _delegate;
    NSString *_appId;
    NSString *_userTicket;
    NSString *_feedbackUrl;
    NSString *_businessTip;
    UIColor *_businessTipColor;
    double _faceFrameRatio;
    MMUIViewController *_currentViewController;
    FaceRecogBaseViewController *_faceVc;
    FaceRecogConfigLogic *_configFetcher;
    FaceRecogUploadLogic *_uploader;
    FaceRecogReporter *_reporter;
    long long _errorCode;
    NSString *_errorMsg;
    NSString *_verifyResult;
    LocationRetriever *_locationRetriver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LocationRetriever *locationRetriver; // @synthesize locationRetriver=_locationRetriver;
@property(nonatomic) _Bool userCancel; // @synthesize userCancel=_userCancel;
@property(retain, nonatomic) NSString *verifyResult; // @synthesize verifyResult=_verifyResult;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool useHttp; // @synthesize useHttp=_useHttp;
@property(retain, nonatomic) FaceRecogReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) FaceRecogUploadLogic *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) FaceRecogConfigLogic *configFetcher; // @synthesize configFetcher=_configFetcher;
@property(retain, nonatomic) FaceRecogBaseViewController *faceVc; // @synthesize faceVc=_faceVc;
@property(nonatomic) __weak MMUIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) double faceFrameRatio; // @synthesize faceFrameRatio=_faceFrameRatio;
@property(retain, nonatomic) UIColor *businessTipColor; // @synthesize businessTipColor=_businessTipColor;
@property(retain, nonatomic) NSString *businessTip; // @synthesize businessTip=_businessTip;
@property(retain, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(nonatomic) _Bool hasShowAlert; // @synthesize hasShowAlert=_hasShowAlert;
@property(nonatomic) _Bool hasShowVC; // @synthesize hasShowVC=_hasShowVC;
@property(nonatomic) unsigned int finishDelayTime; // @synthesize finishDelayTime=_finishDelayTime;
@property(retain, nonatomic) NSString *userTicket; // @synthesize userTicket=_userTicket;
@property(nonatomic) _Bool isRSA; // @synthesize isRSA=_isRSA;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) float brightnessValue; // @synthesize brightnessValue=_brightnessValue;
@property(nonatomic) _Bool needUploadVideo; // @synthesize needUploadVideo=_needUploadVideo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool needGuide; // @synthesize needGuide=_needGuide;
@property(nonatomic) __weak id <FaceRecogHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FaceRecogBaseHandlerDelegate> faceDelegate; // @synthesize faceDelegate=_faceDelegate;
- (void)showView;
- (void)initView;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)didAccessLocation:(double)arg1 longitude:(double)arg2;
- (void)didAccessConfig;
- (void)didAccessAudio;
- (void)didAccessVideo;
- (void)didUploadFaceData:(id)arg1;
- (void)handlerDidFinishWithCode:(long long)arg1 msg:(id)arg2 errorTips:(id)arg3 verifyResult:(id)arg4 canRetry:(_Bool)arg5;
- (void)didFinishedWithCode:(int)arg1 msg:(id)arg2 retry:(_Bool)arg3;
- (void)handlerDidFinishWithCode:(long long)arg1 msg:(id)arg2 verifyResult:(id)arg3 canRetry:(_Bool)arg4;
- (void)handlerDidFinishWithCode:(long long)arg1 reportCode:(int)arg2 msg:(id)arg3 verifyResult:(id)arg4 canRetry:(_Bool)arg5;
- (void)handlerDidFinishWithCode:(long long)arg1 reportCode:(int)arg2 msg:(id)arg3 errorTips:(id)arg4 verifyResult:(id)arg5 canRetry:(_Bool)arg6;
- (id)result;
- (id)resultMsg;
- (int)resultCode;
- (void)onRealFinish;
- (void)faceRecogDidRetry;
- (void)faceRecogDidSuccess;
- (void)faceRecogDidClose;
- (void)faceRecogDidCancel;
- (void)reportUserCancel;
- (id)faceRecogVerifyGetFeedbackUrl;
- (void)onGetFaceVideoFinish:(id)arg1 inWorkMode:(long long)arg2;
- (void)onUploadFaceResultFinish:(id)arg1;
- (void)onGetBioConfig:(id)arg1 failedCauseOf:(int)arg2 forScene:(unsigned int)arg3 errMsg:(id)arg4;
- (void)onGetBioConfig:(id)arg1 succeedForScene:(unsigned int)arg2 succeedForBioId:(unsigned long long)arg3;
- (void)didInterruptedWithRetry:(_Bool)arg1;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (unsigned long long)getAuthScene:(unsigned int)arg1;
- (void)disMissAll:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)report:(int)arg1 errorType:(int)arg2 errorCode:(int)arg3;
- (void)requestStop;
- (void)requestCancel;
- (void)requestRetry;
- (void)onRequestAccessAudioDone:(_Bool)arg1;
- (void)onRequestAccessVideoDone:(_Bool)arg1 isOccupy:(_Bool)arg2;
- (void)finishedWithAuthorizationError:(id)arg1;
- (void)requestAccessLocation;
- (void)requestAccessAudio;
- (void)requestAccessVideo;
- (void)startFaceRecog;
- (void)dealloc;
- (void)initUploadLogic;
- (void)initConfigLogic;
- (id)initWithScene:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

