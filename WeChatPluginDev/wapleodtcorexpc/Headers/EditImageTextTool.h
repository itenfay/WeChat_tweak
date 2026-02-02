//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CATextLayer, EditImageTextView, NSString, UIColor, UIView, WCEditViewControllerUIConfig;
@protocol EditImageTextToolDelegate;

@interface EditImageTextTool
{
    CATextLayer *_tlayer;
    double _strWidth;
    double _maxWidth;
    double _strHeight;
    NSString *_displayStr;
    struct CGRect _imageFrame;
    struct CGPoint _screenCenter;
    double _zoomScaleWhenInit;
    UIView *_superView;
    struct CGRect _editViewFrame;
    double _lineWidth;
    UIColor *_lineColor;
    id <EditImageTextToolDelegate> _textDelegate;
    EditImageTextView *_textView;
    double _textViewSafeAreaWidth;
    UIColor *_confirmBtnColor;
    WCEditViewControllerUIConfig *_uiConfig;
    unsigned long long _textStyle;
    struct CGRect _textInputViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) WCEditViewControllerUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(nonatomic) struct CGRect textInputViewFrame; // @synthesize textInputViewFrame=_textInputViewFrame;
@property(retain, nonatomic) UIColor *confirmBtnColor; // @synthesize confirmBtnColor=_confirmBtnColor;
@property(nonatomic) double textViewSafeAreaWidth; // @synthesize textViewSafeAreaWidth=_textViewSafeAreaWidth;
@property(retain, nonatomic) EditImageTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <EditImageTextToolDelegate> textDelegate; // @synthesize textDelegate=_textDelegate;
@property(copy, nonatomic) NSString *_displayStr; // @synthesize _displayStr;
@property(nonatomic) UIColor *_lineColor; // @synthesize _lineColor;
@property(nonatomic) double _lineWidth; // @synthesize _lineWidth;
- (void)cancelEditText:(id)arg1;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)changeEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (_Bool)startEditingText;
- (id)exportAnimatedLayer;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (void)reloadTextColor;
- (void)createTrueTextLayer;
- (void)createTextLayer:(struct CGRect)arg1 withCenterPoint:(struct CGPoint)arg2 withSuperView:(id)arg3;
- (void)resetToInitStateWithFrame:(struct CGRect)arg1;
- (id)mutableCopy;
- (id)initWithEditViewFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

