//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebCanvasItemData, NSString;
@protocol BTCanvasItemCellViewModelDelegate;

@interface BTCanvasItemCellViewModel
{
    _Bool _isDisplaying;
    _Bool _isFinishCreateClient;
    _Bool _hasExposedOnce;
    id <BTCanvasItemCellViewModelDelegate> _delegate;
    MMWebCanvasItemData *_itemData;
    unsigned long long _initializeTime;
    unsigned long long _appearTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasExposedOnce; // @synthesize hasExposedOnce=_hasExposedOnce;
@property(nonatomic) unsigned long long appearTime; // @synthesize appearTime=_appearTime;
@property(nonatomic) unsigned long long initializeTime; // @synthesize initializeTime=_initializeTime;
@property(nonatomic) _Bool isFinishCreateClient; // @synthesize isFinishCreateClient=_isFinishCreateClient;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(retain, nonatomic) MMWebCanvasItemData *itemData; // @synthesize itemData=_itemData;
@property(nonatomic) __weak id <BTCanvasItemCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAppear;
- (id)getCurrentWebviewViewController;
- (void)onCanvasViewTouchEvent:(id)arg1 canvasId:(id)arg2;
- (void)onFirstFrameRendered:(id)arg1;
- (long long)getFPS:(id)arg1;
- (void)onItemClick:(unsigned int)arg1 fromCanvasId:(id)arg2;
- (id)getInfoWithKey:(id)arg1;
- (void)canvasClosePopUp:(id)arg1 fromCanvasId:(id)arg2;
- (void)canvasPopUp:(id)arg1 fromCanvasId:(id)arg2 rect:(struct CGRect)arg3 hexColor:(id)arg4 mode:(unsigned int)arg5 closeBlock:(CDUnknownBlockType)arg6;
- (void)reportSetHeight;
- (void)canvasSetHeight:(double)arg1 canvasId:(id)arg2;
- (_Bool)isCanvasViewInBackground:(id)arg1;
- (_Bool)isCanvasViewAppear:(id)arg1;
- (double)getCanvasViewVisibleContainerHeight:(id)arg1;
- (double)getCanvasViewVisibleOffsetY:(id)arg1;
- (double)getCanvasViewHeight:(id)arg1;
- (double)getCanvasViewWidth:(id)arg1;
- (id)accessibilityLabel;
- (void)onScroll;
- (void)onDestroyCanvasView;
- (void)onDisappear;
- (void)reportOnAppear:(_Bool)arg1;
- (void)reportCanvasExpose:(_Bool)arg1;
- (void)onAppear;
- (void)updateCanvasRenderClientViewDelegate;
- (id)createCanvasViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) double viewHeight;
- (id)canvasCellView;
@property(readonly, nonatomic) NSString *bizType;
@property(readonly, nonatomic) NSString *canvasId;
- (id)itemViewClassName;
- (void)dealloc;
- (void)setCellView:(id)arg1;
- (void)internalInit;
- (id)initWithMsgWrap:(id)arg1 viewWidth:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

