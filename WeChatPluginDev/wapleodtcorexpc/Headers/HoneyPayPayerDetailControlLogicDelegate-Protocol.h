//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HoneyPayPayerDetailControlLogic;

@protocol HoneyPayPayerDetailControlLogicDelegate <NSObject>

@optional
- (void)payerDetailControlLogicDidRemoveDetailVC:(HoneyPayPayerDetailControlLogic *)arg1;
- (void)payerDetailControlLogicDidModifyMaximumAmount:(HoneyPayPayerDetailControlLogic *)arg1;
- (void)payerDetailControlLogicDidUnbindCard:(HoneyPayPayerDetailControlLogic *)arg1;
@end

