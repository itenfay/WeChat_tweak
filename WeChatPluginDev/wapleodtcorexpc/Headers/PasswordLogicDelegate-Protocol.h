//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PasswordLogic;

@protocol PasswordLogicDelegate <NSObject>

@optional
- (void)passwordLogicPause:(PasswordLogic *)arg1;
- (void)passwordLogicStart:(PasswordLogic *)arg1;
- (void)passwordLogicCancel:(PasswordLogic *)arg1;
- (void)unknownFail:(PasswordLogic *)arg1;
- (void)checkHaveNotSetPassword:(PasswordLogic *)arg1;
- (void)checkHaveSetPassword:(PasswordLogic *)arg1;
- (void)setPasswordFail:(PasswordLogic *)arg1;
- (void)setPasswordOK:(PasswordLogic *)arg1;
- (void)verifyPasswordFail:(PasswordLogic *)arg1;
- (void)verifyPasswordError:(PasswordLogic *)arg1;
- (void)verifyPasswordOK:(NSString *)arg1 logic:(PasswordLogic *)arg2;
@end

