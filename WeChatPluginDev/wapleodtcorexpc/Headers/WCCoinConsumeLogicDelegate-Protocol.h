//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCoinConsumeError, WCCoinConsumeLogic, WCCoinConsumeSuccessResult;

@protocol WCCoinConsumeLogicDelegate <NSObject>
- (void)consumeDidCancel:(WCCoinConsumeLogic *)arg1;
- (void)consumeDidFail:(WCCoinConsumeLogic *)arg1 error:(WCCoinConsumeError *)arg2;
- (void)consumeDidSuccess:(WCCoinConsumeLogic *)arg1 result:(WCCoinConsumeSuccessResult *)arg2;
@end

