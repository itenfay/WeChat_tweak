//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIViewController, WAAppTansitionController, WAAppTaskCapsuleMenu, WAAppTaskReferrerInfo, WAAppTaskTransitInfo, WAAppTaskWebLaunchInfo, WALoadingViewController, WAPageFlowAppInfo, WAPageFlowSessionInfo, WAUINavigationController;

@interface WAAppTaskExtInfo : NSObject
{
    _Bool _beSpecificPage;
    _Bool _isSilentOpen;
    _Bool _isRemoteMode;
    _Bool _ignoreDomain;
    _Bool _isUseParalelRequest;
    _Bool _launchAppLoaderReloaded;
    _Bool _relaunchAppLoaderReloaded;
    _Bool _aliveFailedRebooted;
    _Bool _noReLaunch;
    _Bool _asyncLaunchPubResRelyUpdateRebooted;
    _Bool _shouldForbidRecentForward;
    _Bool _shouldDelayRestartGame;
    unsigned int _silentOpenType;
    unsigned int _channelType;
    unsigned int _debugType;
    unsigned int _proxyPort;
    unsigned int _supportCompressAlgo;
    WAAppTaskReferrerInfo *_referrerInfo;
    WAAppTaskWebLaunchInfo *_webLaunchInfo;
    WAAppTaskTransitInfo *_transitInfo;
    NSString *_chatName;
    NSString *_shareKey;
    WAPageFlowAppInfo *_taskAppInfo;
    WAPageFlowSessionInfo *_taskSessionInfo;
    NSString *_opensdkAppID;
    NSString *_userName;
    NSString *_roomID;
    NSString *_pkgInfo;
    NSString *_wsEndPoint;
    NSMutableDictionary *_dynamicInfo;
    WAUINavigationController *_miniNavigationController;
    WALoadingViewController *_preloadWALoadingVC;
    WAUINavigationController *_preloadNavigationController;
    WAAppTaskCapsuleMenu *_preloadCapsuleMenu;
    WAAppTansitionController *_preloadAppTransitionController;
    UIViewController *_gameStartupCoverVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDelayRestartGame; // @synthesize shouldDelayRestartGame=_shouldDelayRestartGame;
@property(nonatomic) _Bool shouldForbidRecentForward; // @synthesize shouldForbidRecentForward=_shouldForbidRecentForward;
@property(nonatomic) _Bool asyncLaunchPubResRelyUpdateRebooted; // @synthesize asyncLaunchPubResRelyUpdateRebooted=_asyncLaunchPubResRelyUpdateRebooted;
@property(retain, nonatomic) UIViewController *gameStartupCoverVC; // @synthesize gameStartupCoverVC=_gameStartupCoverVC;
@property(nonatomic) _Bool noReLaunch; // @synthesize noReLaunch=_noReLaunch;
@property(retain, nonatomic) WAAppTansitionController *preloadAppTransitionController; // @synthesize preloadAppTransitionController=_preloadAppTransitionController;
@property(retain, nonatomic) WAAppTaskCapsuleMenu *preloadCapsuleMenu; // @synthesize preloadCapsuleMenu=_preloadCapsuleMenu;
@property(retain, nonatomic) WAUINavigationController *preloadNavigationController; // @synthesize preloadNavigationController=_preloadNavigationController;
@property(retain, nonatomic) WALoadingViewController *preloadWALoadingVC; // @synthesize preloadWALoadingVC=_preloadWALoadingVC;
@property(retain, nonatomic) WAUINavigationController *miniNavigationController; // @synthesize miniNavigationController=_miniNavigationController;
@property(nonatomic) _Bool aliveFailedRebooted; // @synthesize aliveFailedRebooted=_aliveFailedRebooted;
@property(nonatomic) _Bool relaunchAppLoaderReloaded; // @synthesize relaunchAppLoaderReloaded=_relaunchAppLoaderReloaded;
@property(nonatomic) _Bool launchAppLoaderReloaded; // @synthesize launchAppLoaderReloaded=_launchAppLoaderReloaded;
@property(nonatomic) _Bool isUseParalelRequest; // @synthesize isUseParalelRequest=_isUseParalelRequest;
@property(retain, nonatomic) NSMutableDictionary *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(retain, nonatomic) NSString *wsEndPoint; // @synthesize wsEndPoint=_wsEndPoint;
@property(nonatomic) unsigned int supportCompressAlgo; // @synthesize supportCompressAlgo=_supportCompressAlgo;
@property(nonatomic) _Bool ignoreDomain; // @synthesize ignoreDomain=_ignoreDomain;
@property(nonatomic) unsigned int proxyPort; // @synthesize proxyPort=_proxyPort;
@property(nonatomic) unsigned int debugType; // @synthesize debugType=_debugType;
@property(nonatomic) unsigned int channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *pkgInfo; // @synthesize pkgInfo=_pkgInfo;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool isRemoteMode; // @synthesize isRemoteMode=_isRemoteMode;
@property(nonatomic) unsigned int silentOpenType; // @synthesize silentOpenType=_silentOpenType;
@property(nonatomic) _Bool isSilentOpen; // @synthesize isSilentOpen=_isSilentOpen;
@property(copy, nonatomic) NSString *opensdkAppID; // @synthesize opensdkAppID=_opensdkAppID;
@property(retain, nonatomic) WAPageFlowSessionInfo *taskSessionInfo; // @synthesize taskSessionInfo=_taskSessionInfo;
@property(retain, nonatomic) WAPageFlowAppInfo *taskAppInfo; // @synthesize taskAppInfo=_taskAppInfo;
@property(nonatomic) _Bool beSpecificPage; // @synthesize beSpecificPage=_beSpecificPage;
@property(copy, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) WAAppTaskTransitInfo *transitInfo; // @synthesize transitInfo=_transitInfo;
@property(retain, nonatomic) WAAppTaskWebLaunchInfo *webLaunchInfo; // @synthesize webLaunchInfo=_webLaunchInfo;
@property(retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;

@end

