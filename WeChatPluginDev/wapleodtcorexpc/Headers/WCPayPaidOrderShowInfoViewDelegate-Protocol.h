//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayPaidOrderShowInfoViewDelegate <NSObject>
- (void)onWCPayPaidOrderShowInfoViewClickWAApp:(NSString *)arg1 path:(NSString *)arg2;
- (void)onWCPayPaidOrderShowInfoViewClickUrl:(NSString *)arg1;
@end

