//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAMetalLayer, MTLRenderPassDescriptor;
@protocol CAMetalDrawable, MTLDevice, TPMTKViewDelegate;

@interface TPMTKView : UIView
{
    _Bool _layerSizeDidUpdate;
    _Bool _enableColorManage;
    int _layerColorSpace;
    int _lucidMode;
    id <CAMetalDrawable> _currentDrawable;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    id <TPMTKViewDelegate> _delegate;
    id <MTLDevice> _device;
    CAMetalLayer *_metalLayer;
    double _scaleFactor;
    struct CGSize _drawableSize;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) int lucidMode; // @synthesize lucidMode=_lucidMode;
@property(nonatomic) struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool enableColorManage; // @synthesize enableColorManage=_enableColorManage;
@property(nonatomic) _Bool layerSizeDidUpdate; // @synthesize layerSizeDidUpdate=_layerSizeDidUpdate;
@property __weak CAMetalLayer *metalLayer; // @synthesize metalLayer=_metalLayer;
@property(nonatomic) int layerColorSpace; // @synthesize layerColorSpace=_layerColorSpace;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(nonatomic) __weak id <TPMTKViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(double)arg1;
- (void)configColorspace:(struct __CFString *)arg1;
- (void)configViewColorSpace:(int)arg1;
- (void)display;
@property(readonly, nonatomic) id <CAMetalDrawable> currentDrawable; // @synthesize currentDrawable=_currentDrawable;
@property(readonly, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor; // @synthesize renderPassDescriptor=_renderPassDescriptor;
- (void)setupRenderPassDescriptorForTexture:(id)arg1;
- (void)setupMetalLayerForLucid:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didMoveToWindow;
- (void)initMetal:(id)arg1 withColor:(_Bool)arg2;
- (void)initMetal:(id)arg1;
- (void)initCommon;
- (void)setAlpha:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

