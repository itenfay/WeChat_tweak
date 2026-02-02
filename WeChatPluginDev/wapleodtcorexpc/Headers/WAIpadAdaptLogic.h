//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAIpadAdaptLogic
{
}

+ (double)GetKeyboardHeightOnIPadUnresizableAppWithSystemHeight:(double)arg1 webVC:(id)arg2;
+ (struct CGSize)GetWebviewControllerSizeAfterAdapting:(id)arg1;
+ (double)GetMinScaleValueForUnresizableWeAppOnIpadWithWebviewController:(id)arg1;
+ (double)GetScaleValueForUnresizableWeAppOnIpadWithWebviewController:(id)arg1;
+ (_Bool)isWebviewControllerPageOrientationNotSameAsCurOri:(id)arg1;
+ (_Bool)needIpadCustomTransition:(_Bool)arg1;
+ (id)IsPresentedByAnotherWeApp:(id)arg1;
+ (_Bool)IsPresentedByMainViewControllerInIpad:(id)arg1;
+ (_Bool)currentOrLastNavigationControllerHasPrevWeAppVC:(id)arg1;
+ (_Bool)checkIfNeedIpadSpecialPresentLogic:(id)arg1 PresentingVC:(id *)arg2;

@end

