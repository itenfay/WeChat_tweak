//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray, NSString;

@protocol SettingModifyAliasLogicDelegate <MMUIViewControllerDelegate>

@optional
- (void)OnModifyAliasWithResult:(unsigned int)arg1 errorMsg:(NSString *)arg2;
- (void)OnCheckAliasValidWithResult:(unsigned int)arg1 retCode:(int)arg2 errorMsg:(NSString *)arg3;
- (void)onCheckCanSetAlias:(NSArray *)arg1 verifyType:(unsigned int)arg2 verifyUrl:(NSString *)arg3 ticket:(NSString *)arg4 withResult:(unsigned int)arg5 errorMsg:(NSString *)arg6;
@end

