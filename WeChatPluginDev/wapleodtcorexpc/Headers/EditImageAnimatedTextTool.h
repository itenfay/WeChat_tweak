//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, NSString, UIColor, UILabel;

@interface EditImageAnimatedTextTool
{
    UILabel *m_layerView;
    CALayer *m_textLayer;
    _Bool _editable;
    NSString *m_text;
    UIColor *m_color;
    UIColor *_strokerColor;
    double _maxWidth;
    double _maxFontSize;
    double _minFontSize;
    NSString *_inputHint;
}

+ (id)fontArrayOfSize:(double)arg1;
+ (id)defaultFontOfSize:(double)arg1;
+ (id)labelForCaptionWithFontSize:(double)arg1 borderColor:(id)arg2;
+ (id)labelForInputHintLaylerWithFontSize:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *inputHint; // @synthesize inputHint=_inputHint;
@property(nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(nonatomic) double maxFontSize; // @synthesize maxFontSize=_maxFontSize;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIColor *strokerColor; // @synthesize strokerColor=_strokerColor;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=m_color;
@property(readonly, nonatomic) NSString *text; // @synthesize text=m_text;
- (id)accessibilityLabel;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (double)widgetHeight;
- (double)widgetWidth;
- (double)widgetViewBorder;
- (_Bool)startEditingText;
- (id)textLayerWithCustomLayer:(_Bool)arg1 timingObject:(id)arg2;
- (id)exportAnimatedLayerWithTimingObject:(id)arg1;
- (void)didChangeText:(id)arg1 color:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

