//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUINavigationBar, MultiDeviceAutoLoginLogic, MultiDeviceCardView, MultiDeviceLoginInfo, MultiDeviceLoginLogic, MultiDeviceManageLogic, NSArray, NSMutableArray, NSString, UINavigationItem, UIScreenEdgePanGestureRecognizer, UITapGestureRecognizer, WCSheetView;

@interface MultiDeviceManageViewController
{
    _Bool _userOpen;
    MMUINavigationBar *_customNavigationBar;
    UINavigationItem *_customNavigationItem;
    WCSheetView *_sheetView;
    MultiDeviceLoginInfo *_deviceLoginInfo;
    MultiDeviceLoginLogic *_deviceLoginLogic;
    MultiDeviceCardView *_deviceLoginCardView;
    MMUILabel *_deviceLoginGuideLabel;
    MultiDeviceManageLogic *_deviceManageLogic;
    NSArray *_deviceManageInfoList;
    NSMutableArray *_deviceManageCardViewList;
    MultiDeviceAutoLoginLogic *_autoLoginLogic;
    UITapGestureRecognizer *_tapGesture;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture; // @synthesize screenEdgePanGesture=_screenEdgePanGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MultiDeviceAutoLoginLogic *autoLoginLogic; // @synthesize autoLoginLogic=_autoLoginLogic;
@property(retain, nonatomic) NSMutableArray *deviceManageCardViewList; // @synthesize deviceManageCardViewList=_deviceManageCardViewList;
@property(retain, nonatomic) NSArray *deviceManageInfoList; // @synthesize deviceManageInfoList=_deviceManageInfoList;
@property(retain, nonatomic) MultiDeviceManageLogic *deviceManageLogic; // @synthesize deviceManageLogic=_deviceManageLogic;
@property(retain, nonatomic) MMUILabel *deviceLoginGuideLabel; // @synthesize deviceLoginGuideLabel=_deviceLoginGuideLabel;
@property(retain, nonatomic) MultiDeviceCardView *deviceLoginCardView; // @synthesize deviceLoginCardView=_deviceLoginCardView;
@property(retain, nonatomic) MultiDeviceLoginLogic *deviceLoginLogic; // @synthesize deviceLoginLogic=_deviceLoginLogic;
@property(retain, nonatomic) MultiDeviceLoginInfo *deviceLoginInfo; // @synthesize deviceLoginInfo=_deviceLoginInfo;
@property(retain, nonatomic) WCSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(nonatomic, getter=isUserOpen) _Bool userOpen; // @synthesize userOpen=_userOpen;
- (void)onManageInfoUpdate;
- (void)onCancelLogin;
- (void)onConfirmLoginFailed;
- (void)onConfirmLoginSucceeded;
- (void)onTapManageLogoutButtonWithInfo:(id)arg1;
- (void)onTapKeepAliveCheckboxWithInfo:(id)arg1;
- (void)onTapAutoLoginCheckboxWithInfo:(id)arg1;
- (void)onTapLockButtonWithInfo:(id)arg1;
- (void)onTapSendFileButtonWithInfo:(id)arg1;
- (void)onTapNotificationButtonWithNewState:(_Bool)arg1;
- (void)onTapManageExpandButtonWithInfo:(id)arg1;
- (void)onTapManageHelpButtonWithInfo:(id)arg1;
- (void)reportLoginEndWithResult:(_Bool)arg1 confirmInfo:(id)arg2;
- (void)onTapCancelLoginButton;
- (void)onTapConfirmLoginButtonWithInfo:(id)arg1;
- (void)onJumpProtocolUrl:(id)arg1;
- (void)shouldUpdateRightBarButtonItemWithShow:(_Bool)arg1;
- (double)cardViewFullScreenHeight;
- (double)cardViewMaxWidth;
- (void)onTapHelpBarButton;
- (void)onTapCloseBarButton;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onTapSheetView:(id)arg1;
- (void)reloadManageCardViewList;
- (void)reloadManageInfoList;
- (_Bool)isManage;
- (_Bool)isLogin;
- (_Bool)disMissSelf;
- (id)viewController;
- (void)updateLayouts;
- (void)initGesture;
- (void)initView;
- (void)initNavigationBar;
- (void)viewDidTransitionToNewSize;
- (void)report;
- (void)viewDidLoad;
- (id)initWithLoginInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

