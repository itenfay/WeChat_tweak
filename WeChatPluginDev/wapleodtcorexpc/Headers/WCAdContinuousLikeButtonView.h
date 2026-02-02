//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, WCAdContinuousLikeButtonInfo, WCAdSocialLikeLogic, WCAdURLImageView, WCDataItem;

@interface WCAdContinuousLikeButtonView
{
    _Bool _forTransformAnimation;
    WCAdContinuousLikeButtonInfo *_buttonInfo;
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
    double _maxViewWidth;
    double _viewHeight;
    MMUIView *_bgView;
    MMUIView *_bgViewShadow;
    MMUILabel *_titleView;
    WCAdURLImageView *_iconView;
    MMUIView *_adMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *adMaskView; // @synthesize adMaskView=_adMaskView;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIView *bgViewShadow; // @synthesize bgViewShadow=_bgViewShadow;
@property(retain, nonatomic) MMUIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool forTransformAnimation; // @synthesize forTransformAnimation=_forTransformAnimation;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) double maxViewWidth; // @synthesize maxViewWidth=_maxViewWidth;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdContinuousLikeButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
- (id)fetchContinuousLikeReportInfo;
- (void)resetButtonState;
- (void)onButtonTouchUp:(id)arg1;
- (void)onButtonTouchDown:(id)arg1;
- (void)onButtonClick:(id)arg1;
- (void)addButtonEvent;
@property(readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
- (void)stopBreathingAnimation;
- (void)startBreathingAnimation;
- (void)initView;
- (void)dealloc;
- (id)initWithContinuousLikeButtonInfo:(id)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 maxViewWidth:(double)arg4 viewHeight:(double)arg5 forTransformAnimation:(_Bool)arg6;

@end

