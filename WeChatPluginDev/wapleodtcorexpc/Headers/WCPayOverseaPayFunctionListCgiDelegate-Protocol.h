//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayOverseaPayFunctionListRespObject;

@protocol WCPayOverseaPayFunctionListCgiDelegate <NSObject>
- (void)onWCPayOverseaPayFunctionCgiOkWithRespObject:(WCPayOverseaPayFunctionListRespObject *)arg1;
- (void)onWCPayOverseaPayFunctionCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(NSString *)arg2;
@end

