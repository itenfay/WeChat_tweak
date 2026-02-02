//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WABizF2FPayCheckResp;

@protocol WABizF2FPayCheckCgiDelegate <NSObject>
- (void)onWABizPayCheckCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizPayCheckCgiResponseOK:(WABizF2FPayCheckResp *)arg1;
@end

