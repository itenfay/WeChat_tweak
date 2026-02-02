//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView;

@interface EditImageEmotionTool
{
    double _imgWidth;
    double _imgHeight;
    UIImageView *_imageView;
    double _zoomScaleWhenInit;
    _Bool _animatable;
    NSString *_emotionMd5;
    NSString *_emotionSearchKey;
}

+ (id)generateWidgetFromState:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool animatable; // @synthesize animatable=_animatable;
@property(retain, nonatomic) NSString *emotionSearchKey; // @synthesize emotionSearchKey=_emotionSearchKey;
@property(retain, nonatomic) NSString *emotionMd5; // @synthesize emotionMd5=_emotionMd5;
- (id)exportWidgetStateForEditorFrame:(struct CGRect)arg1 assetPreviewFrame:(struct CGRect)arg2;
- (id)exportAnimatedLayer;
- (void)resetWidget;
- (void)seekWidgetToTimeSec:(double)arg1;
- (void)reviveWidget;
- (void)freezeWidget;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (_Bool)startEditingText;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (void)_genAnimateForImageView;
- (void)_removeAnimateFromImageView;
- (void)didSelectEmotion:(id)arg1 withCenterPoint:(struct CGPoint)arg2 md5:(id)arg3;

@end

