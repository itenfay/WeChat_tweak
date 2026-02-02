//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveNoticeListInfo, NSString;

@interface FetchFinderMemberShipDetailInfoResponse_VisitorMemberInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *finderMemberTicket; // @dynamic finderMemberTicket;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @dynamic liveNoticeListInfo;
@property(nonatomic) unsigned int totalDynamicNum; // @dynamic totalDynamicNum;
@property(nonatomic) unsigned int totalFeedNum; // @dynamic totalFeedNum;
@property(nonatomic) unsigned int totalLiveNum; // @dynamic totalLiveNum;
@property(nonatomic) unsigned int unreadDynamicNum; // @dynamic unreadDynamicNum;
@property(nonatomic) unsigned int unreadFeedNum; // @dynamic unreadFeedNum;
@property(nonatomic) unsigned int unreadLiveNum; // @dynamic unreadLiveNum;

@end

