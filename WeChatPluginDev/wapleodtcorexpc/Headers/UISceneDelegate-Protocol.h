//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSSet, NSString, NSUserActivity, UIScene, UISceneConnectionOptions, UISceneSession;

@protocol UISceneDelegate <NSObject>

@optional
- (void)scene:(UIScene *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)scene:(UIScene *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (void)scene:(UIScene *)arg1 continueUserActivity:(NSUserActivity *)arg2;
- (void)scene:(UIScene *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (void)scene:(UIScene *)arg1 restoreInteractionStateWithUserActivity:(NSUserActivity *)arg2;
- (NSUserActivity *)stateRestorationActivityForScene:(UIScene *)arg1;
- (void)scene:(UIScene *)arg1 openURLContexts:(NSSet *)arg2;
- (void)sceneDidEnterBackground:(UIScene *)arg1;
- (void)sceneWillEnterForeground:(UIScene *)arg1;
- (void)sceneWillResignActive:(UIScene *)arg1;
- (void)sceneDidBecomeActive:(UIScene *)arg1;
- (void)sceneDidDisconnect:(UIScene *)arg1;
- (void)scene:(UIScene *)arg1 willConnectToSession:(UISceneSession *)arg2 options:(UISceneConnectionOptions *)arg3;
@end

