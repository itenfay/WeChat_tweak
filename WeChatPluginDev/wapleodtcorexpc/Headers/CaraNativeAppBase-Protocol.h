//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol CaraNativeAppBase <NSObject>

@optional
- (_Bool)isDebugging;
- (optional_8fbbe2b2)kitchenStringValue:(NSString *)arg1;
- (optional_568b6bb2)kitchenFloatValue:(NSString *)arg1;
- (optional_3baeb69b)kitchenIntValue:(NSString *)arg1;
- (optional_a953c506)kitchenBoolValue:(NSString *)arg1;
- (optional_cf1cf573)packageServerData:(int)arg1;
- (_Bool)isForeground;
- (NSString *)exptValue:(NSString *)arg1;
- (double)serverNow;
- (void)reportKV:(int)arg1 content:(NSString *)arg2;
- (NSString *)documentUser;
@end

