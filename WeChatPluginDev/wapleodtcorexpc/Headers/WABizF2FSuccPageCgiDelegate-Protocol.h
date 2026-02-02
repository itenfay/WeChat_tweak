//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WABizF2FSuccPageResp;

@protocol WABizF2FSuccPageCgiDelegate <NSObject>
- (void)onWABizF2FSuccPageCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizF2FSuccPageCgiResponseOK:(WABizF2FSuccPageResp *)arg1;
@end

