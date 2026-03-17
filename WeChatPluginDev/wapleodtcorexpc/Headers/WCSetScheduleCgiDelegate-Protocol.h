//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCScheduleItem;

@protocol WCSetScheduleCgiDelegate <NSObject>

@optional
- (void)onCgiAddOnceRemind:(WCScheduleItem *)arg1 success:(_Bool)arg2 errTips:(NSString *)arg3;
- (void)onCgiDeleteSchedule:(WCScheduleItem *)arg1 success:(_Bool)arg2 errTips:(NSString *)arg3;
- (void)onCgiModSchedule:(WCScheduleItem *)arg1 success:(_Bool)arg2 errTips:(NSString *)arg3;
- (void)onCgiAddSchedule:(WCScheduleItem *)arg1 success:(_Bool)arg2 errTips:(NSString *)arg3;
@end

