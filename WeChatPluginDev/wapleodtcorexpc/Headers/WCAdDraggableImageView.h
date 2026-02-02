//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AdExposureTimerHelper, UIPanGestureRecognizer, WCAdFullCardDragImageGestureInfo, WCAdURLImageView;
@protocol WCAdDraggableImageViewDelegate;

@interface WCAdDraggableImageView
{
    _Bool _bOutFrameMode;
    _Bool _isAnimating;
    id <WCAdDraggableImageViewDelegate> _delegate;
    WCAdFullCardDragImageGestureInfo *_dragImageInfo;
    WCAdURLImageView *_imageView;
    UIPanGestureRecognizer *_panImageGesture;
    AdExposureTimerHelper *_dragImageTimer;
    struct CGPoint _initialCenter;
    struct CGRect _srcHitRect;
    struct CGRect _destHitRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AdExposureTimerHelper *dragImageTimer; // @synthesize dragImageTimer=_dragImageTimer;
@property(nonatomic) struct CGRect destHitRect; // @synthesize destHitRect=_destHitRect;
@property(nonatomic) struct CGRect srcHitRect; // @synthesize srcHitRect=_srcHitRect;
@property(nonatomic) struct CGPoint initialCenter; // @synthesize initialCenter=_initialCenter;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIPanGestureRecognizer *panImageGesture; // @synthesize panImageGesture=_panImageGesture;
@property(retain, nonatomic) WCAdURLImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCAdFullCardDragImageGestureInfo *dragImageInfo; // @synthesize dragImageInfo=_dragImageInfo;
@property(nonatomic) _Bool bOutFrameMode; // @synthesize bOutFrameMode=_bOutFrameMode;
@property(nonatomic) __weak id <WCAdDraggableImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPanGestureRecognizerDidEnd;
- (void)handlePanImageGesture:(id)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (struct CGRect)fetchConvertedRectFor:(struct CGRect)arg1 toView:(id)arg2;
- (void)removePanImageGesture;
- (void)addPanImageGesture;
- (void)resetDraggableView:(_Bool)arg1;
- (void)setDraggable:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateRectInfosWithSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 dragImageInfo:(id)arg2;

@end

