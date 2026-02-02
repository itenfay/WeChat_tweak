//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAdPickerResultInfo;

@protocol WCAdWheelPickerLogicDelegate <NSObject>
- (void)onCancelButtonClick;
- (void)onConfirmButtonClickWithResultInfo:(WCAdPickerResultInfo *)arg1;
@end

