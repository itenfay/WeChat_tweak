//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UISceneDelegate-Protocol.h"

@class CPInterfaceController, CPManeuver, CPNavigationAlert, CPTemplateApplicationScene, CPWindow;

@protocol CPTemplateApplicationSceneDelegate <UISceneDelegate>

@optional
- (void)contentStyleDidChange:(long long)arg1;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didSelectManeuver:(CPManeuver *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didSelectNavigationAlert:(CPNavigationAlert *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didDisconnectInterfaceController:(CPInterfaceController *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didDisconnectInterfaceController:(CPInterfaceController *)arg2 fromWindow:(CPWindow *)arg3;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didConnectInterfaceController:(CPInterfaceController *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didConnectInterfaceController:(CPInterfaceController *)arg2 toWindow:(CPWindow *)arg3;
@end

