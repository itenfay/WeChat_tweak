//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMFinderLiveTaskId, MMTableView, MMTableViewInfo, NSMutableDictionary, NSString, SecurityInfoAuthrizeLogic, SpamRisk, UIButton;

@interface WCFinderLiveAccountPrecheckResultViewController
{
    _Bool _shouldShowOneTimeAgreementView;
    _Bool _hasExtraVerifyItem;
    _Bool _isNameVerifiedSucceed;
    _Bool _isDoneButtonClicked;
    _Bool _isExitOnPolicyDone;
    _Bool _cancelPrecheckProcess;
    unsigned int _userFlag;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    SpamRisk *_spamJumpInfo;
    CDUnknownBlockType _enableCreateLiveCallback;
    CDUnknownBlockType _cancelledCallback;
    CDUnknownBlockType _delayEnableCreateLiveCallback;
    MMFinderLiveTaskId *_liveTaskId;
    SecurityInfoAuthrizeLogic *_authLogic;
    UIButton *_doneButton;
    NSMutableDictionary *_m_cacheHeightDic;
    double _m_tableContentHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cancelPrecheckProcess; // @synthesize cancelPrecheckProcess=_cancelPrecheckProcess;
@property(nonatomic) _Bool isExitOnPolicyDone; // @synthesize isExitOnPolicyDone=_isExitOnPolicyDone;
@property(nonatomic) _Bool isDoneButtonClicked; // @synthesize isDoneButtonClicked=_isDoneButtonClicked;
@property(nonatomic) _Bool isNameVerifiedSucceed; // @synthesize isNameVerifiedSucceed=_isNameVerifiedSucceed;
@property(nonatomic) _Bool hasExtraVerifyItem; // @synthesize hasExtraVerifyItem=_hasExtraVerifyItem;
@property(nonatomic) _Bool shouldShowOneTimeAgreementView; // @synthesize shouldShowOneTimeAgreementView=_shouldShowOneTimeAgreementView;
@property(nonatomic) double m_tableContentHeight; // @synthesize m_tableContentHeight=_m_tableContentHeight;
@property(retain, nonatomic) NSMutableDictionary *m_cacheHeightDic; // @synthesize m_cacheHeightDic=_m_cacheHeightDic;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(retain, nonatomic) SecurityInfoAuthrizeLogic *authLogic; // @synthesize authLogic=_authLogic;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType delayEnableCreateLiveCallback; // @synthesize delayEnableCreateLiveCallback=_delayEnableCreateLiveCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelledCallback; // @synthesize cancelledCallback=_cancelledCallback;
@property(copy, nonatomic) CDUnknownBlockType enableCreateLiveCallback; // @synthesize enableCreateLiveCallback=_enableCreateLiveCallback;
@property(retain, nonatomic) SpamRisk *spamJumpInfo; // @synthesize spamJumpInfo=_spamJumpInfo;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (void)_internalCancelPrecheck;
- (void)onUpdateUserFlagFail;
- (void)createLivePrepareWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)updateUserFlagOnRealnameDoneIfNeed;
- (void)updateUIOnVerfiySuccess;
- (void)reportVerifyExpose:(unsigned long long)arg1;
- (void)reportExpose;
- (void)onMMLiveNameVerifyViewControllerNameVerifyFailed:(long long)arg1;
- (void)onMMLiveNameVerifyViewControllerNameVerifySucceeded:(long long)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)showPolicyWebView;
- (void)proceedCreateLivePrecess;
- (void)OnDoneButtonClicked;
- (void)uploadFinderRealNameToken:(id)arg1;
- (void)getSecurityInfoAuthTokenWith:(id)arg1;
- (void)startFinderRealNameVerify;
- (_Bool)isLiveAgeVerifiedFail;
- (_Bool)isLiveNameVerifiedFail;
- (void)preCheckResultItemForFaceVerifyClicked;
- (void)onPreCheckResultItemForOtherVerifyClicked;
- (void)onPreCheckResultItemForAgeVerifyClicked;
- (void)onPreCheckResultItemForWepayVerifyClicked;
- (void)onPreCheckResultItemForFinderRealNameVerifyClicked;
- (void)onPreCheckResultItemForRealNameVerifyClicked;
- (void)makePreCheckResultItem:(id)arg1 cellInfo:(id)arg2;
- (void)layoutHeaderView;
- (void)reloadFootView;
- (void)reloadTableData;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (id)finderLiveTask;
- (void)showForbidLiveViewWithTitle:(id)arg1 withMessage:(id)arg2;
- (_Bool)showOneTimeAgreementView;
- (void)layoutDoneButton;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithliveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

