//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, FaceRecogResultView, FaceRecogRoundView, MMUILabel, NSString, UIColor, UIFont, UIView;
@protocol FaceRecogBaseViewDelegate;

@interface FaceRecogFlashView
{
    _Bool _closeButtonStrongStyle;
    _Bool _showFacePositionBox;
    _Bool _isUsedInWePay;
    _Bool _isTitleTipAnimating;
    _Bool _finished;
    _Bool _animating;
    _Bool _isReflecting;
    _Bool _hasEverDetectFace;
    FaceRecogRoundView *_faceRectView;
    NSString *_businessTip;
    NSString *_bizButtonAtFail;
    NSString *_loadingTip;
    UIFont *_businessTipFont;
    UIColor *_businessTipColor;
    UIFont *_actionTipFont;
    double _faceRectWidth;
    FaceRecogResultView *_resultView;
    CAShapeLayer *_shapeLayer;
    MMUILabel *_bigTipFaceTitle;
    MMUILabel *_bigTipAnimateTitle;
    MMUILabel *_businessTitleLabel;
    UIView *_reflectColorView;
    NSString *_curErrorTip;
    NSString *_curMotionTip;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEverDetectFace; // @synthesize hasEverDetectFace=_hasEverDetectFace;
@property(nonatomic) _Bool isReflecting; // @synthesize isReflecting=_isReflecting;
@property(retain, nonatomic) NSString *curMotionTip; // @synthesize curMotionTip=_curMotionTip;
@property(retain, nonatomic) NSString *curErrorTip; // @synthesize curErrorTip=_curErrorTip;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) UIView *reflectColorView; // @synthesize reflectColorView=_reflectColorView;
@property(retain, nonatomic) MMUILabel *businessTitleLabel; // @synthesize businessTitleLabel=_businessTitleLabel;
@property(retain, nonatomic) MMUILabel *bigTipAnimateTitle; // @synthesize bigTipAnimateTitle=_bigTipAnimateTitle;
@property(retain, nonatomic) MMUILabel *bigTipFaceTitle; // @synthesize bigTipFaceTitle=_bigTipFaceTitle;
@property(nonatomic) _Bool isTitleTipAnimating; // @synthesize isTitleTipAnimating=_isTitleTipAnimating;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) FaceRecogResultView *resultView; // @synthesize resultView=_resultView;
@property(nonatomic) _Bool isUsedInWePay; // @synthesize isUsedInWePay=_isUsedInWePay;
@property(nonatomic) _Bool showFacePositionBox; // @synthesize showFacePositionBox=_showFacePositionBox;
@property(nonatomic) double faceRectWidth; // @synthesize faceRectWidth=_faceRectWidth;
@property(retain, nonatomic) UIFont *actionTipFont; // @synthesize actionTipFont=_actionTipFont;
@property(retain, nonatomic) UIColor *businessTipColor; // @synthesize businessTipColor=_businessTipColor;
@property(retain, nonatomic) UIFont *businessTipFont; // @synthesize businessTipFont=_businessTipFont;
@property(nonatomic) _Bool closeButtonStrongStyle; // @synthesize closeButtonStrongStyle=_closeButtonStrongStyle;
@property(retain, nonatomic) NSString *loadingTip; // @synthesize loadingTip=_loadingTip;
@property(retain, nonatomic) NSString *bizButtonAtFail; // @synthesize bizButtonAtFail=_bizButtonAtFail;
@property(retain, nonatomic) NSString *businessTip; // @synthesize businessTip=_businessTip;
@property(retain, nonatomic) FaceRecogRoundView *faceRectView; // @synthesize faceRectView=_faceRectView;
- (void)onFeedback;
- (void)onBizCustomButtonClick;
- (void)retryButtonDone;
- (void)successAutoDone;
- (void)closeButtonDone;
- (void)cancelButtonDone;
- (void)showFinish;
- (void)stopCircleAnimation;
- (void)startCirleAnimation:(long long)arg1;
- (void)setReflectColor:(unsigned int)arg1;
- (void)resetColor;
- (void)initFaceRectView;
- (void)updateLayout;
- (id)currBusinessTipFont;
- (id)currBusinessTipColor;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(_Bool)arg3;
- (void)procedureDidFinish;
- (void)procedureDidDoneLoading;
- (void)procedureDidDetectFace;
- (void)procedureDidStartDetectFace;
- (void)attachPreviewLayer:(id)arg1;
- (void)initCancelBtn;
- (void)setTip:(id)arg1 animated:(_Bool)arg2;
- (void)setTip:(id)arg1;
- (void)viewDidAppear;
- (void)initView;
- (struct CGRect)getFaceFrame;
- (void)resetViews;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <FaceRecogBaseViewDelegate> delegate; // @dynamic delegate;

@end

