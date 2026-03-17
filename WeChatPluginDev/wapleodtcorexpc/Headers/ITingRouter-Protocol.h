//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFlutterViewController, MMListenDiscoverLine, NSArray, NSData, NSMutableDictionary, NSString, TingAppNavigationController, TingItem, TingLaunchOptions, UINavigationController, UIViewController;
@protocol ITingApp;

@protocol ITingRouter <NSObject>
@property(retain, nonatomic) TingAppNavigationController *appContainer;
@property(readonly, nonatomic) UIViewController *appVisibleViewController;
@property(readonly, nonatomic) UIViewController<ITingApp> *app;
- (void)openNewPage:(TingLaunchOptions *)arg1 completion:(void (^)(void))arg2;
- (void)openTingPageUseNewEngineWithRouteName:(NSString *)arg1 params:(NSMutableDictionary *)arg2;
- (void)showCommonHalfScreen:(NSString *)arg1 desc:(NSString *)arg2 extraInfo:(NSMutableDictionary *)arg3;
- (void)pushOpenFinderDiscover:(MMListenDiscoverLine *)arg1 finderUsername:(NSString *)arg2 sessionBuffer:(NSData *)arg3 navigationController:(UINavigationController *)arg4;
- (MMFlutterViewController *)createFinderProfileChildFlutterVC:(NSString *)arg1 route:(NSString *)arg2 isAuthor:(_Bool)arg3 isFinderProfileHalfScreen:(_Bool)arg4 commentScene:(int)arg5 parentVC:(UIViewController *)arg6;
- (void)tryAddItemsToListWithBizType:(unsigned long long)arg1 scene:(int)arg2 listenIdList:(NSArray *)arg3 completion:(void (^)(MMListenCategoryItem *, _Bool))arg4;
- (void)tryAddTingItemToList:(TingItem *)arg1;
- (void)onTingUrl:(NSString *)arg1;
- (void)onLaunch:(TingLaunchOptions *)arg1;
- (void)prepareApp:(void (^)(void))arg1;
- (UIViewController *)createNewApp:(TingLaunchOptions *)arg1;
@end

