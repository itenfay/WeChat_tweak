//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayOverseaGetTransferNameResponse;

@protocol WCPayOverseaGetTransferNameCgiDelegate <NSObject>
- (void)onWCPayOverseaGetTransferNameResponseCgiError:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayOverseaGetTransferNameResponseBizError:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayOverseaGetTransferNameResponseOK:(WCPayOverseaGetTransferNameResponse *)arg1;
@end

