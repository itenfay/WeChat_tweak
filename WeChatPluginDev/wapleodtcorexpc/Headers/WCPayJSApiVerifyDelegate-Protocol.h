//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCPayJSApiVerifyDelegate <NSObject>
- (NSString *)getCurrentURL;
- (NSDictionary *)getParam;
- (void)onVerifyResult:(NSDictionary *)arg1;
@end

