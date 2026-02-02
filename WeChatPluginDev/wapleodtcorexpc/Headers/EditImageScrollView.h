//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageView, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, WCEditViewControllerUIConfig;
@protocol EditImageOperationDelegate;

@interface EditImageScrollView
{
    double _naturalTopLength;
    _Bool _isZooming;
    _Bool _isScrolling;
    unsigned int _gestureMonitor;
    double _minimunScaleWhenInit;
    _Bool _isInShockZoomArea;
    unsigned int _fromEntrance;
    id <EditImageOperationDelegate> m_delegate;
    EditImageView *oEditImageView;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotateGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    unsigned long long _rotationOrientationOverall;
    unsigned long long _editImageUIStyle;
    double __lastScale;
    unsigned long long _editImageContentType;
    WCEditViewControllerUIConfig *_uiConfig;
    struct CGPoint __lastOffset;
    struct CGRect _imageFrame;
    struct CGRect _cropFrame;
    struct CGRect _initialFrame;
    struct CGRect __lastGridFrame;
    struct CGRect __lastCropFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInShockZoomArea; // @synthesize isInShockZoomArea=_isInShockZoomArea;
@property(retain, nonatomic) WCEditViewControllerUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(nonatomic) unsigned long long editImageContentType; // @synthesize editImageContentType=_editImageContentType;
@property(nonatomic) struct CGRect _lastCropFrame; // @synthesize _lastCropFrame=__lastCropFrame;
@property(nonatomic) struct CGPoint _lastOffset; // @synthesize _lastOffset=__lastOffset;
@property(nonatomic) double _lastScale; // @synthesize _lastScale=__lastScale;
@property(nonatomic) struct CGRect _lastGridFrame; // @synthesize _lastGridFrame=__lastGridFrame;
@property(nonatomic) unsigned int fromEntrance; // @synthesize fromEntrance=_fromEntrance;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(nonatomic) unsigned long long _rotationOrientationOverall; // @synthesize _rotationOrientationOverall;
@property(retain, nonatomic) UILongPressGestureRecognizer *_longPressGesture; // @synthesize _longPressGesture;
@property(retain, nonatomic) UIRotationGestureRecognizer *_rotateGesture; // @synthesize _rotateGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *_pinchGesture; // @synthesize _pinchGesture;
@property(retain, nonatomic) UITapGestureRecognizer *_tapGesture; // @synthesize _tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *_panGesture; // @synthesize _panGesture;
@property(nonatomic) struct CGRect _initialFrame; // @synthesize _initialFrame;
@property(nonatomic) struct CGRect _cropFrame; // @synthesize _cropFrame;
@property(nonatomic) struct CGRect _imageFrame; // @synthesize _imageFrame;
@property(retain, nonatomic) EditImageView *oEditImageView; // @synthesize oEditImageView;
@property(nonatomic) __weak id <EditImageOperationDelegate> m_delegate; // @synthesize m_delegate;
- (struct CGRect)getAssetPreviewFrame;
- (void)dragaAndDropWidget;
- (void)editImageViewPOIWidgetHiddenStateChange:(_Bool)arg1;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)deactivateCustomGestures;
- (void)activateCustomGestures;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)getEditImageAttr;
- (void)updateFixedPositionWidgetWithTipsButton:(id)arg1 lineView:(id)arg2;
- (void)setCancelBtnFrame:(struct CGRect)arg1;
- (void)updateMusicLyricsCropTime:(CDStruct_e83c9415)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (void)setMusicLyricIsOn:(_Bool)arg1;
- (void)onClickCancelBtn;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)changeLineWidth:(double)arg1;
- (void)changeLineColor:(id)arg1;
- (void)useImageTool:(int)arg1;
- (int)checkToolType;
- (void)editImageDidRecordAnOperation;
- (void)setEraserModeActive:(_Bool)arg1;
- (void)recordAnOperation:(id)arg1;
- (void)globalRedo;
- (void)globalUndo;
- (_Bool)canGlobalRedo;
- (_Bool)canGlobalUndo;
- (void)redo;
- (void)undoMosaic;
- (void)undoPen;
- (_Bool)canRedo;
- (_Bool)canMosaicUndo;
- (_Bool)canPenUndo;
- (void)cropImage:(struct CGRect)arg1;
- (void)adjustScroolViewToFreeContentInset;
- (double)minScaleWithFrame:(struct CGRect)arg1;
- (double)adjustMinScaleIfNeed:(double)arg1;
- (void)adjustScrollViewContentInset;
- (void)adjustScrollViewZoomScale;
- (struct CGRect)getLimitAreaFrame;
- (double)limitAreaHeight;
- (double)limitAreaWidth;
- (double)limitAreaTop;
- (double)limitAreaLeft;
- (struct CGRect)cropFunctionInitialArea;
- (void)onImageRotatedByOrientation:(unsigned long long)arg1;
- (void)loadOriginalImage:(id)arg1 withImageData:(id)arg2;
- (struct CGRect)getMinZoomViewFrame;
- (struct CGRect)getEditViewFrame;
- (void)loadImage:(id)arg1 withDrawLayerArray:(id)arg2 withEditEntrance:(unsigned int)arg3;
- (void)reloadViews:(_Bool)arg1;
- (void)initGestures;
- (id)initWithFrame:(struct CGRect)arg1 uiConfig:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

