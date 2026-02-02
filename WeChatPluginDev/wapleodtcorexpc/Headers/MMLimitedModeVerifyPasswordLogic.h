//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMLimitedModeVerifyPasswordLogicDelegate;

@interface MMLimitedModeVerifyPasswordLogic : NSObject
{
    id <MMLimitedModeVerifyPasswordLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLimitedModeVerifyPasswordLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onVerifyPasswordResp:(id)arg1;
- (void)onCheckPasswordExistResp:(id)arg1;
- (void)verifyPassword:(id)arg1;
- (void)checkPasswordExist;

@end

