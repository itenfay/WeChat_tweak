//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UICollectionViewCell, WCFinderContact, WCFinderFeedFlowView, WCFinderLiveEntertainmentChannelsTagStreamAdapter, WCFinderLiveGenericFeedVM, WCFinderLiveHomePageEntertainmentAudioRoomCell;
@protocol WCFinderLiveFeedGenericCellPlayProtocol;

@protocol WCFinderLiveEntertainmentChannelsTagStreamAdapterDelegate <NSObject>

@optional
- (void)onLiveEntertainmentChannelsTagStream:(WCFinderLiveEntertainmentChannelsTagStreamAdapter *)arg1 forwardAction:(WCFinderLiveGenericFeedVM *)arg2;
- (void)onLiveEntertainmentChannelsTagStream:(WCFinderLiveEntertainmentChannelsTagStreamAdapter *)arg1 selectElementVM:(WCFinderLiveGenericFeedVM *)arg2 playableCell:(UICollectionViewCell<WCFinderLiveFeedGenericCellPlayProtocol> *)arg3 indexPath:(NSIndexPath *)arg4;
- (void)onLiveEntertainmentChannelsTagStream:(WCFinderLiveEntertainmentChannelsTagStreamAdapter *)arg1 clickContact:(WCFinderContact *)arg2 feedVM:(WCFinderLiveGenericFeedVM *)arg3;
- (void)onLiveEntertainmentChannelsTagStreamAudioRoomClickUnoccupiedSeat:(WCFinderLiveHomePageEntertainmentAudioRoomCell *)arg1;
- (void)onLiveEntertainmentChannelsTagStreamDidScroll:(WCFinderFeedFlowView *)arg1;
- (void)onLiveEntertainmentChannelsTagStreamDidEndScrolling:(WCFinderFeedFlowView *)arg1;
@end

