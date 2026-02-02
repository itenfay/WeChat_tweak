//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, SetWalletEntranceBalanceSwitchResp;

@protocol WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate <NSObject>
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiResp:(SetWalletEntranceBalanceSwitchResp *)arg1;
@end

