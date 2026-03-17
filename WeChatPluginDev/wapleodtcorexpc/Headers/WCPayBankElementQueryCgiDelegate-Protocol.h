//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, WCPayCardBinInfo, WCPayGetUserExInfoCgiResponse;

@protocol WCPayBankElementQueryCgiDelegate <NSObject>
- (void)OnWCPayGetBankResource:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnWCPayGetBindingCardBin:(WCPayCardBinInfo *)arg1 AvailableBank:(NSArray *)arg2 userExInfoResponse:(WCPayGetUserExInfoCgiResponse *)arg3 Error:(NSError *)arg4;
@end

