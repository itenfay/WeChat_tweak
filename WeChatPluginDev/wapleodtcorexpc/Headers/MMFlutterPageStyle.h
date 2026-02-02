//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;
@protocol MMFlutterViewControllerAnimatedTransitioning;

@interface MMFlutterPageStyle : NSObject
{
    _Bool _needSnapshot;
    _Bool _needWaitActionBarSnapshot;
    _Bool _needNavPresented;
    _Bool _disableAnimation;
    _Bool _disablePlatformNav;
    _Bool _disableInteractivePop;
    _Bool _popOrDismissWithAnimation;
    _Bool _autoReleaseFlutterView;
    Class _pageViewControllerClass;
    unsigned long long _pageType;
    UIColor *_backgroundColor;
    UIColor *_beforeRenderBackgroundColor;
    long long _modalPresentationStyle;
    NSObject<MMFlutterViewControllerAnimatedTransitioning> *_transitionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<MMFlutterViewControllerAnimatedTransitioning> *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(retain, nonatomic) UIColor *beforeRenderBackgroundColor; // @synthesize beforeRenderBackgroundColor=_beforeRenderBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool autoReleaseFlutterView; // @synthesize autoReleaseFlutterView=_autoReleaseFlutterView;
@property(nonatomic) _Bool popOrDismissWithAnimation; // @synthesize popOrDismissWithAnimation=_popOrDismissWithAnimation;
@property(nonatomic) _Bool disableInteractivePop; // @synthesize disableInteractivePop=_disableInteractivePop;
@property(nonatomic) _Bool disablePlatformNav; // @synthesize disablePlatformNav=_disablePlatformNav;
@property(nonatomic) _Bool disableAnimation; // @synthesize disableAnimation=_disableAnimation;
@property(nonatomic) _Bool needNavPresented; // @synthesize needNavPresented=_needNavPresented;
@property(nonatomic) _Bool needWaitActionBarSnapshot; // @synthesize needWaitActionBarSnapshot=_needWaitActionBarSnapshot;
@property(nonatomic) _Bool needSnapshot; // @synthesize needSnapshot=_needSnapshot;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) Class pageViewControllerClass; // @synthesize pageViewControllerClass=_pageViewControllerClass;
- (id)initWithPageType:(unsigned long long)arg1;
- (id)init;

@end

