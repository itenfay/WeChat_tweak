//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, EditImageAnimatedTextTool, EmoticonLensDynamicTipView, UIImageView;

@interface PendantPreviewView : UIView
{
    EditImageAnimatedTextTool *_textView;
    long long _previewType;
    EmoticonLensDynamicTipView *_actionTipView;
    UIImageView *_placeholderImageView;
    CAShapeLayer *_maskLayer;
    CALayer *_previewLayer;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) CALayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) EmoticonLensDynamicTipView *actionTipView; // @synthesize actionTipView=_actionTipView;
@property(nonatomic) long long previewType; // @synthesize previewType=_previewType;
@property(retain, nonatomic) EditImageAnimatedTextTool *textView; // @synthesize textView=_textView;
- (struct CGRect)visiableAreaForScene:(long long)arg1;
- (void)switchScene:(long long)arg1;
- (void)updateMaskLayerWithVisiableFrame:(struct CGRect)arg1 radius:(double)arg2;
- (void)updateTextPosition;
- (void)showPlaceholderImage:(id)arg1;
- (void)setupPreviewLayer:(id)arg1;
- (void)showLensActionTips:(id)arg1;
- (void)setText:(id)arg1 textColor:(id)arg2 strokeColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

