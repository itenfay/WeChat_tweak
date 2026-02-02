//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLimitedModeDataPB, NSString;

@interface MMLimitedModeMgr
{
    MMLimitedModeDataPB *m_limitedModeData;
    _Bool _isLimitedModeOn;
    _Bool _isChangingSwitch;
    _Bool _isChangingLevel;
    _Bool _syncSwitch;
    long long _finderBizLevel;
    long long _weappBizLevel;
    long long _brandBizLevel;
    long long _emoticonLevel;
    long long _recentEntryScene;
    long long _syncBizType;
    long long _syncLevel;
}

+ (_Bool)isFinderLiveLimitModeLevelAllow;
+ (_Bool)isFinderNearbyLimitModeLevelAllow;
+ (_Bool)isFinderLimitModeLevelLimited;
+ (_Bool)isFinderLimitModeLevelBlock;
+ (_Bool)isFinderLimitModeLevelAllow;
+ (long long)finderLimitModeLevel;
- (void).cxx_destruct;
@property(nonatomic) long long syncLevel; // @synthesize syncLevel=_syncLevel;
@property(nonatomic) long long syncBizType; // @synthesize syncBizType=_syncBizType;
@property(nonatomic) _Bool syncSwitch; // @synthesize syncSwitch=_syncSwitch;
@property(nonatomic) _Bool isChangingLevel; // @synthesize isChangingLevel=_isChangingLevel;
@property(nonatomic) _Bool isChangingSwitch; // @synthesize isChangingSwitch=_isChangingSwitch;
@property(nonatomic) long long recentEntryScene; // @synthesize recentEntryScene=_recentEntryScene;
@property(nonatomic) long long emoticonLevel; // @synthesize emoticonLevel=_emoticonLevel;
@property(nonatomic) long long brandBizLevel; // @synthesize brandBizLevel=_brandBizLevel;
@property(nonatomic) long long weappBizLevel; // @synthesize weappBizLevel=_weappBizLevel;
@property(nonatomic) long long finderBizLevel; // @synthesize finderBizLevel=_finderBizLevel;
@property(nonatomic) _Bool isLimitedModeOn; // @synthesize isLimitedModeOn=_isLimitedModeOn;
- (void)updateLimitedModeEntryScene:(long long)arg1;
- (void)checkInvalidLogic;
- (void)checkUpdateAndNotify;
- (void)onProfileChange;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)p_loadLimitedModeInternal;
- (void)saveLimitedModeToDataFileInternal;
- (id)p_getLimitedModeDataFilePath;
- (void)reportLimitedModeNoticeStatusOpen:(_Bool)arg1;
- (id)encryptIndependentPwd:(id)arg1;
- (_Bool)shouldBlockUrlInLimitedMode:(id)arg1;
- (_Bool)isBizTypeAllowed:(long long)arg1;
- (void)changeLevel:(long long)arg1 forBiz:(long long)arg2 ticket:(id)arg3;
- (long long)levelForBiz:(long long)arg1;
- (void)setLimitedModeOn:(_Bool)arg1 ticket:(id)arg2;
- (_Bool)isLimitedModeOnCore;
- (_Bool)canShowLimitedModeEntry;
@property(copy, nonatomic) NSString *passwordResetApplyKey;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)makeTeenagerModeAuthorizationWithSystemMsgWrap:(id)arg1;
- (void)makeTeenagerModeBecomeGuardianWithSystemMsgWrap:(id)arg1;
- (id)getAccessAuthorizationAcceptInvalidAgreenDesc:(unsigned int)arg1 accessTime:(unsigned int)arg2;
- (id)getAccessAuthorizationAcceptAgreenDesc:(id)arg1;
- (id)getAccessAuthorizationAcceptDesc:(id)arg1;
- (id)getAccessAuthorizationTitle:(unsigned int)arg1;
- (id)getAccessAuthorizationAcceptTitle:(id)arg1;
- (id)getAccessAuthorizationSendInvalidAgreenDesc:(unsigned int)arg1;
- (id)getAccessAuthorizationSendAgreenDesc:(unsigned int)arg1;
- (id)getAccessAuthorizationSendDesc:(unsigned int)arg1;
- (unsigned int)getAntiAddictInterval;
- (id)getLimitedModeGuardianSetAuthorizationWaitViewController;
- (id)getLimitedModeAuthorizeRequestDisplayViewController:(id)arg1;
- (_Bool)checkHadGuardian;
- (void)saveBecomeGuardianInfo:(id)arg1;
- (void)saveAgreenAuthorizationInfo:(id)arg1;
- (_Bool)checkAccessAuthorizationHadApproveWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)deleteExpiredBecomeGuardianInfo;
- (void)deleteExpiredAuthorizeAgreen;
- (_Bool)checkIsQuestTimeValid:(unsigned int)arg1;
- (_Bool)checkIsRequestAuthorizeAgreenAuthorizationValid:(id)arg1;
- (_Bool)checkIsRequestAuthorizeValid:(id)arg1;
- (_Bool)checkIsRequestBindGuardianValid:(id)arg1;
- (void)showResultViewControllerWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 inView:(id)arg4 actionButtonTitle:(id)arg5 block:(CDUnknownBlockType)arg6;
- (void)showResultViewControllerWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 inView:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)showResultViewControllerWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 actionButtonTitle:(id)arg4 inView:(id)arg5;
- (void)showResultViewControllerWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 inView:(id)arg4;
- (void)showLimitedModeAuthorizeRequest:(id)arg1 viewController:(id)arg2;
- (void)showLimitedModeBindGuardian:(id)arg1 viewController:(id)arg2;
- (void)clickLimitedModeMessageCell:(id)arg1 viewController:(id)arg2;
- (void)onServiceInitInGuardian;
- (id)getRequestResourceExtraWithBizType:(unsigned int)arg1 accessMessage:(id)arg2;
- (id)getRequestResourceWithBizType:(unsigned int)arg1 accessMessage:(id)arg2;
- (unsigned int)getRequestTypeWithBizType:(unsigned int)arg1;
- (void)doReportAuthorizeAction:(unsigned int)arg1 roleCode:(unsigned int)arg2 requestID:(id)arg3 bizType:(unsigned int)arg4 accessMessage:(id)arg5;
- (void)reportAuthorizeAction:(unsigned int)arg1 roleCode:(unsigned int)arg2 requestID:(id)arg3 bizType:(unsigned int)arg4 accessMessage:(id)arg5;
- (void)reportAuthorizeAction:(unsigned int)arg1 roleCode:(unsigned int)arg2 requestType:(unsigned int)arg3 requestID:(id)arg4 requestResource:(id)arg5 requestResourceExtra:(id)arg6;
- (void)reportBindGuardianAction:(unsigned int)arg1 stepAction:(unsigned int)arg2 roleCode:(unsigned int)arg3 targetUserName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

