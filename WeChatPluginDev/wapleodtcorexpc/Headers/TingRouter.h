//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingRouter : NSObject
{
}

+ (void)tryAddItemsToListWithBizType:(unsigned long long)arg1 scene:(int)arg2 listenIdList:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)tryAddItemsToListWithBizType:(unsigned long long)arg1 scene:(int)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)tryAddTingItemToList:(id)arg1;
+ (void)showCommonHalfScreen:(id)arg1 desc:(id)arg2 extraInfo:(id)arg3;
+ (void)openTingPageUseNewEngineWithRouteName:(id)arg1 params:(id)arg2;
+ (void)openProfile:(int)arg1 bizType:(unsigned long long)arg2 fromFinderFeedId:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)openProfile:(int)arg1 bizType:(unsigned long long)arg2 lineType:(id)arg3 fromFinderFeedId:(id)arg4 fromViewController:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)openProfile:(int)arg1 bizType:(unsigned long long)arg2 lineType:(id)arg3 fromFinderFeedId:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)openProfile:(int)arg1 bizType:(unsigned long long)arg2 lineType:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)openProfile:(int)arg1 bizType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)openCatgeoryId:(id)arg1 launchOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)openCatgeory:(id)arg1 listContext:(id)arg2 launchOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)openCatgeory:(id)arg1 launchOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)openCatgeory:(id)arg1 scene:(int)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)_obliterateWithModalProfileIfNeed:(CDUnknownBlockType)arg1;
+ (id)modalProfileViewControllerInHierarchy;
+ (void)pushOpenFinderDiscover:(id)arg1 finderUsername:(id)arg2 sessionBuffer:(id)arg3 navigationController:(id)arg4;
+ (id)createFinderProfileChildFlutterVC:(id)arg1 tabType:(unsigned long long)arg2 isAuthor:(_Bool)arg3 isFinderProfileHalfScreen:(_Bool)arg4 commentScene:(int)arg5 parentVC:(id)arg6;
+ (void)_presentApp:(unsigned long long)arg1 parent:(id)arg2 scene:(int)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_initUserConfig;
+ (void)_preOpenTingApp:(unsigned long long)arg1 launchOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_openTingApp:(unsigned long long)arg1 launchOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_prepareLaunchOptions:(id)arg1;
+ (void)openTingPlayerWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)openTingPlayer:(int)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)openTingAppWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)openTingApp:(int)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)isModalProfileShowing;
+ (_Bool)isAppShowing;
+ (_Bool)isAppInHierarchy;
+ (_Bool)isAppAlive;
+ (id)appEscapeToNewContainer;
+ (unsigned long long)checkAppOpenStrategy;
+ (_Bool)createAppIfNeeded:(id)arg1;
+ (id)router;
+ (id)brandContactByUserName:(id)arg1;
+ (void)openBrandProfileWithUsername:(id)arg1;
+ (void)sendHandOffOpenCommandWithTingItem:(id)arg1;
+ (void)openByOtherAppWithFilePath:(id)arg1 fileName:(id)arg2 parent:(id)arg3;
+ (void)openFinderProfile:(id)arg1 parent:(id)arg2;
+ (void)openFinderProfileWithUsername:(id)arg1 parent:(id)arg2 selectTab:(int)arg3;
+ (void)openFinderProfileWithUsername:(id)arg1 parent:(id)arg2;
+ (void)openFinderFeed:(id)arg1 nonceId:(id)arg2 params:(id)arg3 parent:(id)arg4;
+ (void)openUnsupportedWebPage:(int)arg1 listenItem:(id)arg2 categoryItem:(id)arg3 parent:(id)arg4;
+ (id)openUrl:(id)arg1 scene:(int)arg2 parent:(id)arg3;
+ (void)openWebPage:(id)arg1 scene:(int)arg2 parent:(id)arg3;
+ (void)openAppStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)openAppWithScheme:(id)arg1 downloadURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)openAppWithScheme:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)open3rdMusicApp:(id)arg1 scene:(int)arg2 fromSource:(id)arg3;
+ (void)openSourcePage:(id)arg1 scene:(int)arg2 parent:(id)arg3;
+ (void)openAuthorPage:(id)arg1 scene:(int)arg2 parent:(id)arg3;
+ (void)openTingUrl:(id)arg1 extraParams:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

