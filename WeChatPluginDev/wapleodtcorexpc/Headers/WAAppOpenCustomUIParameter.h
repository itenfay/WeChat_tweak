//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableArray, NSString, UIColor;

@interface WAAppOpenCustomUIParameter
{
    _Bool _m_bHideSimulatedNativeLeftReturnButton;
    _Bool _m_bForceLightMode;
    _Bool _m_bUseSimulatedNativeLoading;
    _Bool _m_bNeedShowTemplateNav;
    _Bool _m_bNeedHideTemplateNavOnExpand;
    _Bool _m_bNeedShowShareBtnOnTemplateNav;
    _Bool _m_bTemplateNavShareNormalWeAppMessage;
    _Bool _m_bHideTemplateNavAvatar;
    _Bool _noLaunchAnimation;
    _Bool _needDoubleCheckContactTransparentBackgroundEnabled;
    _Bool _forbidEntryAnimation;
    _Bool _keepContextView;
    _Bool _keepContextPageInCycleJump;
    _Bool _m_forbidDefaultLoadingToast;
    unsigned long long _m_uiLaunchAnimationType;
    CDUnknownBlockType _m_shareBtnAction;
    NSString *_m_oTmeplateNavAvartarUrl;
    NSString *_m_oTemplateNavNickName;
    NSString *_m_nsTemplateNavSubtitle;
    long long _m_restoreOrientationOnDismiss;
    MMUIViewController *_m_loadingToastVC;
    unsigned long long _loadingDarkmodeSpecificType;
    UIColor *_loadingBackgroundColor;
    UIColor *_loadingForegroundTextColor;
    NSMutableArray *_widgetParameters;
    NSString *_m_liteGameLoadingParameters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m_liteGameLoadingParameters; // @synthesize m_liteGameLoadingParameters=_m_liteGameLoadingParameters;
@property(retain, nonatomic) NSMutableArray *widgetParameters; // @synthesize widgetParameters=_widgetParameters;
@property(retain, nonatomic) UIColor *loadingForegroundTextColor; // @synthesize loadingForegroundTextColor=_loadingForegroundTextColor;
@property(retain, nonatomic) UIColor *loadingBackgroundColor; // @synthesize loadingBackgroundColor=_loadingBackgroundColor;
@property(nonatomic) unsigned long long loadingDarkmodeSpecificType; // @synthesize loadingDarkmodeSpecificType=_loadingDarkmodeSpecificType;
@property(nonatomic) __weak MMUIViewController *m_loadingToastVC; // @synthesize m_loadingToastVC=_m_loadingToastVC;
@property(nonatomic) _Bool m_forbidDefaultLoadingToast; // @synthesize m_forbidDefaultLoadingToast=_m_forbidDefaultLoadingToast;
@property(nonatomic) _Bool keepContextPageInCycleJump; // @synthesize keepContextPageInCycleJump=_keepContextPageInCycleJump;
@property(nonatomic) _Bool keepContextView; // @synthesize keepContextView=_keepContextView;
@property(nonatomic) _Bool forbidEntryAnimation; // @synthesize forbidEntryAnimation=_forbidEntryAnimation;
@property(nonatomic) _Bool needDoubleCheckContactTransparentBackgroundEnabled; // @synthesize needDoubleCheckContactTransparentBackgroundEnabled=_needDoubleCheckContactTransparentBackgroundEnabled;
@property(nonatomic) _Bool noLaunchAnimation; // @synthesize noLaunchAnimation=_noLaunchAnimation;
@property(nonatomic) long long m_restoreOrientationOnDismiss; // @synthesize m_restoreOrientationOnDismiss=_m_restoreOrientationOnDismiss;
@property(copy, nonatomic) NSString *m_nsTemplateNavSubtitle; // @synthesize m_nsTemplateNavSubtitle=_m_nsTemplateNavSubtitle;
@property(copy, nonatomic) NSString *m_oTemplateNavNickName; // @synthesize m_oTemplateNavNickName=_m_oTemplateNavNickName;
@property(nonatomic) _Bool m_bHideTemplateNavAvatar; // @synthesize m_bHideTemplateNavAvatar=_m_bHideTemplateNavAvatar;
@property(copy, nonatomic) NSString *m_oTmeplateNavAvartarUrl; // @synthesize m_oTmeplateNavAvartarUrl=_m_oTmeplateNavAvartarUrl;
@property(nonatomic) _Bool m_bTemplateNavShareNormalWeAppMessage; // @synthesize m_bTemplateNavShareNormalWeAppMessage=_m_bTemplateNavShareNormalWeAppMessage;
@property(copy, nonatomic) CDUnknownBlockType m_shareBtnAction; // @synthesize m_shareBtnAction=_m_shareBtnAction;
@property(nonatomic) _Bool m_bNeedShowShareBtnOnTemplateNav; // @synthesize m_bNeedShowShareBtnOnTemplateNav=_m_bNeedShowShareBtnOnTemplateNav;
@property(nonatomic) _Bool m_bNeedHideTemplateNavOnExpand; // @synthesize m_bNeedHideTemplateNavOnExpand=_m_bNeedHideTemplateNavOnExpand;
@property(nonatomic) _Bool m_bNeedShowTemplateNav; // @synthesize m_bNeedShowTemplateNav=_m_bNeedShowTemplateNav;
@property(nonatomic) _Bool m_bUseSimulatedNativeLoading; // @synthesize m_bUseSimulatedNativeLoading=_m_bUseSimulatedNativeLoading;
@property(nonatomic) _Bool m_bForceLightMode; // @synthesize m_bForceLightMode=_m_bForceLightMode;
@property(nonatomic) _Bool m_bHideSimulatedNativeLeftReturnButton; // @synthesize m_bHideSimulatedNativeLeftReturnButton=_m_bHideSimulatedNativeLeftReturnButton;
@property(nonatomic) unsigned long long m_uiLaunchAnimationType; // @synthesize m_uiLaunchAnimationType=_m_uiLaunchAnimationType;

@end

