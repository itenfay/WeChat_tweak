//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderLiveGenericFeedVM, WCFinderLiveStreamElementModel;

@protocol WCFinderLiveHomePageNoticeCellDelegate <NSObject>

@optional
- (void)onShowConcertTicketAction:(WCFinderLiveStreamElementModel *)arg1;
- (void)onHomePageNoticeAction:(_Bool)arg1 feedVM:(WCFinderLiveGenericFeedVM *)arg2;
@end

