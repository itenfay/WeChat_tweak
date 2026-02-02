//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, QueryWalletEntranceBalanceSwitchResp;

@protocol WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate <NSObject>
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiResp:(QueryWalletEntranceBalanceSwitchResp *)arg1 fromServer:(_Bool)arg2;
@end

