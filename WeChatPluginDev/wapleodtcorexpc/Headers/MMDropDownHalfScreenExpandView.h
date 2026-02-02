//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UIButton, UIView;
@protocol MMDropDownHalfScreenViewDelegate;

@interface MMDropDownHalfScreenExpandView
{
    double m_maxHalfScreenHeight;
    _Bool _isHideSetupGradientEffect;
    _Bool _isShowingExpandView;
    double _halfScreenHeight;
    UIView *_detailView;
    double _marginWidth;
    double _datailViewCornerRadius;
    id <MMDropDownHalfScreenViewDelegate> _expandViewDelegate;
    double _navigationBarHeight;
    UIView *_blurBgView;
    UIView *_expandViewContainerView;
    UIView *_expandBottomView;
    MMUIButton *_closeButton;
    UIButton *_bgMaskView;
    UIView *_detailViewMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *detailViewMaskView; // @synthesize detailViewMaskView=_detailViewMaskView;
@property(retain, nonatomic) UIButton *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *expandBottomView; // @synthesize expandBottomView=_expandBottomView;
@property(retain, nonatomic) UIView *expandViewContainerView; // @synthesize expandViewContainerView=_expandViewContainerView;
@property(nonatomic) _Bool isShowingExpandView; // @synthesize isShowingExpandView=_isShowingExpandView;
@property(retain, nonatomic) UIView *blurBgView; // @synthesize blurBgView=_blurBgView;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) __weak id <MMDropDownHalfScreenViewDelegate> expandViewDelegate; // @synthesize expandViewDelegate=_expandViewDelegate;
@property(nonatomic) double datailViewCornerRadius; // @synthesize datailViewCornerRadius=_datailViewCornerRadius;
@property(nonatomic) double marginWidth; // @synthesize marginWidth=_marginWidth;
@property(nonatomic) _Bool isHideSetupGradientEffect; // @synthesize isHideSetupGradientEffect=_isHideSetupGradientEffect;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
- (void)expandNavBarHeight:(double)arg1 animated:(_Bool)arg2 showExpandView:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)expandNavBarHeight:(double)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)onMaskBgClick;
- (void)onCloseExpandButtonClick;
- (void)hideExpandViewWithAnimated:(_Bool)arg1;
- (void)showExpandViewWithAnimatedCore:(_Bool)arg1;
- (void)showExpandViewWithAnimated:(_Bool)arg1;
- (_Bool)checkUpScrollViewGradientLayer;
- (void)hiddenUpScrollViewGradientLayer;
- (void)setUpScrollViewGradientLayer;
- (double)getDetailViewAnimateInitTop;
- (double)getMixedViewHeight;
- (double)getHalfScreenDetailViewMarginButtom;
- (double)getHalfScreenDetailViewMarginTop;
- (double)currentExpandNavBarHeight;
@property(nonatomic) double halfScreenHeight; // @synthesize halfScreenHeight=_halfScreenHeight;
- (double)getMaxHalfScreenHeight;
- (void)setMaxHalfScreenHeight:(double)arg1;
- (void)hideHalfScreenExpandViewWithAnimated:(_Bool)arg1;
- (void)showHalfScreenExpandViewWithAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initDropDownHalfScreenExpandView;
- (void)initDropDownHalfScreenExpandViewData;
- (id)initWithFrame:(struct CGRect)arg1 navigationBarHeight:(double)arg2;

@end

