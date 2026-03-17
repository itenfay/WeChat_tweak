//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, NSString;

@protocol MMKUserService <NSObject>
- (void)updateLqtBalance:(long long)arg1;
- (void)updateBalance:(long long)arg1;
- (long long)localBalance;
- (NSString *)city;
- (NSString *)province;
- (void)updateUserInfo:(MMITransmitKvData *)arg1;
@end

