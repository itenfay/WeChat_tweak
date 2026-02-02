//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LBSErrorViewController, MMLocationAccuracyAuthorizationTipView, MMSystemAuthCancellableToken, MMTipsViewController, NSString, PeopleNearByListViewController, SeePeopleNearByLogicController, SettingMyAccountExtInfoViewController, UIView, WCUIAlertView;
@protocol SeePeopleNearbyViewControllerDelegate;

@interface SeePeopleNearbyViewController
{
    PeopleNearByListViewController *m_peopleListView;
    SeePeopleNearByLogicController *m_logicController;
    LBSErrorViewController *m_findNothingView;
    MMTipsViewController *m_introView;
    unsigned int m_uiScene;
    unsigned long long enterTimeInMs;
    _Bool _createFromFinderNearby;
    _Bool _contentYIgnoreFromFinderNearbyFlag;
    _Bool _isAdClicked;
    _Bool _enterBackground;
    _Bool _showAccuracyAuthorizationTip;
    int _currentAuthLogType;
    id <SeePeopleNearbyViewControllerDelegate> _delegate;
    NSString *_shownAdId;
    UIView *_authorizationTipContainerView;
    MMLocationAccuracyAuthorizationTipView *_accuracyAuthorizationTipView;
    WCUIAlertView *_currAlertView;
    SettingMyAccountExtInfoViewController *_extInfoVC;
    MMSystemAuthCancellableToken *_requestAuthToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMSystemAuthCancellableToken *requestAuthToken; // @synthesize requestAuthToken=_requestAuthToken;
@property(nonatomic) __weak SettingMyAccountExtInfoViewController *extInfoVC; // @synthesize extInfoVC=_extInfoVC;
@property(nonatomic) int currentAuthLogType; // @synthesize currentAuthLogType=_currentAuthLogType;
@property(nonatomic) _Bool showAccuracyAuthorizationTip; // @synthesize showAccuracyAuthorizationTip=_showAccuracyAuthorizationTip;
@property(nonatomic) _Bool enterBackground; // @synthesize enterBackground=_enterBackground;
@property(retain, nonatomic) WCUIAlertView *currAlertView; // @synthesize currAlertView=_currAlertView;
@property(retain, nonatomic) MMLocationAccuracyAuthorizationTipView *accuracyAuthorizationTipView; // @synthesize accuracyAuthorizationTipView=_accuracyAuthorizationTipView;
@property(retain, nonatomic) UIView *authorizationTipContainerView; // @synthesize authorizationTipContainerView=_authorizationTipContainerView;
@property(retain, nonatomic) NSString *shownAdId; // @synthesize shownAdId=_shownAdId;
@property(nonatomic) _Bool isAdClicked; // @synthesize isAdClicked=_isAdClicked;
@property(nonatomic) _Bool contentYIgnoreFromFinderNearbyFlag; // @synthesize contentYIgnoreFromFinderNearbyFlag=_contentYIgnoreFromFinderNearbyFlag;
@property(nonatomic) __weak id <SeePeopleNearbyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool createFromFinderNearby; // @synthesize createFromFinderNearby=_createFromFinderNearby;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(retain, nonatomic) LBSErrorViewController *findNothingView; // @synthesize findNothingView=m_findNothingView;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
@property(retain, nonatomic) PeopleNearByListViewController *peopleListView; // @synthesize peopleListView=m_peopleListView;
- (void)registerYReportSdk;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (double)getCurrentContentViewY;
- (void)adjustTableViewInset;
- (void)updateAccuracyAuthorizationTipHidden;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (_Bool)shouldInteractivePop;
- (void)onCancel;
- (void)goToSettingLocationAuthorization;
- (void)showAlertForLocationAuthorization;
- (void)viewDidLayoutSubviews;
- (void)onSelectAd:(id)arg1;
- (void)onCloseAd:(id)arg1;
- (void)adjustSubviewRects;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)confirmClearMyLbsData:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)SettingMyAccountExtInfoExit;
- (void)onGetCertificationFinish;
- (void)onSelectedWithLbsPoiItem:(id)arg1;
- (void)onSelectedWithLbsContactInfo:(id)arg1;
- (void)showPeopleInfoView:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)onUpdateLbsContactInfoError:(int)arg1;
- (void)onGetLBSRecommendPoiList:(id)arg1;
- (void)onUpdateAdvertisement:(id)arg1;
- (void)onUpdateLbsContactInfoFinishedWithData:(id)arg1;
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
- (void)goBackToRootView;
- (void)showMessage:(id)arg1;
- (void)onRefreshMyFriends;
- (void)onClearMyLbsData;
- (void)checkLbs:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAppear;
- (void)initAccuracyAuthorizationTipView;
- (id)navigationBarBackgroundColor;
- (_Bool)showNavigationBarSepLine;
- (void)viewDidLoad;
- (id)title;
- (void)setTitleNavView;
- (void)setRightNavBtn;
- (void)setRightNavBtnNil;
- (void)showOperationMenu:(id)arg1;
- (void)promptForLBSUsageWarnning;
- (void)onClickNeverPromptForAgree:(id)arg1;
- (void)promptForProfileExtInfo;
- (_Bool)isProfileExtInfoOK;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)initNotifications;
- (void)checkLocationAuthorization;
- (void)configShowInNearByLife:(double)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

