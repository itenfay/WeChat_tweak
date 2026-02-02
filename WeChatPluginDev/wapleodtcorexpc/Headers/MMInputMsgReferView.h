//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, RichTextView, UIColor, UIImage, UIImageView, UIVisualEffectView;
@protocol MMInputMsgReferDelegate;

@interface MMInputMsgReferView : UIView
{
    _Bool _isCleanable;
    _Bool _isJumpable;
    _Bool _canShowThumbImage;
    _Bool _forbidInteraction;
    _Bool _useCustomBackgroundView;
    id <MMInputMsgReferDelegate> _delegate;
    RichTextView *_richTextView;
    MMUIButton *_icon;
    UIImageView *_thumbImageView;
    double _maxWidth;
    double _containerCornerRadius;
    UIColor *_containerBackgroundColor;
    NSString *_content;
    UIImage *_thumbImage;
    UIView *_containerView;
    UIView *_highlightView;
    UIVisualEffectView *_visionBgView;
    struct UIEdgeInsets _containerInset;
}

+ (struct CGSize)sizeForContent:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 parseType:(long long)arg4 cleanable:(_Bool)arg5 inset:(struct UIEdgeInsets)arg6 outArrStyles:(id *)arg7 hasImage:(_Bool)arg8;
+ (struct CGSize)sizeForContent:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 parseType:(long long)arg4 cleanable:(_Bool)arg5 inset:(struct UIEdgeInsets)arg6 outArrStyles:(id *)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *visionBgView; // @synthesize visionBgView=_visionBgView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool useCustomBackgroundView; // @synthesize useCustomBackgroundView=_useCustomBackgroundView;
@property(nonatomic) _Bool forbidInteraction; // @synthesize forbidInteraction=_forbidInteraction;
@property(retain, nonatomic) UIColor *containerBackgroundColor; // @synthesize containerBackgroundColor=_containerBackgroundColor;
@property(nonatomic) double containerCornerRadius; // @synthesize containerCornerRadius=_containerCornerRadius;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) struct UIEdgeInsets containerInset; // @synthesize containerInset=_containerInset;
@property(nonatomic) _Bool canShowThumbImage; // @synthesize canShowThumbImage=_canShowThumbImage;
@property(nonatomic) _Bool isJumpable; // @synthesize isJumpable=_isJumpable;
@property(nonatomic) _Bool isCleanable; // @synthesize isCleanable=_isCleanable;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(readonly, nonatomic) MMUIButton *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(nonatomic) __weak id <MMInputMsgReferDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canBecomeFirstResponder;
- (void)layoutHighlightView;
- (void)updateWithSize:(struct CGSize)arg1 arrStyles:(id)arg2;
- (void)doLayout;
- (void)onTapIcon:(id)arg1;
- (void)setMessage:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTouchRemoveEffect;
- (void)onTouchEffect;
- (void)onStateChanged:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

