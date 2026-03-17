//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, UIImage, UIView, UIViewController, WAContact, WAH5ViewControllerParameter, WAProfileViewControllerParameter, WAUserGuideParam, WAWebViewController, WAWebViewControllerMenuItemModel;
@protocol IWCBaseWebViewControllerProtocol;

@protocol IWABusinessService <NSObject>
+ (_Bool)isLogin;
+ (UIView *)getMMHeadImageViewWithUsername:(NSString *)arg1 imageSize:(struct CGSize)arg2;
+ (UIViewController *)genAppAuthSettingWithWeAppContact:(WAContact *)arg1;
+ (UIViewController *)genProfileWithParameter:(WAProfileViewControllerParameter *)arg1;
+ (UIViewController<IWCBaseWebViewControllerProtocol> *)genWebViewController:(WAH5ViewControllerParameter *)arg1;
+ (void)onMPShortLinkGlobalHightLightSwitchDidChanged;
+ (void)onWeAppDidPresentWithPresentingViewController:(UIViewController *)arg1;
+ (void)onWeAppNavigateToMiniProgramCancelledFromAppId:(NSString *)arg1 toAppId:(NSString *)arg2;
+ (void)onWeAppNavigateToMiniProgramFailFromAppId:(NSString *)arg1 toAppId:(NSString *)arg2;
+ (void)onWeAppNavigateToMiniProgramSuccessFromAppId:(NSString *)arg1 toAppId:(NSString *)arg2;
+ (void)onWeAppNavigateToMiniProgramFromAppId:(NSString *)arg1 toAppId:(NSString *)arg2 pagePath:(NSString *)arg3 fromScene:(unsigned long long)arg4 fromSceneNote:(NSString *)arg5 adInfo:(NSString *)arg6;
+ (void)showUserGuide;

@optional
+ (void)showUserGuideDialog:(WAUserGuideParam *)arg1;
+ (void)updateAppServiceConfigRes;
+ (void)didUserSelectCopyMPShortLinkSuccess:(NSString *)arg1 inWebViewController:(WAWebViewController *)arg2 processCompletion:(void (^)(NSString *))arg3;
+ (void)clearExposeSnapShot:(NSString *)arg1;
+ (NSString *)saveExposeSnapShot:(UIImage *)arg1;
+ (void)didUserSelectWeAppCustomMenuItem:(WAWebViewControllerMenuItemModel *)arg1 appID:(NSString *)arg2;
+ (NSMutableArray *)customWeAppMenuItemsArrayWith:(NSMutableArray *)arg1 appid:(NSString *)arg2;
+ (NSString *)openSDKAppID;
+ (NSString *)environmentForSystemInfo;
+ (_Bool)forbidShowEduTip;
@end

