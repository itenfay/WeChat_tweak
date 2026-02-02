//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanBlurEffectView, CameraScanGoodsPinView, NSMutableArray, UIImageView, UIView;
@protocol CameraScanGoodsContentViewDelegate, CameraScanGoodsMarkDotViewInterface;

@interface CameraScanGoodsContentView
{
    _Bool _bShouldHideCaptureView;
    UIView<CameraScanGoodsMarkDotViewInterface> *_markDotView;
    CameraScanBlurEffectView *_blurView;
    UIView *_maskView;
    unsigned long long _markDotType;
    NSMutableArray *_scanDotViewList;
    CameraScanGoodsPinView *_pinView;
    UIImageView *_fullScreenBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *fullScreenBgView; // @synthesize fullScreenBgView=_fullScreenBgView;
@property(retain, nonatomic) CameraScanGoodsPinView *pinView; // @synthesize pinView=_pinView;
@property(retain, nonatomic) NSMutableArray *scanDotViewList; // @synthesize scanDotViewList=_scanDotViewList;
@property(nonatomic) unsigned long long markDotType; // @synthesize markDotType=_markDotType;
@property(nonatomic) _Bool bShouldHideCaptureView; // @synthesize bShouldHideCaptureView=_bShouldHideCaptureView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CameraScanBlurEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView<CameraScanGoodsMarkDotViewInterface> *markDotView; // @synthesize markDotView=_markDotView;
- (void)stopShakingAnimation;
- (void)startShakingAnimation;
- (void)stopMarkingAnimation;
- (void)startMarkingAnimation:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopScanningAnimation;
- (void)startScanningAnimation:(id)arg1;
- (id)getOneScanDotView;
- (void)layoutSubviews;
- (void)setupMaskView;
- (void)setupMarkdotView;
- (void)setupPinView;
- (void)setupScanDotViewList;
- (void)setupBlurView;
- (void)setupFullScreenBgView;
- (void)setupAllSubviews;
- (id)initWithDelegate:(id)arg1 markDotType:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic) __weak id <CameraScanGoodsContentViewDelegate> delegate; // @dynamic delegate;

@end

