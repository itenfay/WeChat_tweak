//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSNumber, NSString, WAJSContextPlugin_NativeRender;

@interface WAWebViewPlugin_SkiaCanvas
{
    NSNumber *_oldScrollEnabled;
    WAJSContextPlugin_NativeRender *_nativeRender;
    NSMutableArray *_canvasViews;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *canvasViews; // @synthesize canvasViews=_canvasViews;
- (void)onLongPress:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchDown:(id)arg1;
- (struct __CVBuffer *)copyPixelBufferByViewId:(unsigned int)arg1;
- (void)setInteractionEnable:(_Bool)arg1 mode:(long long)arg2 canvasId:(unsigned int)arg3;
- (void)setUserData:(id)arg1 canvasId:(unsigned int)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)render;
- (_Bool)removeChildView:(unsigned int)arg1;
- (unsigned int)insertCanvas:(struct CGRect)arg1 canvasId:(unsigned int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

