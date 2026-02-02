//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFlutterInstance, NSString, TingAppNavigationController, TingFlutterViewController, TingPlayerManager, UIViewController;
@protocol ITingApp;

@interface TingFlutterPlayerRouter
{
    TingAppNavigationController *_appContainer;
    MMFlutterInstance *_playerInstance;
    TingFlutterViewController *_playerVC;
    TingPlayerManager *_playTaskController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingPlayerManager *playTaskController; // @synthesize playTaskController=_playTaskController;
@property(retain, nonatomic) TingFlutterViewController *playerVC; // @synthesize playerVC=_playerVC;
@property(retain, nonatomic) MMFlutterInstance *playerInstance; // @synthesize playerInstance=_playerInstance;
@property(retain, nonatomic) TingAppNavigationController *appContainer; // @synthesize appContainer=_appContainer;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (void)pushOpenFinderDiscover:(id)arg1 finderUsername:(id)arg2 sessionBuffer:(id)arg3 navigationController:(id)arg4;
- (id)createFinderProfileChildFlutterVC:(id)arg1 route:(id)arg2 isAuthor:(_Bool)arg3 isFinderProfileHalfScreen:(_Bool)arg4 commentScene:(int)arg5 parentVC:(id)arg6;
- (id)createViewController:(id)arg1 arguments:(id)arg2;
- (void)initPlayTaskController;
- (void)showCommonHalfScreen:(id)arg1 desc:(id)arg2 extraInfo:(id)arg3;
- (void)openTingPageUseNewEngineWithRouteName:(id)arg1 params:(id)arg2;
- (void)onTingUrl:(id)arg1;
- (void)onLaunch:(id)arg1;
- (void)prepareApp:(CDUnknownBlockType)arg1;
- (void)tryAddItemsToListWithBizType:(unsigned long long)arg1 scene:(int)arg2 listenIdList:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tryAddTingItemToList:(id)arg1;
- (void)openProfile:(unsigned long long)arg1 locLineType:(id)arg2;
- (void)setDisplayMode:(int)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)consumeCategoryItem:(id)arg1 launchOptions:(id)arg2 type:(unsigned long long)arg3;
- (id)createNewApp:(id)arg1;
@property(readonly, nonatomic) UIViewController *appVisibleViewController;
@property(readonly, nonatomic) UIViewController<ITingApp> *app;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

