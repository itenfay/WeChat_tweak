//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetBankResourceRsp, NSString;

@protocol WCPayGetBankResourceCgiDelegate <NSObject>
- (void)OnGetBankResourceResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetBankResourceResponseOK:(GetBankResourceRsp *)arg1;
@end

