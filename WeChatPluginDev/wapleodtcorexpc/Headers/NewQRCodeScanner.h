//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScannerViewWrapper, NSRecursiveLock, NSString, UIImage;
@protocol NewQRCodeScannerDelegate;

@interface NewQRCodeScanner
{
    _Bool oneDMode;
    _Bool decoding;
    _Bool hasInit;
    _Bool _rotateImage;
    struct CGRect cropRect;
    NSString *_resultData;
    NSString *_resultType;
    char *_sendImage;
    basic_string_5909a4e2 _decodeData;
    basic_string_5909a4e2 _decodeType;
    basic_string_5909a4e2 _decodeCharset;
    struct QBAR_REPORT_MSG _reportMsg;
    struct QBar *_qbar;
    struct timeval _startTime;
    unsigned long long _matchNeedConfirmPrefixTimes;
    struct CGRect _viewCropRect;
    float _view2SampleBufferScaleRatio;
    _Bool _isUseSmallCropArea;
    _Bool _isPreScanImageRatioChanged;
    int scanCodeType;
    unsigned int _totalFrames;
    unsigned int _totalCostTime;
    unsigned int _succCostTime;
    unsigned int _retryTimes;
    unsigned int _decodeStat;
    unsigned int _dataLength;
    unsigned int _qrCodeVersion;
    unsigned int _pyramidLv;
    unsigned int _isSupportWXCode;
    unsigned int _resultCount;
    unsigned int _possibleResultCount;
    unsigned int _decodeScale;
    unsigned int _detectTime;
    unsigned int _srTime;
    unsigned int _wxPreferCodeCount;
    unsigned int _wxConfirmCodeCount;
    unsigned int _qbarWaitingFrameCount;
    float _rotateDegree;
    id <NewQRCodeScannerDelegate> _delegate;
    CameraScannerViewWrapper *_cameraScannerWrapper;
    NSString *_resultSN;
    NSString *_fileScanDebugString;
    UIImage *_resultOriginalImage;
    NSString *_resolutionRatio;
    NSString *_typeName;
    NSString *_charSet;
    NSString *_binarizerMethod;
    NSString *_qBarVersion;
    NSString *_possibleProbs;
    NSString *_scaleList;
    struct opaqueCMSampleBuffer *_currentSampleBuffer;
    NSRecursiveLock *_variablesLock;
    struct CGPoint _markDotCenter;
}

+ (id)imageFromLockedCVImageBuffer:(struct __CVBuffer *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *variablesLock; // @synthesize variablesLock=_variablesLock;
@property(nonatomic) struct opaqueCMSampleBuffer *currentSampleBuffer; // @synthesize currentSampleBuffer=_currentSampleBuffer;
@property(nonatomic) struct CGPoint markDotCenter; // @synthesize markDotCenter=_markDotCenter;
@property(nonatomic) float rotateDegree; // @synthesize rotateDegree=_rotateDegree;
@property(nonatomic) basic_string_1e6f3770 decodeData; // @synthesize decodeData=_decodeData;
@property(nonatomic) _Bool isPreScanImageRatioChanged; // @synthesize isPreScanImageRatioChanged=_isPreScanImageRatioChanged;
@property(nonatomic) _Bool isUseSmallCropArea; // @synthesize isUseSmallCropArea=_isUseSmallCropArea;
@property(nonatomic) unsigned int qbarWaitingFrameCount; // @synthesize qbarWaitingFrameCount=_qbarWaitingFrameCount;
@property(readonly, nonatomic) unsigned int wxConfirmCodeCount; // @synthesize wxConfirmCodeCount=_wxConfirmCodeCount;
@property(readonly, nonatomic) unsigned int wxPreferCodeCount; // @synthesize wxPreferCodeCount=_wxPreferCodeCount;
@property(readonly, nonatomic) unsigned int srTime; // @synthesize srTime=_srTime;
@property(readonly, nonatomic) unsigned int detectTime; // @synthesize detectTime=_detectTime;
@property(readonly, nonatomic) unsigned int decodeScale; // @synthesize decodeScale=_decodeScale;
@property(readonly, copy, nonatomic) NSString *scaleList; // @synthesize scaleList=_scaleList;
@property(readonly, copy, nonatomic) NSString *possibleProbs; // @synthesize possibleProbs=_possibleProbs;
@property(readonly, nonatomic) unsigned int possibleResultCount; // @synthesize possibleResultCount=_possibleResultCount;
@property(readonly, nonatomic) unsigned int resultCount; // @synthesize resultCount=_resultCount;
@property(readonly, copy, nonatomic) NSString *qBarVersion; // @synthesize qBarVersion=_qBarVersion;
@property(readonly, nonatomic) unsigned int isSupportWXCode; // @synthesize isSupportWXCode=_isSupportWXCode;
@property(readonly, nonatomic) NSString *binarizerMethod; // @synthesize binarizerMethod=_binarizerMethod;
@property(readonly, nonatomic) unsigned int pyramidLv; // @synthesize pyramidLv=_pyramidLv;
@property(readonly, nonatomic) unsigned int qrCodeVersion; // @synthesize qrCodeVersion=_qrCodeVersion;
@property(readonly, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(readonly, nonatomic) unsigned int dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, nonatomic) unsigned int decodeStat; // @synthesize decodeStat=_decodeStat;
@property(readonly, nonatomic) unsigned int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(readonly, nonatomic) NSString *resolutionRatio; // @synthesize resolutionRatio=_resolutionRatio;
@property(readonly, nonatomic) unsigned int succCostTime; // @synthesize succCostTime=_succCostTime;
@property(readonly, nonatomic) unsigned int totalCostTime; // @synthesize totalCostTime=_totalCostTime;
@property(readonly, nonatomic) unsigned int totalFrames; // @synthesize totalFrames=_totalFrames;
@property(retain, nonatomic) UIImage *resultOriginalImage; // @synthesize resultOriginalImage=_resultOriginalImage;
@property(copy, nonatomic) NSString *fileScanDebugString; // @synthesize fileScanDebugString=_fileScanDebugString;
@property(retain, nonatomic) NSString *resultSN; // @synthesize resultSN=_resultSN;
@property(retain, nonatomic) CameraScannerViewWrapper *cameraScannerWrapper; // @synthesize cameraScannerWrapper=_cameraScannerWrapper;
@property(nonatomic) __weak id <NewQRCodeScannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int scanCodeType; // @synthesize scanCodeType;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *resultData; // @synthesize resultData=_resultData;
- (id)getCameraSnapshotImage;
- (void)releaseCurrentSampleBuffer;
- (struct opaqueCMSampleBuffer *)getAndRetainCurrentSampleBuffer;
- (struct CGPoint)getRealMarkDotCenterWithImageSize:(struct CGSize)arg1 detectResult:(struct QBAR_RESULT)arg2;
- (id)convertQbarInfoList2MarkDotInfoList:(vector_95637d69)arg1 viewScaleRatio:(float)arg2 viewCropPoint:(struct CGPoint)arg3;
- (id)converQbarResultList2MarkDotInfoList:(vector_04675aae)arg1;
- (void)resetEngine;
- (void)stopCapture;
- (void)startCapture;
- (void)showScanResultWithMarkDotInfo:(id)arg1;
- (void)showScanResult;
- (_Bool)needCrashProtect:(id)arg1 fromRawScene:(long long)arg2;
- (_Bool)tryScanOnePicture:(id)arg1 context:(id)arg2 shouldRetMarkDotList:(_Bool)arg3 andRetMarkDotInfoList:(id *)arg4 isClipedQRCodeScanImage:(_Bool)arg5 logicParams:(id)arg6 scanFromRawScene:(long long)arg7;
- (_Bool)tryScanOnePicture:(id)arg1 context:(id)arg2;
- (_Bool)tryScanOnePicture:(id)arg1;
- (_Bool)scanOnePicture:(id)arg1 context:(id)arg2;
- (_Bool)scanOnePicture:(id)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (void)calScanResultReportDetailData:(vector_04675aae)arg1;
- (void)genReportDetailForFileOriginalResults:(vector_04675aae)arg1 touchContext:(id)arg2;
- (_Bool)doScanCode:(char *)arg1 cvImageBuffer:(struct __CVBuffer *)arg2 Width:(int)arg3 Height:(int)arg4 bufferWidth:(int)arg5 bufferHeight:(int)arg6;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)isWeAppCodeType:(id)arg1;
- (_Bool)isQRCodeType:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 scannerParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

