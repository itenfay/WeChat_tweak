//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, UIColor, UINavigationController, UIView, WAAppTansitionController, WAAppTaskExtInfo, WAAppTaskLoader, WACacheVersionChecker, WAContact, WALoadingViewController, WAPackageConfig, WAPermissionHandler, WAWebViewController;
@protocol IWAPrivacyConfirmService, WAAppTaskLoaderContextDelegate, WAMinimizeDelegate;

@interface WAAppTaskLoaderContext : NSObject
{
    _Bool _isGameApp;
    _Bool _isPopParent;
    _Bool _isPopAllParent;
    _Bool _bReloadFirstPage;
    _Bool _bNeedShowReloadLoading;
    _Bool _isUpdateAndForceReloadTask;
    _Bool _infoDataPrecheckTriggered;
    _Bool _infoDataPreChecked;
    _Bool _loadingPresentCompleted;
    _Bool _isNeedRelaunchToLatestVersion;
    _Bool _isNeedRelaunchToMigrateTargetWeApp;
    _Bool _isSinglePageMode;
    _Bool _isGameFunctionalPage;
    _Bool _isSilentOpen;
    _Bool _useSimulatedNativeLoadingView;
    _Bool _simulatedNativeSheetModeShouldHideLeftReturnButton;
    _Bool _noLaunchAnimation;
    _Bool _forbidEntryAnimation;
    _Bool _keepContextView;
    _Bool _isPagePushTimeout;
    _Bool _isPagePushed;
    unsigned int _launchMode;
    unsigned long long _contextType;
    WAContact *_contact;
    WAPackageConfig *_packageConfig;
    UINavigationController *_weakNavigationController;
    UINavigationController *_weakPresentingNavigationController;
    WALoadingViewController *_weakLoadingViewController;
    WAPermissionHandler *_permissionHandler;
    WAAppTaskLoader *_weakTaskLoader;
    NSString *_relativeURL;
    NSDictionary *_dicFirstExtraInfo;
    NSDictionary *_dicChildExtraInfo;
    WAWebViewController *_parentWebView;
    NSDictionary *_dicContextData;
    WAAppTaskExtInfo *_taskExtInfo;
    unsigned long long _taskReloadReason;
    WAAppTansitionController *_appTransitionController;
    id <WAMinimizeDelegate> _minimizeDelegate;
    NSMutableArray *_needDownloadInfoDatas;
    NSMutableArray *_relyPluginInfoDatas;
    NSString *_migrateTargetWeAppId;
    unsigned long long _darkmodeSpecificType;
    Class _customLoadingClass;
    NSString *_customLoadingExtraData;
    NSArray *_arrEntryPackages;
    UIView *_containerView;
    unsigned long long _loadingDarkmodeSpecificType;
    UIColor *_loadingBackgroundColor;
    UIColor *_loadingForegroundTextColor;
    NSString *_appID;
    WACacheVersionChecker *_cacheVersionChecker;
    id <WAAppTaskLoaderContextDelegate> _contextDelegate;
    WAWebViewController *_webView;
    NSArray *_arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage;
    id <IWAPrivacyConfirmService> _privacyConfirmProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IWAPrivacyConfirmService> privacyConfirmProxy; // @synthesize privacyConfirmProxy=_privacyConfirmProxy;
@property(retain, nonatomic) NSArray *arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage; // @synthesize arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage=_arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage;
@property(nonatomic) _Bool isPagePushed; // @synthesize isPagePushed=_isPagePushed;
@property(nonatomic) _Bool isPagePushTimeout; // @synthesize isPagePushTimeout=_isPagePushTimeout;
@property(retain, nonatomic) WAWebViewController *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WAAppTaskLoaderContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
@property(retain, nonatomic) WACacheVersionChecker *cacheVersionChecker; // @synthesize cacheVersionChecker=_cacheVersionChecker;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) UIColor *loadingForegroundTextColor; // @synthesize loadingForegroundTextColor=_loadingForegroundTextColor;
@property(retain, nonatomic) UIColor *loadingBackgroundColor; // @synthesize loadingBackgroundColor=_loadingBackgroundColor;
@property(nonatomic) unsigned long long loadingDarkmodeSpecificType; // @synthesize loadingDarkmodeSpecificType=_loadingDarkmodeSpecificType;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool keepContextView; // @synthesize keepContextView=_keepContextView;
@property(nonatomic) _Bool forbidEntryAnimation; // @synthesize forbidEntryAnimation=_forbidEntryAnimation;
@property(nonatomic) _Bool noLaunchAnimation; // @synthesize noLaunchAnimation=_noLaunchAnimation;
@property(retain, nonatomic) NSArray *arrEntryPackages; // @synthesize arrEntryPackages=_arrEntryPackages;
@property(copy, nonatomic) NSString *customLoadingExtraData; // @synthesize customLoadingExtraData=_customLoadingExtraData;
@property(nonatomic) Class customLoadingClass; // @synthesize customLoadingClass=_customLoadingClass;
@property(nonatomic) _Bool simulatedNativeSheetModeShouldHideLeftReturnButton; // @synthesize simulatedNativeSheetModeShouldHideLeftReturnButton=_simulatedNativeSheetModeShouldHideLeftReturnButton;
@property(nonatomic) _Bool useSimulatedNativeLoadingView; // @synthesize useSimulatedNativeLoadingView=_useSimulatedNativeLoadingView;
@property(nonatomic) unsigned long long darkmodeSpecificType; // @synthesize darkmodeSpecificType=_darkmodeSpecificType;
@property(nonatomic) _Bool isSilentOpen; // @synthesize isSilentOpen=_isSilentOpen;
@property(nonatomic) unsigned int launchMode; // @synthesize launchMode=_launchMode;
@property(nonatomic) _Bool isGameFunctionalPage; // @synthesize isGameFunctionalPage=_isGameFunctionalPage;
@property(nonatomic) _Bool isSinglePageMode; // @synthesize isSinglePageMode=_isSinglePageMode;
@property(copy, nonatomic) NSString *migrateTargetWeAppId; // @synthesize migrateTargetWeAppId=_migrateTargetWeAppId;
@property(nonatomic) _Bool isNeedRelaunchToMigrateTargetWeApp; // @synthesize isNeedRelaunchToMigrateTargetWeApp=_isNeedRelaunchToMigrateTargetWeApp;
@property(nonatomic) _Bool isNeedRelaunchToLatestVersion; // @synthesize isNeedRelaunchToLatestVersion=_isNeedRelaunchToLatestVersion;
@property(nonatomic) _Bool loadingPresentCompleted; // @synthesize loadingPresentCompleted=_loadingPresentCompleted;
@property(retain, nonatomic) NSMutableArray *relyPluginInfoDatas; // @synthesize relyPluginInfoDatas=_relyPluginInfoDatas;
@property(retain, nonatomic) NSMutableArray *needDownloadInfoDatas; // @synthesize needDownloadInfoDatas=_needDownloadInfoDatas;
@property(nonatomic) _Bool infoDataPreChecked; // @synthesize infoDataPreChecked=_infoDataPreChecked;
@property(nonatomic) _Bool infoDataPrecheckTriggered; // @synthesize infoDataPrecheckTriggered=_infoDataPrecheckTriggered;
@property(nonatomic) __weak id <WAMinimizeDelegate> minimizeDelegate; // @synthesize minimizeDelegate=_minimizeDelegate;
@property(retain, nonatomic) WAAppTansitionController *appTransitionController; // @synthesize appTransitionController=_appTransitionController;
@property(nonatomic) unsigned long long taskReloadReason; // @synthesize taskReloadReason=_taskReloadReason;
@property(nonatomic) _Bool isUpdateAndForceReloadTask; // @synthesize isUpdateAndForceReloadTask=_isUpdateAndForceReloadTask;
@property(retain, nonatomic) WAAppTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo=_taskExtInfo;
@property(retain, nonatomic) NSDictionary *dicContextData; // @synthesize dicContextData=_dicContextData;
@property(nonatomic) _Bool bNeedShowReloadLoading; // @synthesize bNeedShowReloadLoading=_bNeedShowReloadLoading;
@property(nonatomic) _Bool bReloadFirstPage; // @synthesize bReloadFirstPage=_bReloadFirstPage;
@property(nonatomic) _Bool isPopAllParent; // @synthesize isPopAllParent=_isPopAllParent;
@property(nonatomic) _Bool isPopParent; // @synthesize isPopParent=_isPopParent;
@property(retain, nonatomic) WAWebViewController *parentWebView; // @synthesize parentWebView=_parentWebView;
@property(retain, nonatomic) NSDictionary *dicChildExtraInfo; // @synthesize dicChildExtraInfo=_dicChildExtraInfo;
@property(retain, nonatomic) NSDictionary *dicFirstExtraInfo; // @synthesize dicFirstExtraInfo=_dicFirstExtraInfo;
@property(retain, nonatomic) NSString *relativeURL; // @synthesize relativeURL=_relativeURL;
@property(nonatomic) _Bool isGameApp; // @synthesize isGameApp=_isGameApp;
@property(nonatomic) __weak WAAppTaskLoader *weakTaskLoader; // @synthesize weakTaskLoader=_weakTaskLoader;
@property(retain, nonatomic) WAPermissionHandler *permissionHandler; // @synthesize permissionHandler=_permissionHandler;
@property(nonatomic) __weak WALoadingViewController *weakLoadingViewController; // @synthesize weakLoadingViewController=_weakLoadingViewController;
@property(nonatomic) __weak UINavigationController *weakPresentingNavigationController; // @synthesize weakPresentingNavigationController=_weakPresentingNavigationController;
@property(retain, nonatomic) UINavigationController *weakNavigationController; // @synthesize weakNavigationController=_weakNavigationController;
@property(retain, nonatomic) WAPackageConfig *packageConfig; // @synthesize packageConfig=_packageConfig;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
- (void)onTaskLoaderEnd;
- (void)dealloc;

@end

