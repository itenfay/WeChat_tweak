//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol PhoneAuthManagePhoneLogicOperationDelegate <NSObject>

@optional
- (void)savePhoneSuccess:(NSString *)arg1 saveFlag:(_Bool)arg2;
- (void)confirmCodeVerifyFailedWithErrorMsg:(NSString *)arg1;
- (void)confirmCodeVerifySuccess;
- (void)confirmCodeRequestedFailedWithErrorMsg:(NSString *)arg1;
- (void)confirmCodeRequestedSuccess;
@end

