//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WSWebViewPlugin_NavBarShadow
{
    _Bool _enableAddShadow;
    UIView *_navShadowView;
    double _animateDuration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableAddShadow; // @synthesize enableAddShadow=_enableAddShadow;
@property(nonatomic) double animateDuration; // @synthesize animateDuration=_animateDuration;
@property(retain, nonatomic) UIView *navShadowView; // @synthesize navShadowView=_navShadowView;
- (void)hideNavBarShadow:(id)arg1;
- (void)manuallyHideNavShadowView;
- (double)shadowViewHeight;
- (void)layoutNavShadowView;
- (void)showNavBarShadow:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

@end

