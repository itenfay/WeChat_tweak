//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAMetalLayer, NSString, TPMTLDisplayConfig;
@protocol CAMetalDrawable, MTLDevice;

@interface TPMTLDisplayView : UIView
{
    _Bool _layerSizeUpdateFlag;
    CAMetalLayer *_metalLayer;
    double _scaleFactor;
    id <MTLDevice> _mtlDeivce;
    id <CAMetalDrawable> _currentDrawable;
    TPMTLDisplayConfig *_displayCfg;
    struct CGSize _drawableSize;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain) TPMTLDisplayConfig *displayCfg; // @synthesize displayCfg=_displayCfg;
@property(retain, nonatomic) id <CAMetalDrawable> currentDrawable; // @synthesize currentDrawable=_currentDrawable;
@property(retain) id <MTLDevice> mtlDeivce; // @synthesize mtlDeivce=_mtlDeivce;
@property _Bool layerSizeUpdateFlag; // @synthesize layerSizeUpdateFlag=_layerSizeUpdateFlag;
@property double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property __weak CAMetalLayer *metalLayer; // @synthesize metalLayer=_metalLayer;
- (void)cleanupRenderResources;
- (void)prepareRenderResources;
- (id)getDisplayConfig;
- (void)configDisplay:(id)arg1;
- (void)updateDrawableSize:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(double)arg1;
- (void)setupLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 with:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

