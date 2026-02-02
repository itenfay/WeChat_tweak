//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSContext, MMWebCanvasViewProxy, NSString;
@protocol MMWebCanvasViewDataDelegate, MMWebCanvasViewEventDelegate;

@interface MMWebCanvasView
{
    _Bool _hasStopped;
    JSContext *_jsContext;
    NSString *_appId;
    NSString *_canvasId;
    id <MMWebCanvasViewEventDelegate> _eventDelegate;
    MMWebCanvasViewProxy *_proxyDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStopped; // @synthesize hasStopped=_hasStopped;
@property(retain, nonatomic) MMWebCanvasViewProxy *proxyDelegate; // @synthesize proxyDelegate=_proxyDelegate;
@property(nonatomic) __weak id <MMWebCanvasViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void)onTouchMoved:(id)arg1;
- (void)onTouchCancel:(id)arg1;
- (void)onTouchEnd:(id)arg1;
- (void)onTouchBegin:(id)arg1;
- (id)genJsTouchEventFromEJTouchData:(id)arg1;
- (void)stop;
@property(nonatomic) __weak id <MMWebCanvasViewDataDelegate> dataDelegate;
- (void)injectNativeGlobal;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)internalInit;
- (_Bool)isRollbackEjectaPresent;
- (_Bool)isEnbalePreserveDrawingBufferDoClear;
- (_Bool)enableRetryLoadImageWhenEnterFg;
- (id)initWithFrame:(struct CGRect)arg1 jsContext:(id)arg2 appId:(id)arg3 canvasId:(id)arg4 experimental:(_Bool)arg5 customStyleImpl:(_Bool)arg6 isPreserveDrawingBufferDoClear:(_Bool)arg7 useContentModeTopLeft:(_Bool)arg8;
- (id)initWithFrame:(struct CGRect)arg1 jsContext:(id)arg2 appId:(id)arg3 canvasId:(id)arg4 experimental:(_Bool)arg5 customStyleImpl:(_Bool)arg6;
- (id)initWithFrame:(struct CGRect)arg1 jsContext:(id)arg2 appId:(id)arg3 canvasId:(id)arg4 useContentModeTopLeft:(_Bool)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

