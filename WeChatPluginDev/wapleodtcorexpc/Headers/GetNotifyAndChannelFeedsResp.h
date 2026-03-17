//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString, TimelineNotifyInfo;

@class WXPBGeneratedMessage;

@interface GetNotifyAndChannelFeedsResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *channelFeeds; // @dynamic channelFeeds;
@property(nonatomic) _Bool isEntryOpen; // @dynamic isEntryOpen;
@property(retain, nonatomic) TimelineNotifyInfo *timelineNotifyInfo; // @dynamic timelineNotifyInfo;

@end

