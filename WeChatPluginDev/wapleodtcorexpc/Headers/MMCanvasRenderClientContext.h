//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCanvasJsApiHandler, MMCanvasRenderClientContextParams, NSString;
@protocol MMCanvasRenderClientContextDelegate;

@interface MMCanvasRenderClientContext
{
    MMCanvasRenderClientContextParams *_params;
    NSString *_canvasId;
    id <MMCanvasRenderClientContextDelegate> _delegate;
    MMCanvasJsApiHandler *_canvasJsApiHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCanvasJsApiHandler *canvasJsApiHandler; // @synthesize canvasJsApiHandler=_canvasJsApiHandler;
@property(nonatomic) __weak id <MMCanvasRenderClientContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) MMCanvasRenderClientContextParams *params; // @synthesize params=_params;
- (long long)onGetFPS:(id)arg1;
- (id)getJsCanvas;
- (void)onSaveCanvasHeight:(double)arg1;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (id)onGetLayoutDataForCanvasId:(id)arg1;
- (_Bool)isCanvasViewInBackground;
- (_Bool)isCanvasViewAppear;
- (double)getCanvasViewVisibleContainerHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewHeight;
- (double)getCanvasViewWidth;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (id)viewDelegate;
- (id)contextDelegate;
- (void)dealloc;
- (void)internalInit;
- (id)initWithJVM:(id)arg1 name:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

