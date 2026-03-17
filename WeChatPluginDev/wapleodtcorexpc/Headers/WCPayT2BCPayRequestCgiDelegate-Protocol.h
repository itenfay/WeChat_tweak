//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransToBankCardPayRes;

@protocol WCPayT2BCPayRequestCgiDelegate <NSObject>
- (void)OnWCPayT2BCPayRequestCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCPayRequestCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2 response:(TransToBankCardPayRes *)arg3;
- (void)OnWCPayT2BCPayRequestCgiResponseOK:(TransToBankCardPayRes *)arg1;
@end

