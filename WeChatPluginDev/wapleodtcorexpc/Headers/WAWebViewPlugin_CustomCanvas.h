//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface WAWebViewPlugin_CustomCanvas
{
    long long _tagMax;
    NSMutableDictionary *_cachedImage;
    NSMutableArray *_completionHandlerList;
    NSNumber *_oldScrollEnabled;
}

- (void).cxx_destruct;
- (double)canvasScaleWithCanvasID:(unsigned int)arg1;
- (struct CGSize)canvasSizeWithCanvasID:(unsigned int)arg1;
- (id)canvasToImageData:(unsigned int)arg1 targetRect:(struct CGRect)arg2;
- (id)canvasViewWithCanvasID:(unsigned int)arg1;
- (id)canvasToImage:(unsigned int)arg1;
- (void)drawCanvas:(unsigned int)arg1 actions:(id)arg2 reset:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setUserData:(id)arg1 canvasId:(unsigned int)arg2;
- (unsigned int)insertCanvas:(struct CGRect)arg1 canvasId:(unsigned int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4;
- (void)setInteractionEnable:(_Bool)arg1 mode:(int)arg2 canvasId:(unsigned int)arg3;
- (void)onCanvasDrawRectFinished:(id)arg1;
- (void)onLongPress:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchDown:(id)arg1;
- (id)getImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

