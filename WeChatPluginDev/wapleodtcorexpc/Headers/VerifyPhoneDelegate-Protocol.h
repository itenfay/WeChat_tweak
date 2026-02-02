//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol VerifyPhoneDelegate <NSObject>

@optional
- (void)loginByPhoneVerifiedWithUserName:(NSString *)arg1 ticket:(NSString *)arg2;
- (void)loginByPhoneVerifiedWithUserName:(NSString *)arg1 pwd:(NSString *)arg2;
- (void)bindPhoneReturn;
@end

