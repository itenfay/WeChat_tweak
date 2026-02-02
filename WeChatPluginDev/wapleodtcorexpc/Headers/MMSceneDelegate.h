//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIResponder.h>

@class NSString, UISceneSession, UIWindow, UIWindowScene;

@interface MMSceneDelegate : UIResponder
{
    UIWindow *_window;
    NSString *_sceneName;
    UISceneSession *_sceneSession;
    UIWindowScene *_windowScene;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(nonatomic) __weak UISceneSession *sceneSession; // @synthesize sceneSession=_sceneSession;
@property(retain, nonatomic) NSString *sceneName; // @synthesize sceneName=_sceneName;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)updateSceneBizViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isMainScene;
- (void)windowScene:(id)arg1 didUpdateCoordinateSpace:(id)arg2 interfaceOrientation:(long long)arg3 traitCollection:(id)arg4;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (id)initWithSceneName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

