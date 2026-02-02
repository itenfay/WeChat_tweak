//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderAffRedDotBridge
{
}

- (void)disposeRedDotCtrlInfoByTipsUuid:(id)arg1 subReasonType:(unsigned long long)arg2;
- (void)disposeRedDotCtrlInfoByTipsUuid:(id)arg1;
- (id)getAllRedDotCtrlInfoAtPath:(id)arg1;
- (void)disposeGroupTipsWithGroupId:(id)arg1;
- (void)saveSelfUuidCtrlInfosDic;
- (id)getRedDotCtrlInfoWithRevokeId:(id)arg1;
- (void)revokeRedDotByViewFeedsIndex:(long long)arg1 commentScene:(int)arg2;
- (void)redDotInfoInvalidCheck;
- (_Bool)revokeRedDotPathInfo:(id)arg1 isOnlyWhiteList:(_Bool)arg2 whiteListTips:(id)arg3;
- (void)clearSameRevokeIdCtrlInfo:(id)arg1;
- (id)currentCtrlInfoAtPath:(id)arg1 ignoreNMFrequency:(_Bool)arg2;
- (id)currentCtrlInfoAtPath:(id)arg1;
- (unsigned long long)ctrlInfoTypeAtPath:(id)arg1;
- (id)currentShowInfoAtPath:(id)arg1;
- (unsigned long long)showInfoTypeAtPath:(id)arg1;
- (id)ctrlInfoWithTipsUuid:(id)arg1;
- (id)ctrlInfoWithType:(unsigned long long)arg1;
- (_Bool)updateWXRedDotInfo:(id)arg1;
- (void)clearSameTypeCtrlInfoType:(unsigned long long)arg1;
- (void)disposeRedDotIgnoreClearTypeAtPath:(id)arg1;
- (_Bool)disposeRedDotAtPath:(id)arg1 subReasonType:(unsigned long long)arg2;
- (_Bool)disposeRedDotAtPath:(id)arg1;
- (_Bool)shouldShowRedDotAtPath:(id)arg1;
- (void)addNewRedDotCtrlInfo:(id)arg1;
- (id)nativeCurrentUseFinderUsername;
- (void)handleFinderUsernameChangeLogic;
- (void)resetToDefaultUsername;
- (void)setCurrentUseFinderUsername:(id)arg1;
- (id)currentUseFinderUsername;
- (void)resetDataSourceByFinderUsername:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

