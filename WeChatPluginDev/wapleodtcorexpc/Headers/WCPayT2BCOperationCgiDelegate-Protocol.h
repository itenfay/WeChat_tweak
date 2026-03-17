//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, OperationResp;

@protocol WCPayT2BCOperationCgiDelegate <NSObject>
- (void)OnWCPayT2BCOperationCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCOperationCgiResponseOK:(OperationResp *)arg1;
@end

