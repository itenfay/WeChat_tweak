//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCScheduleItem;

@protocol WCScheduleLogicControllerDelegate <NSObject>

@optional
- (void)onWCScheduleItem:(WCScheduleItem *)arg1 cancelSuccess:(_Bool)arg2 errMsg:(NSString *)arg3;
- (void)onWCScheduleItem:(WCScheduleItem *)arg1 SetSuccess:(_Bool)arg2 ErrMsg:(NSString *)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleCancelDatePickerView;
@end

