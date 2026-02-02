//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecoFlowSeparatorLineView, MMWebCanvasItemData, MMWebCanvasView, NSMutableDictionary, NSString;

@interface BTRecoFlowCanvasCell
{
    _Bool _isDisplaying;
    _Bool _hasExposedOnce;
    BTRecoFlowSeparatorLineView *_bottomSeparatorView;
    NSString *_canvasId;
    double _navigationBarHeight;
    double _statusBarHeight;
    MMWebCanvasView *_canvasView;
    NSMutableDictionary *_dicPopupView;
    double _viewHeight;
    MMWebCanvasItemData *_itemData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasExposedOnce; // @synthesize hasExposedOnce=_hasExposedOnce;
@property(retain, nonatomic) MMWebCanvasItemData *itemData; // @synthesize itemData=_itemData;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(retain, nonatomic) NSMutableDictionary *dicPopupView; // @synthesize dicPopupView=_dicPopupView;
@property(retain, nonatomic) MMWebCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) BTRecoFlowSeparatorLineView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
- (_Bool)isAppear;
- (id)getCurrentWebviewViewController;
- (long long)getFPS:(id)arg1;
- (id)getInfoWithKey:(id)arg1;
- (void)canvasClosePopUp:(id)arg1 fromCanvasId:(id)arg2;
- (void)popUpCanvas:(id)arg1 rect:(struct CGRect)arg2 hexColor:(id)arg3 mode:(unsigned int)arg4 closeBlock:(CDUnknownBlockType)arg5;
- (void)canvasPopUp:(id)arg1 fromCanvasId:(id)arg2 rect:(struct CGRect)arg3 hexColor:(id)arg4 mode:(unsigned int)arg5 closeBlock:(CDUnknownBlockType)arg6;
- (void)reportSetHeight;
- (void)canvasSetHeight:(double)arg1 canvasId:(id)arg2;
- (_Bool)isCanvasViewInBackground:(id)arg1;
- (_Bool)isCanvasViewAppear:(id)arg1;
- (double)getCanvasViewVisibleContainerHeight:(id)arg1;
- (double)getCanvasViewVisibleOffsetY:(id)arg1;
- (double)getCanvasViewHeight:(id)arg1;
- (double)getCanvasViewWidth:(id)arg1;
- (void)layoutSubviews;
- (void)onDisappear;
- (void)reportOnAppear:(_Bool)arg1;
- (void)reportCanvasExpose:(_Bool)arg1;
- (void)onAppear;
- (void)initBottomSeparatorView;
- (id)accessibilityLabel;
- (void)initOrUpdateCanvasView;
- (void)updateSectionWithHeight:(double)arg1 needReload:(_Bool)arg2;
- (void)setSectionData:(id)arg1;
- (void)detachLogicAndDestroyCurrentCanvas;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

