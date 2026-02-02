//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTCanvasItemCellViewModel, MMWebCanvasView, NSMutableDictionary, NSString;

@interface BTCanvasItemCellView
{
    NSString *_canvasId;
    double _navigationBarHeight;
    double _statusBarHeight;
    MMWebCanvasView *_canvasView;
    NSMutableDictionary *_dicPopupView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicPopupView; // @synthesize dicPopupView=_dicPopupView;
@property(retain, nonatomic) MMWebCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (id)accessibilityLabel;
- (void)onCellDidScroll;
- (_Bool)isCanvasViewInBackground;
- (long long)getFPS;
- (double)getCanvasViewVisibleContainerHeight;
- (double)getCanvasViewVisibleOffsetY;
- (void)closePopupCanvas:(id)arg1;
- (void)popUpCanvas:(id)arg1 rect:(struct CGRect)arg2 hexColor:(id)arg3 mode:(unsigned int)arg4 closeBlock:(CDUnknownBlockType)arg5;
- (double)canvasViewHeight;
- (void)updateCanvasView;
- (void)initCanvasView;
- (void)setViewModel:(id)arg1;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BTCanvasItemCellViewModel *viewModel; // @dynamic viewModel;

@end

