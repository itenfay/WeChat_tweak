//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMLimitedModeSetPasswordLogicDelegate;

@interface MMLimitedModeSetPasswordLogic : NSObject
{
    id <MMLimitedModeSetPasswordLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLimitedModeSetPasswordLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSetTeenagerModePwdResp:(id)arg1;
- (void)setPasswordType:(unsigned int)arg1 withCode:(id)arg2 name:(id)arg3 idNumber:(id)arg4 ticket:(id)arg5;
- (void)clearPasswordWithTicket:(id)arg1;
- (void)resetPassword:(id)arg1 withTicket:(id)arg2;
- (void)setPassword:(id)arg1 withName:(id)arg2 idNumber:(id)arg3;
- (void)setPassword:(id)arg1 type:(int)arg2;

@end

