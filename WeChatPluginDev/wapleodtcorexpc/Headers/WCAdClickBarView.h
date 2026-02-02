//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, NSString, UIImageView, UILabel, WCAdIconView;

@interface WCAdClickBarView
{
    _Bool _stopArrorAnimation;
    NSString *_title;
    long long _iconType;
    WCAdIconView *_iconView;
    UILabel *_titleView;
    UIImageView *_arrowView;
    CALayer *_animationLayer;
    double _selfOriginX;
    double _iconViewOriginX;
    double _titleViewOriginX;
}

- (void).cxx_destruct;
@property(nonatomic) double titleViewOriginX; // @synthesize titleViewOriginX=_titleViewOriginX;
@property(nonatomic) double iconViewOriginX; // @synthesize iconViewOriginX=_iconViewOriginX;
@property(nonatomic) double selfOriginX; // @synthesize selfOriginX=_selfOriginX;
@property(nonatomic) _Bool stopArrorAnimation; // @synthesize stopArrorAnimation=_stopArrorAnimation;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCAdIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (void)resetAnimationLayerPosition;
- (void)resetArrowPosition;
- (void)hideViewsAnimation;
- (void)hideClickBar;
- (void)showClickBar;
- (void)doArrowHideAnimation;
- (void)doArrowShowAnimation;
- (void)setViewProperty:(id)arg1 alpha:(double)arg2 left:(double)arg3 hidden:(_Bool)arg4;
- (void)showViewsAnimation;
- (void)initViews;
- (id)createAnimationLayer;
- (void)layerOutAnimation;
- (void)layerInAnimation;
- (void)initAnimationLayer;
- (id)initWithFrame:(struct CGRect)arg1 andIconType:(long long)arg2 title:(id)arg3;

@end

