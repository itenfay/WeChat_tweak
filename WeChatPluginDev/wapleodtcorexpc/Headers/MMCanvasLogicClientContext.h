//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBizCanvasJsApiHandler, MMCanvasJsApiHandler, MMCanvasLogicClientContextParams, MMClientJsApiHandler, MMPopupJsApiHandler, NSString;
@protocol MMCanvasLogicClientContextDelegate;

@interface MMCanvasLogicClientContext
{
    MMCanvasLogicClientContextParams *_params;
    unsigned long long _preloadTs;
    unsigned long long _launchTs;
    MMClientJsApiHandler *_clientJsApiHandler;
    MMCanvasJsApiHandler *_canvasJsApiHandler;
    MMPopupJsApiHandler *_popupJsApiHandler;
    MMBizCanvasJsApiHandler *_bizCanvasJsApiHandler;
    id <MMCanvasLogicClientContextDelegate> _contextDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMCanvasLogicClientContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
@property(retain, nonatomic) MMBizCanvasJsApiHandler *bizCanvasJsApiHandler; // @synthesize bizCanvasJsApiHandler=_bizCanvasJsApiHandler;
@property(retain, nonatomic) MMPopupJsApiHandler *popupJsApiHandler; // @synthesize popupJsApiHandler=_popupJsApiHandler;
@property(retain, nonatomic) MMCanvasJsApiHandler *canvasJsApiHandler; // @synthesize canvasJsApiHandler=_canvasJsApiHandler;
@property(retain, nonatomic) MMClientJsApiHandler *clientJsApiHandler; // @synthesize clientJsApiHandler=_clientJsApiHandler;
@property(nonatomic) unsigned long long launchTs; // @synthesize launchTs=_launchTs;
@property(nonatomic) unsigned long long preloadTs; // @synthesize preloadTs=_preloadTs;
@property(retain, nonatomic) MMCanvasLogicClientContextParams *params; // @synthesize params=_params;
- (void)onDeleteCanvasCard:(id)arg1;
- (void)onPreloadImageWithUrl:(id)arg1;
- (void)onItemClick:(unsigned int)arg1;
- (id)onGetInfoWithKey:(id)arg1;
- (void)callbackPopupCanvasClose:(id)arg1 callbackId:(id)arg2;
- (void)closePopupCanvas:(id)arg1;
- (void)popUpCanvas:(id)arg1 rect:(struct CGRect)arg2 hexColor:(id)arg3 mode:(unsigned int)arg4 closeBlock:(CDUnknownBlockType)arg5;
- (long long)onGetFPS:(id)arg1;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (void)onSaveCanvasHeight:(double)arg1;
- (id)onGetLayoutDataForCanvasId:(id)arg1;
- (_Bool)isCanvasViewInBackground;
- (_Bool)isCanvasViewAppear;
- (double)getCanvasViewVisibleContainerHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewHeight;
- (double)getCanvasViewWidth;
- (id)getCurrentWebviewViewController;
- (void)callbackWithId:(id)arg1 eventInfo:(id)arg2;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
@property(readonly, nonatomic) NSString *canvasId;
- (void)updateDeleteHandler:(CDUnknownBlockType)arg1;
- (id)viewDelegate;
- (void)resetDelegateAndHandler;
- (void)updateViewDelegate:(id)arg1;
- (void)dealloc;
- (void)internalInit;
- (id)initWithJVM:(id)arg1 name:(id)arg2 params:(id)arg3 contextDelegate:(id)arg4 workQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

