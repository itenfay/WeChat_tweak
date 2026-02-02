//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCPayOverseaBaseCgiDelegate <NSObject>
- (void)onWCPayOverseaBaseCgiErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaBaseCgiReturnWithErrorType:(int)arg1 ErrorMsg:(NSString *)arg2 Dictionary:(NSDictionary *)arg3;
@end

