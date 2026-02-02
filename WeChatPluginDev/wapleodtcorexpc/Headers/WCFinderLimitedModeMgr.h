//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLimitedModeAuthorizationUtilLogic, NSString, WCFinderLimitAccessAuthorizationModel;
@protocol WCFinderLimitedModeMgrDelegate;

@interface WCFinderLimitedModeMgr : NSObject
{
    _Bool _checkAntiVCIsShowing;
    _Bool _openShareListFeedsIgnoreLimited;
    _Bool _enableShowShareRelatedWhenYoungContentLimit;
    id <WCFinderLimitedModeMgrDelegate> _delegate;
    long long _finderLimitedModeConfig;
    unsigned long long _antiAddictInterval;
    unsigned long long _antiAddictPassSeconds;
    unsigned long long _lastLiftCurfewTimeStamp;
    unsigned long long _lastInFinderTimeStamp;
    MMLimitedModeAuthorizationUtilLogic *_authorizationLogic;
    WCFinderLimitAccessAuthorizationModel *_authorizationModel;
    unsigned long long _antiSceneTotalWatchSeconds;
}

+ (CDUnknownBlockType)getOpenTeenageBlockByLiveParams:(id)arg1;
+ (CDUnknownBlockType)getOpenTeenageBlockByFeedId:(id)arg1 encrytedObjectidTid:(id)arg2 nonceID:(id)arg3 shareScene:(unsigned long long)arg4 currentNavController:(id)arg5 customParam:(id)arg6 functionalParams:(id)arg7 reportModel:(id)arg8 cardType:(unsigned long long)arg9;
+ (id)getLiveAuthorizationBizKeyWithFeedId:(id)arg1;
+ (id)getFeedAuthorizationBizKeyWithFeedId:(id)arg1;
+ (id)getTimeLockAuthorizationBizKey;
+ (id)getCurfewAuthorizationBizKey;
+ (_Bool)canCheckAntiAddictLogicBySwitch;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long antiSceneTotalWatchSeconds; // @synthesize antiSceneTotalWatchSeconds=_antiSceneTotalWatchSeconds;
@property(retain, nonatomic) WCFinderLimitAccessAuthorizationModel *authorizationModel; // @synthesize authorizationModel=_authorizationModel;
@property(retain, nonatomic) MMLimitedModeAuthorizationUtilLogic *authorizationLogic; // @synthesize authorizationLogic=_authorizationLogic;
@property(nonatomic) _Bool enableShowShareRelatedWhenYoungContentLimit; // @synthesize enableShowShareRelatedWhenYoungContentLimit=_enableShowShareRelatedWhenYoungContentLimit;
@property(nonatomic) unsigned long long lastInFinderTimeStamp; // @synthesize lastInFinderTimeStamp=_lastInFinderTimeStamp;
@property(nonatomic) unsigned long long lastLiftCurfewTimeStamp; // @synthesize lastLiftCurfewTimeStamp=_lastLiftCurfewTimeStamp;
@property(nonatomic) unsigned long long antiAddictPassSeconds; // @synthesize antiAddictPassSeconds=_antiAddictPassSeconds;
@property(nonatomic) unsigned long long antiAddictInterval; // @synthesize antiAddictInterval=_antiAddictInterval;
@property(nonatomic) long long finderLimitedModeConfig; // @synthesize finderLimitedModeConfig=_finderLimitedModeConfig;
@property(nonatomic) _Bool openShareListFeedsIgnoreLimited; // @synthesize openShareListFeedsIgnoreLimited=_openShareListFeedsIgnoreLimited;
@property(nonatomic) _Bool checkAntiVCIsShowing; // @synthesize checkAntiVCIsShowing=_checkAntiVCIsShowing;
@property(nonatomic) __weak id <WCFinderLimitedModeMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAgreenAuthorization:(id)arg1 agreenAuthorizationInfo:(id)arg2;
- (void)onVerifyCancelWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessAndAnimationEndedWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)startQuestAccessFeedAuthorizationWithContentVM:(id)arg1 bizKey:(id)arg2 currentNavController:(id)arg3;
- (void)startQuestAccessFeedAuthorizationWithModel:(id)arg1;
- (_Bool)checkWhetherLimitedByFuncFlag:(unsigned long long)arg1 paramsModel:(id)arg2;
- (unsigned long long)getTotalWatchSecondsCheckInterval:(_Bool)arg1;
- (void)clearRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)resetCacheAntiSceneTotalWatchSeconds;
- (void)resetCacheAntiAddictPassSeconds;
- (id)initWithPassSeconds:(unsigned long long)arg1 lastLiftCurfewTimeStamp:(unsigned long long)arg2 antiSceneTotalWatchSeconds:(unsigned long long)arg3 dynamicConfigModel:(id)arg4;
- (long long)getAntiAddictStyle;
- (_Bool)triggerAntiAddictCheckLogic:(unsigned long long)arg1 fromVC:(id)arg2 checkViewWillAppearBlock:(CDUnknownBlockType)arg3 checkViewDidAppearBlock:(CDUnknownBlockType)arg4 checkVerifySucBlock:(CDUnknownBlockType)arg5 checkViewExitBlock:(CDUnknownBlockType)arg6 checkViewForbidShowBlock:(CDUnknownBlockType)arg7 controlExitState:(_Bool)arg8;
- (void)resetAntiAddictPassSeconds;
- (_Bool)_isTimeToCheckAntiAddictLogic:(long long)arg1 scene:(unsigned long long)arg2 fromVC:(id)arg3 checkViewWillAppearBlock:(CDUnknownBlockType)arg4 checkViewDidAppearBlock:(CDUnknownBlockType)arg5 checkVerifySucBlock:(CDUnknownBlockType)arg6 checkViewExitBlock:(CDUnknownBlockType)arg7 checkViewForbidShowBlock:(CDUnknownBlockType)arg8 controlExitState:(_Bool)arg9;
- (_Bool)_checkFromVCCanShowAntiAddict:(id)arg1;
- (_Bool)_shouldCheckAntiAddictByCurfew;
- (void)_updateAntiSceneTotalWatchSeconds;
- (void)limitedAgreeAuthorization:(id)arg1;
- (void)limitedModeChanged:(_Bool)arg1;
- (void)_updateAntiAddictPassSeconds;
- (void)updateAntiTimeDatas;
- (void)updateLastInFinderTimeStamp;
- (void)leaveAntiScene;
- (void)enterAntiScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

