//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CheckAndUseTimeLimitPromoResp, NSString;

@protocol WCRedEnvelopesCheckAndUseTimeLimitPromoCgiDelegate <NSObject>
- (void)oWCRedEnvelopesCheckAndUseTimeLimitPromoCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesCheckAndUseTimeLimitPromoCgiResponseOK:(CheckAndUseTimeLimitPromoResp *)arg1;
@end

