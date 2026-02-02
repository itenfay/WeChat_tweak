//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLimitedModeVerifyPasswordLogicDelegate <NSObject>

@optional
- (void)onVerifyPasswordRetTicket:(NSString *)arg1 needShowAlert:(_Bool)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
- (void)onCheckPasswordExist:(_Bool)arg1 isNeverUse:(_Bool)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
@end

