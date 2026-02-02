//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayJSGetEncryptHKPasswdLogicDelegate <NSObject>
- (void)onGetEncryptHKPasswdFail:(_Bool)arg1;
- (void)onGetEncryptHKPasswdSucc:(NSString *)arg1 signature:(NSString *)arg2;
@end

