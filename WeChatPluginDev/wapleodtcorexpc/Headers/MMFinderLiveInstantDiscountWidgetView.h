//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMCountDownLabel, MMFinderLiveInstantDiscountWidgetResource, MoneyOffTagInfo, NSObject, PAGView, UILabel;
@protocol MMFinderLiveInstantDiscountWidgetDelegate;

@interface MMFinderLiveInstantDiscountWidgetView : UIView
{
    _Bool _isAnchorOrAssistant;
    _Bool _isBigStyle;
    _Bool _shouldShowText;
    _Bool _isStaticTextStyle;
    MMFinderLiveInstantDiscountWidgetResource *_resource;
    id <MMFinderLiveInstantDiscountWidgetDelegate> _delegate;
    NSObject *_isPlayingTag;
    MoneyOffTagInfo *_currentInfo;
    MoneyOffTagInfo *_newestInfo;
    UIView *_backgroundView;
    UIView *_pressShadowView;
    UILabel *_whiteNormalLabel;
    UILabel *_colorfulNormalLabel;
    MMCountDownLabel *_whiteCountDownLabel;
    MMCountDownLabel *_colorfulCountDownLabel;
    UIView *_labelContainerView;
    PAGView *_pagView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStaticTextStyle; // @synthesize isStaticTextStyle=_isStaticTextStyle;
@property(nonatomic) _Bool shouldShowText; // @synthesize shouldShowText=_shouldShowText;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(retain, nonatomic) MMCountDownLabel *colorfulCountDownLabel; // @synthesize colorfulCountDownLabel=_colorfulCountDownLabel;
@property(retain, nonatomic) MMCountDownLabel *whiteCountDownLabel; // @synthesize whiteCountDownLabel=_whiteCountDownLabel;
@property(retain, nonatomic) UILabel *colorfulNormalLabel; // @synthesize colorfulNormalLabel=_colorfulNormalLabel;
@property(retain, nonatomic) UILabel *whiteNormalLabel; // @synthesize whiteNormalLabel=_whiteNormalLabel;
@property(retain, nonatomic) UIView *pressShadowView; // @synthesize pressShadowView=_pressShadowView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MoneyOffTagInfo *newestInfo; // @synthesize newestInfo=_newestInfo;
@property(retain, nonatomic) MoneyOffTagInfo *currentInfo; // @synthesize currentInfo=_currentInfo;
@property(retain, nonatomic) NSObject *isPlayingTag; // @synthesize isPlayingTag=_isPlayingTag;
@property(nonatomic) _Bool isBigStyle; // @synthesize isBigStyle=_isBigStyle;
@property(nonatomic) _Bool isAnchorOrAssistant; // @synthesize isAnchorOrAssistant=_isAnchorOrAssistant;
@property(nonatomic) __weak id <MMFinderLiveInstantDiscountWidgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveInstantDiscountWidgetResource *resource; // @synthesize resource=_resource;
- (void)updateWithInfo:(id)arg1;
- (void)initContents;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double leadForEnterAnimation;
@property(readonly, nonatomic) struct CGSize enterSize;
@property(readonly, nonatomic) struct CGSize normalSize;
- (void)checkUpdate;
- (void)blockWithRestAnimationDuration:(double)arg1;
- (void)toFail;
- (void)toSuccess;
- (void)playAddAnimation:(unsigned long long)arg1;
- (void)startCountDown;
- (void)onTapAction;
- (void)toNormalState;
- (void)playPAG:(id)arg1;
- (void)enter;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)updateLabelsAlpha;
- (void)setTextUsed;
- (void)setTextDone;
- (void)setTextNormal;
- (id)initWithResource:(id)arg1 info:(id)arg2;

@end

