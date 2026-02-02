//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCoinBuyCoinLogic;

@protocol WCCoinBuyCoinLogicDelegate <NSObject>
- (void)buyCoinCancel:(WCCoinBuyCoinLogic *)arg1;
- (void)buyCoinFail:(WCCoinBuyCoinLogic *)arg1;
- (void)buyCoinSuccess:(WCCoinBuyCoinLogic *)arg1;
@end

