//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CheckBankBindRes, NSString;

@protocol WCPayT2BCCheckBankBindCgiDelegate <NSObject>
- (void)OnWCPayT2BCCheckBankBindCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCCheckBankBindCgiResponseOK:(CheckBankBindRes *)arg1;
@end

