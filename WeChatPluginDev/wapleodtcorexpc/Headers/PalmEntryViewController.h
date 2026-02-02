//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, CameraScannerView, MMTimer, NSString, PAGView, PalmEntryLogicController, PalmGuidingTipsView, UIImageView, UIView;
@protocol PalmEntryViewControllerDelegate;

@interface PalmEntryViewController
{
    _Bool _isPageClose;
    _Bool _hasDetectPalm;
    _Bool _hasSetRecordTimer;
    _Bool _isUploadingResult;
    _Bool _isSuccess;
    _Bool _notShowBreathPag;
    int _currentTipCode;
    PalmEntryLogicController *_logicController;
    id <PalmEntryViewControllerDelegate> _m_delegate;
    unsigned long long _currentHandType;
    unsigned long long _extendedHandType;
    UIView *_circleMaskView;
    CAShapeLayer *_maskLayer;
    PAGView *_guidingPagView;
    PAGView *_circlePagView;
    UIImageView *_circleImageView;
    CameraScannerView *_scannerView;
    PalmGuidingTipsView *_guidingTipsView;
    UIImageView *_successImageView;
    MMTimer *_timeoutTimer;
    MMTimer *_recordTimeoutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *recordTimeoutTimer; // @synthesize recordTimeoutTimer=_recordTimeoutTimer;
@property(retain, nonatomic) MMTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) UIImageView *successImageView; // @synthesize successImageView=_successImageView;
@property(nonatomic) _Bool notShowBreathPag; // @synthesize notShowBreathPag=_notShowBreathPag;
@property(retain, nonatomic) PalmGuidingTipsView *guidingTipsView; // @synthesize guidingTipsView=_guidingTipsView;
@property(retain, nonatomic) CameraScannerView *scannerView; // @synthesize scannerView=_scannerView;
@property(retain, nonatomic) UIImageView *circleImageView; // @synthesize circleImageView=_circleImageView;
@property(retain, nonatomic) PAGView *circlePagView; // @synthesize circlePagView=_circlePagView;
@property(retain, nonatomic) PAGView *guidingPagView; // @synthesize guidingPagView=_guidingPagView;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIView *circleMaskView; // @synthesize circleMaskView=_circleMaskView;
@property(nonatomic) unsigned long long extendedHandType; // @synthesize extendedHandType=_extendedHandType;
@property(nonatomic) unsigned long long currentHandType; // @synthesize currentHandType=_currentHandType;
@property(nonatomic) int currentTipCode; // @synthesize currentTipCode=_currentTipCode;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) _Bool isUploadingResult; // @synthesize isUploadingResult=_isUploadingResult;
@property(nonatomic) _Bool hasSetRecordTimer; // @synthesize hasSetRecordTimer=_hasSetRecordTimer;
@property(nonatomic) _Bool hasDetectPalm; // @synthesize hasDetectPalm=_hasDetectPalm;
@property(nonatomic) _Bool isPageClose; // @synthesize isPageClose=_isPageClose;
@property(nonatomic) __weak id <PalmEntryViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) PalmEntryLogicController *logicController; // @synthesize logicController=_logicController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)startInitialAnimation:(CDUnknownBlockType)arg1;
- (void)palmEntryLogicWillGetFinalResult;
- (void)palmEntryLogicDidGetFinalResult:(id)arg1;
- (id)palmEntryLogicGetSdkConfig;
- (unsigned long long)palmEntryLogicGetLimitHandType;
- (void)showCircleImageView;
- (void)showCircelPageViewAndCircleImageView;
- (void)showCirclePagView;
- (void)handleFirstDectPalm;
- (id)getCircleImage:(_Bool)arg1;
- (_Bool)isCodeGreen:(int)arg1;
- (void)updateCircleImageView:(int)arg1;
- (void)palmEntryLogicShouldUpdateTips:(int)arg1 code:(int)arg2 isFirstDetectPalm:(_Bool)arg3 handType:(unsigned long long)arg4;
- (unsigned long long)getTipHandType:(unsigned long long)arg1;
- (void)initCamera;
- (void)stopScan;
- (void)startScan;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)setupCircleShapeLayer;
- (void)setupCirclePagView;
- (void)setupGuidingTipsView;
- (void)setupCircelImageView;
- (void)updateView;
- (void)viewWillLayoutSubviews;
- (void)startRecordVideo;
- (void)checkLogicAuth;
- (void)dealloc;
- (void)onBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)onRecordTimeout;
- (void)onCollectPalmTimeout;
- (void)autoFocusAtCenter;
- (void)tapAtPoint:(id)arg1;
- (void)initTapGesture;
- (void)realDoLogic;
- (void)delayStartInitialAnimation;
- (void)viewDidLoad;
- (id)navigationTitleColor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

