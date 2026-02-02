//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveNoticeListInfo, NSString;

@interface FetchFinderMemberShipDetailInfoResponse_AuthorMemberInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @dynamic liveNoticeListInfo;
@property(retain, nonatomic) NSString *memberCenterUrl; // @dynamic memberCenterUrl;
@property(nonatomic) unsigned long long memberCount; // @dynamic memberCount;
@property(nonatomic) unsigned int totalDynamicNum; // @dynamic totalDynamicNum;
@property(nonatomic) unsigned int totalFeedNum; // @dynamic totalFeedNum;
@property(nonatomic) unsigned int totalLiveNum; // @dynamic totalLiveNum;
@property(nonatomic) unsigned int unreadDynamicNum; // @dynamic unreadDynamicNum;

@end

