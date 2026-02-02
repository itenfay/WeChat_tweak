//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSNumber, NSString, WAJSCoreService, WAOpenGLView;

@interface WAWebViewPlugin_WebGLCanvas
{
    NSNumber *_oldScrollEnabled;
    WAJSCoreService *_service;
    WAOpenGLView *_glview;
    NSMutableDictionary *_canvasMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *canvasMap; // @synthesize canvasMap=_canvasMap;
@property(nonatomic) __weak WAOpenGLView *glview; // @synthesize glview=_glview;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
- (void)onTouchesCancel:(id)arg1;
- (void)onTouchesEnd:(id)arg1;
- (void)onTouchesBegin:(id)arg1;
- (void)setCaptureDelegate:(unsigned int)arg1 offScreenCanvasId:(unsigned int)arg2 mark:(unsigned int)arg3 options:(id)arg4 delegate:(id)arg5;
- (void)removeCanvas:(unsigned int)arg1;
- (void)resizeView:(unsigned int)arg1 region:(struct CGRect)arg2;
- (void)insertCanvas:(struct CGRect)arg1 canvasId:(int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4 useNano:(_Bool)arg5 block:(CDUnknownBlockType)arg6;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
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

