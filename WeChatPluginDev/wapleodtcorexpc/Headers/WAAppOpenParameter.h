//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniTaskTransitionContext, NSArray, NSDictionary, NSString, UINavigationController, UIView, WAAppOpenCustomLoadingParameter, WAAppOpenCustomUIParameter, WAAppOpenDebugModeParameter, WAAppOpenExtJSParameter, WAAppOpenSheetModeParameter, WAContact, WAProvideApiConfig;

@interface WAAppOpenParameter
{
    _Bool _m_bUpdateAndForceReloadTask;
    _Bool _m_isOpenFromFloatingView;
    _Bool _m_bIsSilentOpen;
    _Bool _m_bIsOpenOnBluetoothDeviceMonitored;
    _Bool _passForwardLifeCycleEventToPreviousTask;
    _Bool _m_bForbidUsePreloadTask;
    _Bool _m_bIsCustomLoading;
    unsigned int _m_uiVersion;
    unsigned int _m_secFlagForSinglePageMode;
    NSString *_m_nsUserName;
    NSString *_m_nsAppId;
    WAContact *_m_contact;
    NSString *_m_nsPagePath;
    unsigned long long _m_uiDebugMode;
    UINavigationController *_m_navigationController;
    long long _m_appServiceType;
    unsigned long long _m_uiScene;
    NSString *_m_nsSceneNote;
    unsigned long long _m_uiPreScene;
    NSString *_m_nsPreSceneNote;
    unsigned long long _m_uiChatType;
    unsigned long long _m_uiCodeScene;
    unsigned long long _m_uiTaskReloadReason;
    NSString *_m_nsInstanceIdBeforeReload;
    NSString *_m_lastAppId;
    NSArray *_m_arrEntryPackages;
    NSDictionary *_m_nsExtraParamInfo;
    NSDictionary *_hostExtraData;
    NSString *_m_nsDebugLaunchInfo;
    NSString *_m_nsChatroomUsername;
    NSString *_m_nsChatUsername;
    unsigned long long _m_launchMode;
    unsigned long long _m_stackMode;
    unsigned long long _m_uSilentOpenType;
    WAProvideApiConfig *_provideApiCfg;
    WAAppOpenSheetModeParameter *_m_sheetModeParameter;
    NSString *_m_nsMPShortLink;
    MiniTaskTransitionContext *_m_miniTaskVCAnimationContext;
    WAAppOpenExtJSParameter *_m_extJSParameter;
    NSString *_m_migrateFromUsername;
    unsigned long long _matrixUserType;
    WAAppOpenCustomLoadingParameter *_m_customLoadingParameter;
    unsigned long long _m_uiCapsuleMenuType;
    WAAppOpenCustomUIParameter *_m_customUIParameter;
    UIView *_containerView;
    WAAppOpenDebugModeParameter *_m_debugModeParameter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppOpenDebugModeParameter *m_debugModeParameter; // @synthesize m_debugModeParameter=_m_debugModeParameter;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WAAppOpenCustomUIParameter *m_customUIParameter; // @synthesize m_customUIParameter=_m_customUIParameter;
@property(nonatomic) unsigned long long m_uiCapsuleMenuType; // @synthesize m_uiCapsuleMenuType=_m_uiCapsuleMenuType;
@property(retain, nonatomic) WAAppOpenCustomLoadingParameter *m_customLoadingParameter; // @synthesize m_customLoadingParameter=_m_customLoadingParameter;
@property(nonatomic) unsigned long long matrixUserType; // @synthesize matrixUserType=_matrixUserType;
@property(nonatomic) _Bool m_bIsCustomLoading; // @synthesize m_bIsCustomLoading=_m_bIsCustomLoading;
@property(copy, nonatomic) NSString *m_migrateFromUsername; // @synthesize m_migrateFromUsername=_m_migrateFromUsername;
@property(nonatomic) unsigned int m_secFlagForSinglePageMode; // @synthesize m_secFlagForSinglePageMode=_m_secFlagForSinglePageMode;
@property(nonatomic) _Bool m_bForbidUsePreloadTask; // @synthesize m_bForbidUsePreloadTask=_m_bForbidUsePreloadTask;
@property(retain, nonatomic) WAAppOpenExtJSParameter *m_extJSParameter; // @synthesize m_extJSParameter=_m_extJSParameter;
@property(retain, nonatomic) MiniTaskTransitionContext *m_miniTaskVCAnimationContext; // @synthesize m_miniTaskVCAnimationContext=_m_miniTaskVCAnimationContext;
@property(copy, nonatomic) NSString *m_nsMPShortLink; // @synthesize m_nsMPShortLink=_m_nsMPShortLink;
@property(nonatomic) _Bool passForwardLifeCycleEventToPreviousTask; // @synthesize passForwardLifeCycleEventToPreviousTask=_passForwardLifeCycleEventToPreviousTask;
@property(retain, nonatomic) WAAppOpenSheetModeParameter *m_sheetModeParameter; // @synthesize m_sheetModeParameter=_m_sheetModeParameter;
@property(nonatomic) _Bool m_bIsOpenOnBluetoothDeviceMonitored; // @synthesize m_bIsOpenOnBluetoothDeviceMonitored=_m_bIsOpenOnBluetoothDeviceMonitored;
@property(retain, nonatomic) WAProvideApiConfig *provideApiCfg; // @synthesize provideApiCfg=_provideApiCfg;
@property(nonatomic) unsigned long long m_uSilentOpenType; // @synthesize m_uSilentOpenType=_m_uSilentOpenType;
@property(nonatomic) _Bool m_bIsSilentOpen; // @synthesize m_bIsSilentOpen=_m_bIsSilentOpen;
@property(nonatomic) unsigned long long m_stackMode; // @synthesize m_stackMode=_m_stackMode;
@property(nonatomic) unsigned long long m_launchMode; // @synthesize m_launchMode=_m_launchMode;
@property(copy, nonatomic) NSString *m_nsChatUsername; // @synthesize m_nsChatUsername=_m_nsChatUsername;
@property(copy, nonatomic) NSString *m_nsChatroomUsername; // @synthesize m_nsChatroomUsername=_m_nsChatroomUsername;
@property(copy, nonatomic) NSString *m_nsDebugLaunchInfo; // @synthesize m_nsDebugLaunchInfo=_m_nsDebugLaunchInfo;
@property(retain, nonatomic) NSDictionary *hostExtraData; // @synthesize hostExtraData=_hostExtraData;
@property(retain, nonatomic) NSDictionary *m_nsExtraParamInfo; // @synthesize m_nsExtraParamInfo=_m_nsExtraParamInfo;
@property(nonatomic) _Bool m_isOpenFromFloatingView; // @synthesize m_isOpenFromFloatingView=_m_isOpenFromFloatingView;
@property(retain, nonatomic) NSArray *m_arrEntryPackages; // @synthesize m_arrEntryPackages=_m_arrEntryPackages;
@property(retain, nonatomic) NSString *m_lastAppId; // @synthesize m_lastAppId=_m_lastAppId;
@property(copy, nonatomic) NSString *m_nsInstanceIdBeforeReload; // @synthesize m_nsInstanceIdBeforeReload=_m_nsInstanceIdBeforeReload;
@property(nonatomic) unsigned long long m_uiTaskReloadReason; // @synthesize m_uiTaskReloadReason=_m_uiTaskReloadReason;
@property(nonatomic) _Bool m_bUpdateAndForceReloadTask; // @synthesize m_bUpdateAndForceReloadTask=_m_bUpdateAndForceReloadTask;
@property(nonatomic) unsigned long long m_uiCodeScene; // @synthesize m_uiCodeScene=_m_uiCodeScene;
@property(nonatomic) unsigned long long m_uiChatType; // @synthesize m_uiChatType=_m_uiChatType;
@property(copy, nonatomic) NSString *m_nsPreSceneNote; // @synthesize m_nsPreSceneNote=_m_nsPreSceneNote;
@property(nonatomic) unsigned long long m_uiPreScene; // @synthesize m_uiPreScene=_m_uiPreScene;
@property(copy, nonatomic) NSString *m_nsSceneNote; // @synthesize m_nsSceneNote=_m_nsSceneNote;
@property(nonatomic) unsigned long long m_uiScene; // @synthesize m_uiScene=_m_uiScene;
@property(nonatomic) long long m_appServiceType; // @synthesize m_appServiceType=_m_appServiceType;
@property(nonatomic) __weak UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
@property(nonatomic) unsigned long long m_uiDebugMode; // @synthesize m_uiDebugMode=_m_uiDebugMode;
@property(nonatomic) unsigned int m_uiVersion; // @synthesize m_uiVersion=_m_uiVersion;
@property(copy, nonatomic) NSString *m_nsPagePath; // @synthesize m_nsPagePath=_m_nsPagePath;
@property(retain, nonatomic) WAContact *m_contact; // @synthesize m_contact=_m_contact;
@property(copy, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId=_m_nsAppId;
@property(copy, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName=_m_nsUserName;
- (_Bool)isParameterValid;
- (_Bool)hasUsrName;
- (id)initWithWeAppUsername:(id)arg1;

@end

