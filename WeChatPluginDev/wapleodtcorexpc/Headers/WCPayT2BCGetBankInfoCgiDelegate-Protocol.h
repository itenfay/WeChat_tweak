//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetBankInfoRes, NSString;

@protocol WCPayT2BCGetBankInfoCgiDelegate <NSObject>
- (void)OnWCPayT2BCGetBankInfoCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCGetBankInfoCgiResponseOK:(GetBankInfoRes *)arg1;
@end

