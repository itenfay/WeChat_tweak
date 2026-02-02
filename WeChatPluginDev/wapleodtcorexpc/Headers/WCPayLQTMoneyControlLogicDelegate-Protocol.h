//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayLQTMoneyControlLogicDelegate <NSObject>

@optional
- (void)onLQTMoneyControlLogicUpdateTraceInfo:(NSString *)arg1;
- (void)onLQTMoneyControlLogicNeedToRefreshBalanceDetail;
- (void)onLQTMoneyControlLogicNeedToRefreshLQTDetail;
- (void)onLQTMoneyControlLogicStop:(_Bool)arg1;
@end

