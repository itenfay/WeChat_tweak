//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMainSceneDelegate;

@interface MMSubSceneDelegate
{
    MMMainSceneDelegate *_mainSceneDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMainSceneDelegate *mainSceneDelegate; // @synthesize mainSceneDelegate=_mainSceneDelegate;
- (void)windowScene:(id)arg1 didUpdateCoordinateSpace:(id)arg2 interfaceOrientation:(long long)arg3 traitCollection:(id)arg4;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)updateSceneBizViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

