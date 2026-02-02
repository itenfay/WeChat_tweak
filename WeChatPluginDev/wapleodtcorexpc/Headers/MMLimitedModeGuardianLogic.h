//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMLimitedModeGuardianLogicDelegate;

@interface MMLimitedModeGuardianLogic : NSObject
{
    id <MMLimitedModeGuardianLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLimitedModeGuardianLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onAgreeTeenagerModeAuthorization:(id)arg1;
- (void)agreeTeenagerModeAuthorization:(id)arg1 businessKey:(id)arg2 businessType:(unsigned int)arg3 requestAuthorizationMsgid:(unsigned long long)arg4;
- (void)onUnBindTeenagerModeGuardian:(id)arg1;
- (void)unbindTeenagerModeGuardian:(id)arg1;
- (void)onBindTeenagerModeGuardian:(id)arg1;
- (void)bindTeenagerModeGuardian:(id)arg1 ticket:(id)arg2 bindScene:(unsigned long long)arg3;
- (void)onGetTeenagerModePreBindGuardianInfo:(id)arg1;
- (void)getTeenagerModePreBindGuardianInfo:(id)arg1 bindScene:(unsigned long long)arg2;

@end

