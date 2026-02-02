//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, NSMutableArray, NSMutableDictionary, NSString, WANonRetainingProxy;
@protocol NativeRenderDelegate;

@interface WAJSContextPlugin_NativeRender
{
    _Bool _paused;
    _Bool _destroyed;
    _Bool _present;
    id <NativeRenderDelegate> _webglDelegate;
    id <NativeRenderDelegate> _canvasDelegate;
    NSMutableDictionary *_mapCanvasContexts;
    NSMutableDictionary *_rafObjs;
    CADisplayLink *_displayLink;
    WANonRetainingProxy *_proxy;
    NSMutableArray *_keepCanvas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *keepCanvas; // @synthesize keepCanvas=_keepCanvas;
@property _Bool present; // @synthesize present=_present;
@property _Bool destroyed; // @synthesize destroyed=_destroyed;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) WANonRetainingProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableDictionary *rafObjs; // @synthesize rafObjs=_rafObjs;
@property(retain, nonatomic) NSMutableDictionary *mapCanvasContexts; // @synthesize mapCanvasContexts=_mapCanvasContexts;
@property(nonatomic) __weak id <NativeRenderDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(nonatomic) __weak id <NativeRenderDelegate> webglDelegate; // @synthesize webglDelegate=_webglDelegate;
- (void)dispathResource:(id)arg1;
- (void)loadResourceAsync:(id)arg1 withRefererPolicy:(id)arg2 andCallback:(CDUnknownBlockType)arg3;
- (id)loadResource:(id)arg1 withRefererPolicy:(id)arg2;
- (id)getImageData:(id)arg1;
- (void)runLoop;
- (void)run:(id)arg1;
- (void)removeCanvas:(unsigned int)arg1;
- (id)createWebGLContext:(unsigned int)arg1;
- (void)initRAF;
- (void)initDisplayLink;
- (void)initEnv:(id)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

