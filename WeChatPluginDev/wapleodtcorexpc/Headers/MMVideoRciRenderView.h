//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMCameraFocusSquare, UIPinchGestureRecognizer, UITapGestureRecognizer, XImageViewRenderer;
@protocol MMVideoRenderViewDelegate;

@interface MMVideoRciRenderView : UIView
{
    _Bool _isInBackground;
    struct CGSize _bufSize;
    struct CGRect _frameRect;
    struct CGRect _frame;
    unsigned long long _busyCount;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MMCameraFocusSquare *_focusSquare;
    unsigned int _originYuvYTexture;
    _Bool _mirror;
    _Bool _renderable;
    _Bool _focusable;
    _Bool _disableOpaqueRender;
    _Bool _enableGestures;
    _Bool _isInRotationAnimation;
    float _rotationInDegree;
    int _videoBlockThreshold;
    int _streamType;
    int _blockIntervalMs;
    int _mRawDataFrameType;
    unsigned long long _contentMode;
    id <MMVideoRenderViewDelegate> _delegate;
    unsigned long long _lastBlockDuration;
    CDUnknownBlockType _onRenderEvent;
    XImageViewRenderer *_renderer;
    struct CGRect _videoRect;
}

- (void).cxx_destruct;
@property(nonatomic) int mRawDataFrameType; // @synthesize mRawDataFrameType=_mRawDataFrameType;
@property(retain, nonatomic) XImageViewRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(copy, nonatomic) CDUnknownBlockType onRenderEvent; // @synthesize onRenderEvent=_onRenderEvent;
@property(nonatomic) _Bool isInRotationAnimation; // @synthesize isInRotationAnimation=_isInRotationAnimation;
@property(nonatomic) _Bool enableGestures; // @synthesize enableGestures=_enableGestures;
@property(readonly, nonatomic) unsigned long long lastBlockDuration; // @synthesize lastBlockDuration=_lastBlockDuration;
@property(readonly, nonatomic) struct CGSize bufSize; // @synthesize bufSize=_bufSize;
@property(nonatomic) int blockIntervalMs; // @synthesize blockIntervalMs=_blockIntervalMs;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) int videoBlockThreshold; // @synthesize videoBlockThreshold=_videoBlockThreshold;
@property(nonatomic) _Bool disableOpaqueRender; // @synthesize disableOpaqueRender=_disableOpaqueRender;
@property(nonatomic) _Bool focusable; // @synthesize focusable=_focusable;
@property(nonatomic) _Bool renderable; // @synthesize renderable=_renderable;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) __weak id <MMVideoRenderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float rotationInDegree; // @synthesize rotationInDegree=_rotationInDegree;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)focusTap:(id)arg1;
- (void)deallocFocusView;
- (void)initFocusView;
- (void)handlePinch:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)renderTexture:(id)arg1;
- (void)renderWeEffectFrame:(id)arg1;
- (void)setupLayer;
- (void)cleanup;
- (void)dealloc;
- (void)setup;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

