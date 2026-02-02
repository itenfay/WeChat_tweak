//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFlutterInstance, MMFlutterViewController, NSArray, NSMutableArray, NSString, TingAppNavigationController, TingPlayerManager, UIViewController;
@protocol ITingApp;

@interface TingFlutterRouter
{
    _Bool _hasWarmUp;
    _Bool _doingWarmUp;
    TingAppNavigationController *_appContainer;
    MMFlutterViewController *_appViewController;
    MMFlutterInstance *_home;
    TingPlayerManager *_playTaskController;
    NSArray *_tingPlugins;
    NSMutableArray *_completeBlockArray;
}

+ (id)plugins;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completeBlockArray; // @synthesize completeBlockArray=_completeBlockArray;
@property _Bool doingWarmUp; // @synthesize doingWarmUp=_doingWarmUp;
@property _Bool hasWarmUp; // @synthesize hasWarmUp=_hasWarmUp;
@property(retain, nonatomic) NSArray *tingPlugins; // @synthesize tingPlugins=_tingPlugins;
@property(retain, nonatomic) TingPlayerManager *playTaskController; // @synthesize playTaskController=_playTaskController;
@property(retain, nonatomic) MMFlutterInstance *home; // @synthesize home=_home;
@property(retain, nonatomic) MMFlutterViewController *appViewController; // @synthesize appViewController=_appViewController;
@property(retain, nonatomic) TingAppNavigationController *appContainer; // @synthesize appContainer=_appContainer;
- (void)showCommonHalfScreen:(id)arg1 desc:(id)arg2 extraInfo:(id)arg3;
- (void)openTingPageUseNewEngineWithRouteName:(id)arg1 params:(id)arg2;
- (void)onLaunchV2:(id)arg1;
- (void)onTingUrl:(id)arg1;
- (void)openTingWithLaunchType:(unsigned long long)arg1 host:(id)arg2 path:(id)arg3 query:(id)arg4;
- (void)onLaunchV1:(id)arg1;
- (void)onLaunch:(id)arg1;
- (void)prepareApp:(CDUnknownBlockType)arg1;
- (void)tryAddItemsToListWithBizType:(unsigned long long)arg1 scene:(int)arg2 listenIdList:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tryAddTingItemToList:(id)arg1;
- (long long)warmUpMode;
- (void)reportWarmUp:(double)arg1 timeout:(_Bool)arg2;
- (void)flushCompleteBlock;
- (void)warmUpEnd:(_Bool)arg1 startTime:(double)arg2;
- (double)warmUpStart:(CDUnknownBlockType)arg1;
- (void)warmUpEngine:(CDUnknownBlockType)arg1;
- (void)warmUpEngineNew:(CDUnknownBlockType)arg1;
- (void)pushOpenFinderDiscover:(id)arg1 finderUsername:(id)arg2 sessionBuffer:(id)arg3 navigationController:(id)arg4;
- (id)createFinderProfileChildFlutterVC:(id)arg1 route:(id)arg2 isAuthor:(_Bool)arg3 isFinderProfileHalfScreen:(_Bool)arg4 commentScene:(int)arg5 parentVC:(id)arg6;
- (id)createNewApp:(id)arg1;
@property(readonly, nonatomic) UIViewController *appVisibleViewController;
@property(readonly, nonatomic) UIViewController<ITingApp> *app;
- (id)buildArgumentWithDefaultParamsAndNewParams:(id)arg1;
- (void)flutterRouteWithString:(id)arg1 params:(id)arg2;
- (void)initPlayTaskController;
- (void)_initEngineGroup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

