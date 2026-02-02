//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CIContext, CIImage, EAGLContext, GLKView, MTKView, NSString, TAVFrame;
@protocol MTLCommandQueue, MTLDevice, TAVPreviewDelegate;

@interface TAVPreview : UIView
{
    id <TAVPreviewDelegate> _delegate;
    MTKView *_MTKView;
    id <MTLCommandQueue> _MTLCommandQueue;
    id <MTLDevice> _MTLDevice;
    GLKView *_GLKView;
    EAGLContext *_EAGLContext;
    CIContext *_CIContext;
    TAVFrame *_currentFrame;
    CIImage *_CIImage;
    unsigned long long _imageMode;
    struct CGRect _contentRect;
}

+ (_Bool)supportMetal;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long imageMode; // @synthesize imageMode=_imageMode;
@property(retain, nonatomic) CIImage *CIImage; // @synthesize CIImage=_CIImage;
@property(retain, nonatomic) TAVFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(retain, nonatomic) CIContext *CIContext; // @synthesize CIContext=_CIContext;
@property(retain, nonatomic) EAGLContext *EAGLContext; // @synthesize EAGLContext=_EAGLContext;
@property(retain, nonatomic) GLKView *GLKView; // @synthesize GLKView=_GLKView;
@property(retain, nonatomic) id <MTLDevice> MTLDevice; // @synthesize MTLDevice=_MTLDevice;
@property(retain, nonatomic) id <MTLCommandQueue> MTLCommandQueue; // @synthesize MTLCommandQueue=_MTLCommandQueue;
@property(retain, nonatomic) MTKView *MTKView; // @synthesize MTKView=_MTKView;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(nonatomic) __weak id <TAVPreviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)createEmptyCIImageWithSize:(struct CGSize)arg1;
- (id)resizeCIImageForDrawing:(id)arg1;
- (id)renderedCIImage;
- (struct CGSize)renderSize;
- (void)setNeedsDisplay;
- (void)setupPreviewIfNeeded;
- (void)layoutSubviews;
- (void)updatePreviewWithFrame:(id)arg1;
- (void)createEAGLContext;
- (void)createMTLContext;
- (void)initContext;
- (void)dealloc;
- (void)setContentMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

