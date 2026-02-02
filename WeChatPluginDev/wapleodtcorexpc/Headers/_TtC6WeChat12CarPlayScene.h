//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat12CarPlayScene
{
    MISSING_TYPE *interfaceController;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSceneName:(id)arg1;
- (void)contentStyleDidChange:(long long)arg1;
- (void)templateApplicationScene:(id)arg1 didSelectManeuver:(id)arg2;
- (void)templateApplicationScene:(id)arg1 didSelectNavigationAlert:(id)arg2;
- (void)templateApplicationScene:(id)arg1 didDisconnectInterfaceController:(id)arg2;
- (void)templateApplicationScene:(id)arg1 didConnectInterfaceController:(id)arg2;
- (void)sceneDidBecomeActive:(id)arg1;
- (_Bool)isCarPlayConnected;

@end

