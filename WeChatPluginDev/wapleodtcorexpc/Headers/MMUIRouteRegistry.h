//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMUIRouteRegistry : NSObject
{
}

+ (_Bool)canRoute:(id)arg1;
+ (_Bool)routeURL:(id)arg1 curViewController:(id)arg2 withParameters:(id)arg3;
+ (_Bool)routeURL:(id)arg1 curViewController:(id)arg2;
+ (_Bool)routeURL:(id)arg1;
+ (void)tryInitAllUIRoutes;
+ (void)initAllUIRoutes;
+ (void)openPlugin:(long long)arg1 onCurViewController:(id)arg2 withRouterParameters:(id)arg3;
+ (void)initContactRoutes;
+ (void)initDeepLinkRoutes;
+ (void)initFinderRoutes;
+ (void)initMeTabRoutes;
+ (void)moveToFindFriendTab;
+ (id)getFindFriendEntryViewController;
+ (void)openMessageView:(id)arg1 curViewController:(id)arg2;
+ (void)openWebview:(id)arg1 withCurViewController:(id)arg2 webviewHandler:(CDUnknownBlockType)arg3;
+ (void)openWebview:(id)arg1 withCurViewController:(id)arg2;
+ (id)makeUIRouteWithDeepLink:(id)arg1;
+ (id)makeUIRoute:(id)arg1 withVCClass:(Class)arg2;
+ (id)makeUIRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)makeUIRoute:(id)arg1 handler:(CDUnknownBlockType)arg2 isAddPagePrefix:(_Bool)arg3;
+ (void)initSettingPageRoutes;
+ (void)initWCPayRoutes;

@end

