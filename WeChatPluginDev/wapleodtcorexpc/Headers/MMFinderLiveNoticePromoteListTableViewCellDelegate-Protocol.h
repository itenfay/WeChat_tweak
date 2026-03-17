//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo, MMFinderLiveNoticePromoteListTableViewCell;

@protocol MMFinderLiveNoticePromoteListTableViewCellDelegate <NSObject>

@optional
- (void)onAddButtonTappedForCell:(MMFinderLiveNoticePromoteListTableViewCell *)arg1 liveNotice:(FinderLiveNoticeInfo *)arg2;
@end

