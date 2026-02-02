//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class APCheckPwd, NSString;

@protocol APCheckPwdDelegate <NSObject>
- (void)didFailedWithApCheckPwd:(APCheckPwd *)arg1 errorMsg:(NSString *)arg2;
- (void)gotoApPortalWithApCheckPwd:(APCheckPwd *)arg1 tid:(NSString *)arg2 openId:(NSString *)arg3 appid:(NSString *)arg4;
- (void)gotoApAuthWithApCheckPwd:(APCheckPwd *)arg1 protolType:(unsigned int)arg2;
- (void)didSuccessOfApCheckPwd:(APCheckPwd *)arg1;
- (void)didRunningOfApCheckPwd:(APCheckPwd *)arg1;
- (void)didReadyWithApCheckPwd:(APCheckPwd *)arg1 protolType:(unsigned int)arg2;
@end

