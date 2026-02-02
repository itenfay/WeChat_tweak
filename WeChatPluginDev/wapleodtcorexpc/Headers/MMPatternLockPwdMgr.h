//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPatternLockBufferData, NSString;

@interface MMPatternLockPwdMgr
{
    _Bool _isLocalVerify;
    _Bool _isNeedVerifyPwd;
    _Bool _isCloseViaToken;
    int _userRegFlag;
    unsigned int _m_payCardListTag;
    MMPatternLockBufferData *_lockBuffer;
}

- (void).cxx_destruct;
@property unsigned int m_payCardListTag; // @synthesize m_payCardListTag=_m_payCardListTag;
@property(nonatomic) _Bool isCloseViaToken; // @synthesize isCloseViaToken=_isCloseViaToken;
@property(nonatomic) int userRegFlag; // @synthesize userRegFlag=_userRegFlag;
@property(nonatomic) _Bool isNeedVerifyPwd; // @synthesize isNeedVerifyPwd=_isNeedVerifyPwd;
@property(nonatomic) _Bool isLocalVerify; // @synthesize isLocalVerify=_isLocalVerify;
@property(retain, nonatomic) MMPatternLockBufferData *lockBuffer; // @synthesize lockBuffer=_lockBuffer;
- (void)onWCPayWalletUpdateDidCall;
- (void)OnPayCardListChanged:(id)arg1;
- (id)getViewController;
- (void)onProfileChange;
- (void)handlePatternLockCheckStatusBack:(id)arg1;
- (void)onOpPatternLockResponseOKWithOpCmd:(unsigned int)arg1;
- (void)onOpPatternLockResponseErrorWithOpCmd:(unsigned int)arg1;
- (void)onGetOpPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetRegisterNewPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkPatternLockStatusViaSvr;
- (id)getBufferKeyDataWithVersion:(unsigned int)arg1;
- (int)verifyLockInfoIsValid;
- (int)verifyBufferDataIsInvalid;
- (void)sendPatternLockOpRequestWithCmdID:(unsigned int)arg1 oldHash:(id)arg2 newHash:(id)arg3;
- (_Bool)updateBufferDataWithSvrBuffer:(id)arg1;
- (unsigned long long)getPatternLockTimeInterval;
- (id)getPatternSvrHash;
- (_Bool)isNeedSvrVerify;
- (void)verifyPatternLockPwdWithPatternHash:(id)arg1;
- (void)modifyPatternLockPwdWithOldPatternHash:(id)arg1 andNewHash:(id)arg2;
- (void)closePatternLockPwdWithUserToken:(id)arg1;
- (void)closePatternLockPwdWithPatternHash:(id)arg1;
- (void)setupNewPatternLockPwdWithUserToken:(id)arg1 andPatternHash:(id)arg2;
- (unsigned long long)isPatternLockSetup;
- (_Bool)detectLocalBufferData;
- (void)initData;
- (void)stopPayCardListLogic;
- (id)init;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

