//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, WCPayGPMemberFillMoneyCell;

@protocol WCPayGPMemberFillMoneyCellDelegate <NSObject>
- (void)cellTextFieldKeyboardPressNextBtn:(CContact *)arg1;
- (void)cellTextFieldKeyboardPressPreviousBtn:(CContact *)arg1;
- (void)cellTextFieldDidEndEdittingWithCell:(WCPayGPMemberFillMoneyCell *)arg1 withContact:(CContact *)arg2 withValue:(double)arg3;
- (void)cellTextFieldDidChangeWithCell:(WCPayGPMemberFillMoneyCell *)arg1 withContact:(CContact *)arg2 withValue:(double)arg3;
- (void)cellTextFieldWillBeginEdittingWithCell:(WCPayGPMemberFillMoneyCell *)arg1 withContact:(CContact *)arg2;
- (_Bool)cellTextFieldShouldBeginEdittingWithCell:(WCPayGPMemberFillMoneyCell *)arg1 withContact:(CContact *)arg2;
@end

