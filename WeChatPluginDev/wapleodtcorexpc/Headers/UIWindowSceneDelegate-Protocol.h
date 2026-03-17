//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UISceneDelegate-Protocol.h"

@class CKShareMetadata, UIApplicationShortcutItem, UITraitCollection, UIWindow, UIWindowScene;
@protocol UICoordinateSpace;

@protocol UIWindowSceneDelegate <UISceneDelegate>

@optional
@property(retain, nonatomic) UIWindow *window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N

- (void)windowScene:(UIWindowScene *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
- (void)windowScene:(UIWindowScene *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)windowScene:(UIWindowScene *)arg1 didUpdateCoordinateSpace:(id <UICoordinateSpace>)arg2 interfaceOrientation:(long long)arg3 traitCollection:(UITraitCollection *)arg4;
@end

