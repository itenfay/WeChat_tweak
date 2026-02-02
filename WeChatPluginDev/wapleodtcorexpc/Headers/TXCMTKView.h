//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAMetalLayer, MTLRenderPassDescriptor, TXCMetalDisplayConfig;
@protocol CAMetalDrawable, MTLDevice, TXCMTKViewDelegate;

@interface TXCMTKView : UIView
{
    _Bool _layerSizeDidUpdate;
    id <CAMetalDrawable> _currentDrawable;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    id <TXCMTKViewDelegate> _delegate;
    id <MTLDevice> _device;
    TXCMetalDisplayConfig *_displayConfig;
    CAMetalLayer *_metalLayer;
    double _scaleFactor;
    struct CGSize _drawableSize;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool layerSizeDidUpdate; // @synthesize layerSizeDidUpdate=_layerSizeDidUpdate;
@property(readonly, nonatomic) CAMetalLayer *metalLayer; // @synthesize metalLayer=_metalLayer;
@property(retain, nonatomic) TXCMetalDisplayConfig *displayConfig; // @synthesize displayConfig=_displayConfig;
@property(nonatomic) struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(nonatomic) __weak id <TXCMTKViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)display;
@property(readonly, nonatomic) id <CAMetalDrawable> currentDrawable; // @synthesize currentDrawable=_currentDrawable;
@property(readonly, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor; // @synthesize renderPassDescriptor=_renderPassDescriptor;
- (void)setupRenderPassDescriptorForTexture:(id)arg1;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(double)arg1;
- (void)didMoveToWindow;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;

@end

