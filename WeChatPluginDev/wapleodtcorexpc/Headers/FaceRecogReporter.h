//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogReporterFaceErrCounter, FaceRecogReporterFaceTimeMeter, NSMutableArray, NSString;

@interface FaceRecogReporter
{
    unsigned long long frReportSessionId;
    _Bool _needUploadVideo;
    _Bool _isFaceRecogForPay;
    unsigned int _bizType;
    unsigned int _tryCount;
    float _brightnessValue;
    unsigned int _checkAliveType;
    FaceRecogReporterFaceTimeMeter *_timeMeter;
    FaceRecogReporterFaceErrCounter *_errCounter;
    NSString *_appId;
    NSString *_funName;
    unsigned long long _startTime;
    long long _livenessType;
    long long _resetCount;
    long long _cdnErrorCode;
    long long _prepareErrorCode;
    long long _configErrorCode;
    long long _verifyErrorCode;
    long long _retryCount;
    NSString *_bioId;
    long long _finalState;
    long long _interruptShow;
    long long _interruptAction;
    long long _interruptShowOtherverifyTitle;
    long long _voiceOverState;
    long long _faceRecogTime;
    NSMutableArray *_stateList;
    NSMutableArray *_sdkStateList;
}

+ (int)convertClientCodeToReportCode:(long long)arg1;
+ (int)getReportScene:(unsigned int)arg1;
+ (void)reportFaceDetectVideoUploadResult:(id)arg1 errorType:(unsigned int)arg2 errorCode:(unsigned int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sdkStateList; // @synthesize sdkStateList=_sdkStateList;
@property(retain, nonatomic) NSMutableArray *stateList; // @synthesize stateList=_stateList;
@property(nonatomic) long long faceRecogTime; // @synthesize faceRecogTime=_faceRecogTime;
@property(nonatomic) long long voiceOverState; // @synthesize voiceOverState=_voiceOverState;
@property(nonatomic) long long interruptShowOtherverifyTitle; // @synthesize interruptShowOtherverifyTitle=_interruptShowOtherverifyTitle;
@property(nonatomic) long long interruptAction; // @synthesize interruptAction=_interruptAction;
@property(nonatomic) long long interruptShow; // @synthesize interruptShow=_interruptShow;
@property(nonatomic) long long finalState; // @synthesize finalState=_finalState;
@property(retain, nonatomic) NSString *bioId; // @synthesize bioId=_bioId;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long verifyErrorCode; // @synthesize verifyErrorCode=_verifyErrorCode;
@property(nonatomic) long long configErrorCode; // @synthesize configErrorCode=_configErrorCode;
@property(nonatomic) long long prepareErrorCode; // @synthesize prepareErrorCode=_prepareErrorCode;
@property(nonatomic) long long cdnErrorCode; // @synthesize cdnErrorCode=_cdnErrorCode;
@property(nonatomic) long long resetCount; // @synthesize resetCount=_resetCount;
@property(nonatomic) long long livenessType; // @synthesize livenessType=_livenessType;
@property(nonatomic) _Bool isFaceRecogForPay; // @synthesize isFaceRecogForPay=_isFaceRecogForPay;
@property(nonatomic) unsigned int checkAliveType; // @synthesize checkAliveType=_checkAliveType;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) float brightnessValue; // @synthesize brightnessValue=_brightnessValue;
@property(nonatomic) _Bool needUploadVideo; // @synthesize needUploadVideo=_needUploadVideo;
@property(copy, nonatomic) NSString *funName; // @synthesize funName=_funName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int tryCount; // @synthesize tryCount=_tryCount;
@property(nonatomic) unsigned int bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) FaceRecogReporterFaceErrCounter *errCounter; // @synthesize errCounter=_errCounter;
@property(retain, nonatomic) FaceRecogReporterFaceTimeMeter *timeMeter; // @synthesize timeMeter=_timeMeter;
- (void)reportInterrupt;
- (long long)categoryForResultCode:(int)arg1;
- (void)reportFlashLogStr:(id)arg1;
- (void)reportFlashWithReportCode:(int)arg1 errMsg:(id)arg2;
- (void)reportFlashWithReportCode:(int)arg1;
- (void)recordSDKStateChange:(id)arg1;
- (void)recordState:(long long)arg1;
- (void)reportInterfaceCalledResult:(unsigned int)arg1;
- (void)reportFaceDetectResult:(unsigned int)arg1 errorType:(unsigned int)arg2 errorCode:(unsigned int)arg3;
- (void)reportStartFaceDetect:(_Bool)arg1;
- (id)init;

@end

