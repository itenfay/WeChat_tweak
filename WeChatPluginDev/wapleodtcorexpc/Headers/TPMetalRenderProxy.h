//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPMetalColorHelper;
@protocol MTLDevice, TPMetalRender;

@interface TPMetalRenderProxy : NSObject
{
    _Bool _colorMangementFlag;
    _Bool _waitingForMainThread;
    _Bool _renderOptYuv420;
    int _rendererSharpenFlag;
    int _rendererLucidFlag;
    int _rendererClarityFlag;
    struct ITPRendererInterruptCallback *_interruptCallback;
    id <MTLDevice> _metalDevice;
    id <TPMetalRender> _nv12Render;
    id <TPMetalRender> _i420Render;
    id <TPMetalRender> _rgbaRender;
    TPMetalColorHelper *_colorHelper;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool renderOptYuv420; // @synthesize renderOptYuv420=_renderOptYuv420;
@property(nonatomic) int rendererClarityFlag; // @synthesize rendererClarityFlag=_rendererClarityFlag;
@property(nonatomic) int rendererLucidFlag; // @synthesize rendererLucidFlag=_rendererLucidFlag;
@property(nonatomic) int rendererSharpenFlag; // @synthesize rendererSharpenFlag=_rendererSharpenFlag;
@property(nonatomic) _Bool waitingForMainThread; // @synthesize waitingForMainThread=_waitingForMainThread;
@property(retain, nonatomic) TPMetalColorHelper *colorHelper; // @synthesize colorHelper=_colorHelper;
@property(nonatomic) _Bool colorMangementFlag; // @synthesize colorMangementFlag=_colorMangementFlag;
@property(retain, nonatomic) id <TPMetalRender> rgbaRender; // @synthesize rgbaRender=_rgbaRender;
@property(retain, nonatomic) id <TPMetalRender> i420Render; // @synthesize i420Render=_i420Render;
@property(retain, nonatomic) id <TPMetalRender> nv12Render; // @synthesize nv12Render=_nv12Render;
@property(retain, nonatomic) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
@property(nonatomic) struct ITPRendererInterruptCallback *interruptCallback; // @synthesize interruptCallback=_interruptCallback;
- (void)waitForMainThread;
- (_Bool)prepareRender;
- (void)createRGBARender;
- (void)createI420Render;
- (void)createNV12Render;
- (id)chooseRender:(struct TPFrame *)arg1;
- (_Bool)drawFrame:(struct TPFrame *)arg1 withDestination:(id)arg2;
- (void)setClarityFlag:(int)arg1;
- (void)setLucidFlag:(int)arg1;
- (void)setSharpenFlag:(int)arg1;
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

