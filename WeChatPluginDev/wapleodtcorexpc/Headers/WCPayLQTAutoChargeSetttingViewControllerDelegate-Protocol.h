//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TimeSpan;

@protocol WCPayLQTAutoChargeSetttingViewControllerDelegate <NSObject>
- (void)onUserModifyAutoChargeTime:(TimeSpan *)arg1;
- (void)onUserCloseAutoChargeSetting;
- (void)onUserOpenAutoChargeSetting;
- (void)onChargeSettingViewControllerBack;
@end

