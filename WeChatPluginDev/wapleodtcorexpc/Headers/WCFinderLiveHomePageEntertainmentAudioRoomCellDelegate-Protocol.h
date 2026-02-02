//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderLiveFeedGenericCdnCellDelegate-Protocol.h"

@class WCFinderContact, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageEntertainmentAudioRoomCell;

@protocol WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate <WCFinderLiveFeedGenericCdnCellDelegate>

@optional
- (void)onEntertainmentAudioRoomCellTeamUpListClickUnoccupiedSeat:(WCFinderLiveHomePageEntertainmentAudioRoomCell *)arg1;
- (void)onClickCoverContact:(WCFinderContact *)arg1 feedVM:(WCFinderLiveGenericFeedVM *)arg2;
@end

