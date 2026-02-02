//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, StrokeView;
@protocol LiteAppCameraPreviewDelegate;

@interface LiteAppCameraPreview
{
    double m_zoomLevel;
    _Bool m_isReady;
    struct CGSize sizeInPixels;
    double inputWidth;
    double inputHeight;
    double m_currZoomLevel;
    int m_focusInAnim;
    StrokeView *m_focusStroke;
    _Bool m_supportQRFrame;
    _Bool m_isPinching;
    _Bool m_forbidGesture;
    _Bool renderFirstFrame;
    _Bool _lightBoostOn;
    int _videoStabilizationMode;
    id <LiteAppCameraPreviewDelegate> m_delegate;
    NSString *_qrData;
    double _m_lastZoomScale;
}

- (void).cxx_destruct;
@property(nonatomic) double m_lastZoomScale; // @synthesize m_lastZoomScale=_m_lastZoomScale;
@property(retain, nonatomic) NSString *qrData; // @synthesize qrData=_qrData;
@property(nonatomic) int videoStabilizationMode; // @synthesize videoStabilizationMode=_videoStabilizationMode;
@property(nonatomic) _Bool lightBoostOn; // @synthesize lightBoostOn=_lightBoostOn;
@property(readonly, nonatomic) _Bool renderFirstFrame; // @synthesize renderFirstFrame;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=m_zoomLevel;
@property(nonatomic) __weak id <LiteAppCameraPreviewDelegate> m_delegate; // @synthesize m_delegate;
- (id)getShineAnim:(double)arg1 count:(unsigned int)arg2;
- (void)hideFocusFrame;
- (void)removeFocusStroke;
- (void)startFocusAnimAtPoint:(struct CGPoint)arg1;
- (void)forceFocusAnimAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)transformPointToView:(struct CGPoint)arg1;
- (struct CGPoint)transformPointInView:(struct CGPoint)arg1;
- (void)setOutputWidth:(float)arg1 andHeight:(float)arg2;
- (void)forceSetLastZoomScale:(double)arg1;
- (void)setZoomLevel:(double)arg1 immediatly:(_Bool)arg2;
- (void)setReady;
- (_Bool)isReady;
- (void)setQRFrameEnable:(_Bool)arg1;
- (_Bool)supportQRFrame;
- (void)focusCenter;
- (void)handlePinchGesture:(id)arg1;
- (void)handleFocusTap:(id)arg1;
- (void)setupGesture:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 previewLayer:(id)arg2;

@end

