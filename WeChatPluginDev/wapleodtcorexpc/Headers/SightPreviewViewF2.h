//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, SightFocusView, UIColor;
@protocol SightQRCodeScannerDelegate;

@interface SightPreviewViewF2
{
    double m_zoomLevel;
    _Bool m_isReady;
    struct CGSize sizeInPixels;
    double inputWidth;
    double inputHeight;
    double m_currZoomLevel;
    int m_focusInAnim;
    _Bool m_supportQRFrame;
    _Bool _showLightingAdjustBar;
    _Bool _renderFirstFrame;
    _Bool _lightBoostOn;
    int _videoStabilizationMode;
    UIColor *_strokeColor;
    UIColor *_focusViewShadowColor;
    SightFocusView *_focusView;
    NSString *_qrData;
    NSObject<SightQRCodeScannerDelegate> *_qrDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<SightQRCodeScannerDelegate> *qrDelegate; // @synthesize qrDelegate=_qrDelegate;
@property(retain, nonatomic) NSString *qrData; // @synthesize qrData=_qrData;
@property(retain, nonatomic) SightFocusView *focusView; // @synthesize focusView=_focusView;
@property(nonatomic) int videoStabilizationMode; // @synthesize videoStabilizationMode=_videoStabilizationMode;
@property(nonatomic) _Bool lightBoostOn; // @synthesize lightBoostOn=_lightBoostOn;
@property(retain, nonatomic) UIColor *focusViewShadowColor; // @synthesize focusViewShadowColor=_focusViewShadowColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) _Bool renderFirstFrame; // @synthesize renderFirstFrame=_renderFirstFrame;
@property(nonatomic) _Bool showLightingAdjustBar; // @synthesize showLightingAdjustBar=_showLightingAdjustBar;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=m_zoomLevel;
- (void)setQRScannerDelegate:(id)arg1;
- (void)onQRCodeFrame:(float *)arg1 withData:(id)arg2;
- (void)stopAdjustLighting;
- (double)increaseLightingBarPercent:(double)arg1;
- (_Bool)stratAdjustLighting;
- (void)removeFocusStroke;
- (void)startFocusAnimAtPoint:(struct CGPoint)arg1;
- (void)forceFocusAnimAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)transformPointToView:(struct CGPoint)arg1;
- (struct CGPoint)transformPointInView:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isFocusActive;
- (void)setOutputWidth:(float)arg1 andHeight:(float)arg2;
- (void)setZoomLevel:(double)arg1 immediatly:(_Bool)arg2;
- (void)setReady;
- (_Bool)isReady;
- (void)setQRFrameEnable:(_Bool)arg1;
- (_Bool)supportQRFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 previewLayer:(id)arg2;

@end

