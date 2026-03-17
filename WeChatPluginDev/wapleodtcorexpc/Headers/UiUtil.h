//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UiUtil : NSObject
{
}

+ (double)pageScopeHeightWithWarningFor:(id)arg1;
+ (double)pageScopeWidthWithWarningFor:(id)arg1;
+ (double)pageScopeHeightFor:(id)arg1;
+ (double)pageScopeWidthFor:(id)arg1;
+ (double)subSceneContentWidthForOri:(long long)arg1;
+ (double)sceneContentWidthForView:(id)arg1;
+ (double)mainSceneContentWidth;
+ (double)mainSceneContentWidthForOri:(long long)arg1;
+ (double)sceneWidthForView:(id)arg1;
+ (double)subSceneHeight;
+ (double)subSceneWidth;
+ (double)mainSceneWidth;
+ (double)iPadFullScreenContentWidthMargin;
+ (double)iPadPopoverWidth;
+ (double)iPadFullScreenContentWidth;
+ (long long)overrideInterfaceStyle;
+ (long long)systemInterfaceStyle;
+ (long long)currentInterfaceStyle;
+ (_Bool)isDarkMode;
+ (_Bool)needCustomFixOrientation;
+ (_Bool)isiPadMultiAppSplitViewModeNow;
+ (void)showCameraAlertForSplitViewIfNeed:(id)arg1 currentWidth:(double)arg2;
+ (_Bool)isiPadSplitViewInNewSize:(struct CGSize)arg1;
+ (_Bool)isiPadSplitViewModeNow;
+ (_Bool)isiPadSplitViewMinimizeModeNow;
+ (void)setStatusBarStyle:(long long)arg1 viewController:(id)arg2;
+ (void)setStatusBarStyle:(long long)arg1;
+ (void)setStatusBarFontBlack;
+ (void)setStatusBarFontDefault;
+ (void)setStatusBarFontWhite;
+ (_Bool)hasRoundCorner;
+ (double)bottomInset;
+ (struct UIEdgeInsets)safeAreaInsets;
+ (double)tabBarContentHeight;
+ (double)tabBarHeight;
+ (double)topBarNormalOffset;
+ (double)keyboardHeightByNotification:(id)arg1 inView:(id)arg2;
+ (double)keyboardHeightByNotification:(id)arg1;
+ (void)setTopBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
+ (void)setTopBarHidden:(_Bool)arg1;
+ (_Bool)isTopBarHidden;
+ (long long)getRotatedOrientation;
+ (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2 viewController:(id)arg3;
+ (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
+ (void)setStatusBarHidden:(_Bool)arg1;
+ (_Bool)isIPhoneStatusBarLandscape;
+ (_Bool)isStatusBarLandscape;
+ (long long)currentInterfaceOrientationWithSubScene:(_Bool)arg1;
+ (long long)currentInterfaceOrientationIn:(id)arg1;
+ (long long)currentInterfaceOrientation;
+ (_Bool)isStatusBarHidden;
+ (void)OnSystemStatusBarFrameChange;
+ (id)mainWindow;
+ (double)visibleHeight:(id)arg1;
+ (struct CGRect)windowBoundsOri:(long long)arg1;
+ (struct CGRect)screenBoundsOri:(long long)arg1;
+ (struct CGRect)screenBounds;
+ (struct CGSize)screenSizeOri:(long long)arg1;
+ (struct CGSize)screenSize;
+ (double)mainScreenWidth;
+ (double)deviceScreenWidth:(long long)arg1;
+ (double)screenWidth:(long long)arg1;
+ (double)deviceScreenWidth;
+ (double)mainWindowWidth;
+ (double)screenWidthCurOri;
+ (double)screenHeight:(long long)arg1;
+ (double)screenHeightCurOri;
+ (double)navigationBarHeight:(long long)arg1;
+ (double)navigationBarHeightCurOri;
+ (double)navigationBarHeight;
+ (double)statusBarHeight:(long long)arg1;
+ (double)statusBarHeight;
+ (double)normalStatusBarHeight;

@end

