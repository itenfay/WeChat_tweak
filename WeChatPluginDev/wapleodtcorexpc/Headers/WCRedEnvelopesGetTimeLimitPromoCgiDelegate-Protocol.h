//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetTimeLimitPromoResp, NSString;

@protocol WCRedEnvelopesGetTimeLimitPromoCgiDelegate <NSObject>
- (void)onWCRedEnvelopesGetTimeLimitPromoCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetTimeLimitPromoCgiResponseOK:(GetTimeLimitPromoResp *)arg1;
@end

