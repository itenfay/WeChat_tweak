//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString, UIColor, UIImageView, UIScrollView, UIView;
@protocol MMNavBarInteractiveDelegate;

@interface MMNavBarInteractiveConfig
{
    unsigned long long _navBarInteractiveStyle;
    double _navBarFadeInStartOffset;
    double _navBarFadeInEndOffset;
    UIView *_customNavBarView;
    UIView *_gradientView;
    double _navBarShrinkRemainHeight;
    UIScrollView *_scrollViewForNavBarInteraction;
    UIColor *_fadeInColor;
    id <MMNavBarInteractiveDelegate> _m_delegate;
    NSString *_rightBarButtonImage;
    NSString *_rightBarButtonImage2;
    double _lastContentOffsetY;
    double _lastContentInsetTop;
    long long _scrollNavBarState;
    UIImageView *_shadowView;
    NSNumber *_foregroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) long long scrollNavBarState; // @synthesize scrollNavBarState=_scrollNavBarState;
@property(nonatomic) double lastContentInsetTop; // @synthesize lastContentInsetTop=_lastContentInsetTop;
@property(nonatomic) double lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(retain, nonatomic) NSString *rightBarButtonImage2; // @synthesize rightBarButtonImage2=_rightBarButtonImage2;
@property(retain, nonatomic) NSString *rightBarButtonImage; // @synthesize rightBarButtonImage=_rightBarButtonImage;
@property(nonatomic) __weak id <MMNavBarInteractiveDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIColor *fadeInColor; // @synthesize fadeInColor=_fadeInColor;
@property(retain, nonatomic) UIScrollView *scrollViewForNavBarInteraction; // @synthesize scrollViewForNavBarInteraction=_scrollViewForNavBarInteraction;
@property(nonatomic) double navBarShrinkRemainHeight; // @synthesize navBarShrinkRemainHeight=_navBarShrinkRemainHeight;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *customNavBarView; // @synthesize customNavBarView=_customNavBarView;
@property(nonatomic) double navBarFadeInEndOffset; // @synthesize navBarFadeInEndOffset=_navBarFadeInEndOffset;
@property(nonatomic) double navBarFadeInStartOffset; // @synthesize navBarFadeInStartOffset=_navBarFadeInStartOffset;
@property(nonatomic) unsigned long long navBarInteractiveStyle; // @synthesize navBarInteractiveStyle=_navBarInteractiveStyle;
- (id)initBGTransparetStypeWithScrollView:(id)arg1;
- (id)initTransitionStyleWithScrollView:(id)arg1;
- (id)initFadeStyleWithScrollView:(id)arg1 fadeInColor:(id)arg2 fadeInStartOffset:(double)arg3 fadeInEndOffset:(double)arg4;
- (id)initFadeStyleWithScrollView:(id)arg1;

@end

