//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CATextLayer, EditImageTextView, NSString, UIColor, UIView, WCEditViewControllerUIConfig;
@protocol EditImageTextToolV2Delegate;

@interface EditImageTextToolV2
{
    CATextLayer *_tlayer;
    double _strWidth;
    double _maxWidth;
    double _strHeight;
    NSString *_displayStr;
    struct CGRect _imageFrame;
    struct CGPoint _screenCenter;
    UIView *_superView;
    struct CGRect _editViewFrame;
    double _lineWidth;
    UIColor *_lineColor;
    double _zoomScaleWhenInit;
    EditImageTextView *_textView;
    double _textViewSafeAreaWidth;
    unsigned long long _textStyle;
    id <EditImageTextToolV2Delegate> _textDelegate;
    UIColor *_backgroundColor;
    WCEditViewControllerUIConfig *_uiConfig;
}

+ (id)generateWidgetFromState:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCEditViewControllerUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) __weak id <EditImageTextToolV2Delegate> textDelegate; // @synthesize textDelegate=_textDelegate;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double textViewSafeAreaWidth; // @synthesize textViewSafeAreaWidth=_textViewSafeAreaWidth;
@property(retain, nonatomic) EditImageTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double zoomScaleWhenInit; // @synthesize zoomScaleWhenInit=_zoomScaleWhenInit;
@property(copy, nonatomic) NSString *_displayStr; // @synthesize _displayStr;
@property(retain, nonatomic) UIColor *_lineColor; // @synthesize _lineColor;
@property(nonatomic) double _lineWidth; // @synthesize _lineWidth;
- (id)exportWidgetStateForEditorFrame:(struct CGRect)arg1 assetPreviewFrame:(struct CGRect)arg2;
- (void)cancelEditText:(id)arg1;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3;
- (_Bool)startEditingText;
- (id)exportAnimatedLayer;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (void)reloadTextColor;
- (void)createTrueTextLayer;
- (id)mutableCopy;
- (void)resetToInitStateWithFrame:(struct CGRect)arg1;
- (id)initWithEditViewFrame:(struct CGRect)arg1;

@end

