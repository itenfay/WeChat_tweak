//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCScheduleItem;

@protocol WCScheduleMgrExt <NSObject>

@optional
- (void)onScheduleListUpdate;
- (void)onScheduleModifyFail:(WCScheduleItem *)arg1 errTips:(NSString *)arg2;
- (void)onScheduleItemRemindChange:(WCScheduleItem *)arg1;
- (void)onScheduleRemoveItem:(WCScheduleItem *)arg1;
- (void)onScheduleAppendItem:(WCScheduleItem *)arg1;
@end

