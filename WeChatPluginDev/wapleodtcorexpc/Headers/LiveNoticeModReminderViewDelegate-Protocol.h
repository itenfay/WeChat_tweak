//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo;

@protocol LiveNoticeModReminderViewDelegate <NSObject>

@optional
- (void)onModReminderViewSelectWithLiveNoticeInfo:(FinderLiveNoticeInfo *)arg1 selectType:(int)arg2;
- (void)onModReminderViewCompleteWithLiveNoticeInfo:(FinderLiveNoticeInfo *)arg1 selectType:(int)arg2;
@end

