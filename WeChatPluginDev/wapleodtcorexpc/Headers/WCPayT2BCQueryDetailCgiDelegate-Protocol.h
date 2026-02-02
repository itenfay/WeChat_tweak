//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, QueryDetailResp;

@protocol WCPayT2BCQueryDetailCgiDelegate <NSObject>
- (void)OnWCPayT2BCQueryDetailCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCQueryDetailCgiResponseOK:(QueryDetailResp *)arg1;
@end

