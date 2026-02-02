//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, WCFinderCustomImageRichTextView;

@interface WCFinderBlurBubbleView : UIView
{
    _Bool _hasTriangleArrow;
    _Bool _useRawContent;
    UIView *_bubbleBGView;
    WCFinderCustomImageRichTextView *_bubbleTextView;
    UIView *_textViewContainer;
    UIView *_triangleBViewShadowView;
    UIImageView *_triangleBView;
    UIColor *_bkColor;
    UIColor *_fontColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useRawContent; // @synthesize useRawContent=_useRawContent;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) UIColor *bkColor; // @synthesize bkColor=_bkColor;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(retain, nonatomic) UIView *triangleBViewShadowView; // @synthesize triangleBViewShadowView=_triangleBViewShadowView;
@property(retain, nonatomic) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *bubbleTextView; // @synthesize bubbleTextView=_bubbleTextView;
@property(retain, nonatomic) UIView *bubbleBGView; // @synthesize bubbleBGView=_bubbleBGView;
@property(nonatomic) _Bool hasTriangleArrow; // @synthesize hasTriangleArrow=_hasTriangleArrow;
- (void)updateBottomTipsLayoutWithOffset:(double)arg1;
- (id)replaceDynamicIconColorWithContent:(id)arg1 colorString:(id)arg2;
- (_Bool)updateBlurBubbleViewWithCustomTitle:(id)arg1 labelMaxWid:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 bkColor:(id)arg2 fontColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

