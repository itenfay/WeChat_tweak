//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayTransferMoneyAntiCheatButtonDelegate <NSObject>

@optional
- (void)onWCPayAntiCheatButtonClickWithH5:(NSString *)arg1;
- (void)onWCPayAntiCheatButtonClickWithNative:(NSString *)arg1;
- (void)onWCPayAntiCheatButtonClickWithMiniProgram:(NSString *)arg1 path:(NSString *)arg2;
- (void)onWCPayAntiCheatButtonClick:(NSString *)arg1 jumpType:(unsigned int)arg2 username:(NSString *)arg3 path:(NSString *)arg4;
@end

