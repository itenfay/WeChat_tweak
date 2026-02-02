//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LoginUserInfo, NSMutableArray, NSMutableDictionary, NSString;

@interface LoginInfo : NSObject
{
    unsigned int _m_uiLogoutType;
    NSMutableArray *_m_arrUserInfos;
    NSMutableDictionary *_m_dicUserInfos;
    LoginUserInfo *_m_curUserInfo;
}

+ (void)updateToLocalInfo:(id)arg1;
+ (_Bool)updateUserInfo:(id)arg1 fromLocalInfo:(id)arg2;
+ (id)sharedLoginInfo;
+ (id)getLoginInfoPath;
+ (void)initialize;
+ (void)PBArrayAdd_m_uiLogoutType;
+ (void)PBArrayAdd_m_arrUserInfos;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiLogoutType; // @synthesize m_uiLogoutType=_m_uiLogoutType;
@property(retain, nonatomic) LoginUserInfo *m_curUserInfo; // @synthesize m_curUserInfo=_m_curUserInfo;
@property(retain, nonatomic) NSMutableDictionary *m_dicUserInfos; // @synthesize m_dicUserInfos=_m_dicUserInfos;
@property(retain, nonatomic) NSMutableArray *m_arrUserInfos; // @synthesize m_arrUserInfos=_m_arrUserInfos;
- (void)reportSwitchAccountWithOpCode:(unsigned int)arg1 userName:(id)arg2;
- (void)removeLoginUserInfo:(id)arg1;
- (_Bool)checkAndRevise;
- (void)updateLastLoginUserInfo:(id)arg1 fromSwitch:(_Bool)arg2;
- (id)getCurLoginUserInfos;
- (id)getLoginInfo:(id)arg1;
- (void)saveLoginInfo;
- (id)curStateDescription;
- (void)setLogoutSwitch:(_Bool)arg1;
- (_Bool)isLogoutSwitch;
- (void)continueInit;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

