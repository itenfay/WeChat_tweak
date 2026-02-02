//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioPlayer, NSMutableArray, NSString, RSVerifyView, SonicView, UIButton, UIImageView, UIView, WCUIAlertView;
@protocol RadarSearchViewDelegate;

@interface RadarSearchView
{
    UIView *_backgroundView;
    UIView *_tipsView;
    UIButton *_closeBtn;
    UIImageView *_selfHeadView;
    UIImageView *_radarLightView;
    SonicView *_radarAllHeadScrollView;
    RSVerifyView *_verifyView;
    NSMutableArray *_foundResult;
    AVAudioPlayer *_popPlayer;
    AVAudioPlayer *_holdPlayer;
    id <RadarSearchViewDelegate> _delegate;
    _Bool m_bIsRespondHeadImgClicking;
    long long m_locationErrorCode;
    _Bool m_bIsShowNetworkTips;
    double m_startSearchTime;
    _Bool m_bIsNeedToReport;
    WCUIAlertView *_currAlertView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RadarSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onPerformShortCut:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onExpose:(id)arg1;
- (id)getCurViewController;
- (void)onRSVerifyViewHide;
- (void)onStatusViewHidden:(id)arg1;
- (void)onRSHeadImageClicked:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onFriendAssistAddMsg:(id)arg1;
- (id)parseXML:(id)arg1;
- (void)goToSettingLocationAuthorization;
- (void)showAlertForLocationAuthorization;
- (void)OnRetrieveLocationError:(int)arg1;
- (void)OnRetrieveLocationOk;
- (void)OnRetrieveLocationTimeout;
- (void)OnVerifyUsr:(id)arg1 ErrCode:(int)arg2;
- (void)OnAddFriend:(id)arg1 ErrCode:(int)arg2;
- (void)OnRadarSearch:(id)arg1 ErrCode:(int)arg2;
- (void)handleSomeoneAppear:(id)arg1;
- (void)stopSearch;
- (void)realStartSearch;
- (void)startSearch;
- (void)hideTipsViewIfNeed;
- (void)stopLightAnimation;
- (void)startLightAnimation;
- (void)resumeLightAnimation;
- (void)stopPlayPopupSound;
- (void)startPlayPopupSound;
- (void)onClose;
- (void)onClose:(_Bool)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)resetDataMember;
- (void)showFindFailTips;
- (void)showTipsWithType:(long long)arg1;
- (void)hideTipsView;
- (void)showTipsView;
- (void)initTipsView;
- (id)generateCloseButton;
- (void)initVerifyView;
- (void)initCloseButton;
- (void)initSelfHeadView;
- (void)initBackgroundView;
- (id)init;
- (void)initSkyBackground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

