//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterActionBarCallback, NSString, UIImage, UIViewController;

@interface FlutterActionBarHelper : NSObject
{
    _Bool _isShowingNavigationBar;
    _Bool _noFlutter;
    _Bool _navBarShouldHide;
    _Bool _onlyFlutter;
    UIViewController *_viewController;
    double _navigationBarMargin;
    double _statusBarHeight;
    NSString *_engineId;
    FlutterActionBarCallback *_actionBarCallback;
    UIImage *_leftImage;
    UIImage *_centerImage;
    UIImage *_rightImage;
}

+ (id)imageWithColor:(id)arg1 andBounds:(struct CGRect)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool onlyFlutter; // @synthesize onlyFlutter=_onlyFlutter;
@property(retain, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) UIImage *centerImage; // @synthesize centerImage=_centerImage;
@property(retain, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;
@property(nonatomic) _Bool navBarShouldHide; // @synthesize navBarShouldHide=_navBarShouldHide;
@property(retain, nonatomic) FlutterActionBarCallback *actionBarCallback; // @synthesize actionBarCallback=_actionBarCallback;
@property(retain, nonatomic) NSString *engineId; // @synthesize engineId=_engineId;
@property(nonatomic) _Bool noFlutter; // @synthesize noFlutter=_noFlutter;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) double navigationBarMargin; // @synthesize navigationBarMargin=_navigationBarMargin;
@property(nonatomic) _Bool isShowingNavigationBar; // @synthesize isShowingNavigationBar=_isShowingNavigationBar;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)showNav;
- (void)hideNav;
- (void)applicationBecameActive;
- (void)touchEnded;
- (void)touchBegan;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)showPlatformNavigationBar;
- (void)showFlutterActionBar;
- (void)setupNavBar;
- (void)setupDefault;
- (void)attachToEngine:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 engineId:(id)arg2;

@end

