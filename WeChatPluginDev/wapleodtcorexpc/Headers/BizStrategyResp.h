//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdvertisementExtInfo, AppMsgCoverPreloadInfo, AudioFeedsInfo, BaseResponse, BizFinderLiveControlInfo, BizMsgReSortConfig, BizMsgResortV2ControlInfo, BizPersonalCenterCellList, BizReportConfig, BizStrategyControlInfo, BizWxaPersonalCenter, BoxSearchSettingInfo, FinderLiveAutoplayConfig, MenuEntryListInfo, OftenReadBarFeedsInfo, PaySubscribeInfo, ProfilePreloadInfo, PublisherNewMsgInfo, RecommendFeedsInfo, RedPacketCoverConfig, TimelineFinderInfo, TimelineSettingInfo, TimelineTitlePosConfig, VideoChannelControlInfo;

@interface BizStrategyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AdvertisementExtInfo *adExtInfo; // @dynamic adExtInfo;
@property(retain, nonatomic) AudioFeedsInfo *audioFeedsInfo; // @dynamic audioFeedsInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BizMsgResortV2ControlInfo *bizMsgResortV2ControlInfo; // @dynamic bizMsgResortV2ControlInfo;
@property(retain, nonatomic) BizReportConfig *bizReportConfig; // @dynamic bizReportConfig;
@property(retain, nonatomic) BoxSearchSettingInfo *boxSearchSettingInfo; // @dynamic boxSearchSettingInfo;
@property(retain, nonatomic) VideoChannelControlInfo *channelInfo; // @dynamic channelInfo;
@property(retain, nonatomic) BizStrategyControlInfo *controlInfo; // @dynamic controlInfo;
@property(retain, nonatomic) AppMsgCoverPreloadInfo *coverPreloadInfo; // @dynamic coverPreloadInfo;
@property(nonatomic) int ecsNotifyStrategy; // @dynamic ecsNotifyStrategy;
@property(retain, nonatomic) FinderLiveAutoplayConfig *finderLiveAutoplayConfig; // @dynamic finderLiveAutoplayConfig;
@property(retain, nonatomic) BizFinderLiveControlInfo *finderLiveInfo; // @dynamic finderLiveInfo;
@property(retain, nonatomic) MenuEntryListInfo *menuEntryListInfo; // @dynamic menuEntryListInfo;
@property(retain, nonatomic) OftenReadBarFeedsInfo *oftenReadBarFeedsInfo; // @dynamic oftenReadBarFeedsInfo;
@property(retain, nonatomic) RecommendFeedsInfo *recFeedsInfo; // @dynamic recFeedsInfo;
@property(retain, nonatomic) RedPacketCoverConfig *redPacketCoverConfig; // @dynamic redPacketCoverConfig;
@property(retain, nonatomic) TimelineFinderInfo *timelineFinderInfo; // @dynamic timelineFinderInfo;
@property(retain, nonatomic) TimelineSettingInfo *timelineSettingInfo; // @dynamic timelineSettingInfo;
@property(retain, nonatomic) TimelineTitlePosConfig *timelineTitlePosConfig; // @dynamic timelineTitlePosConfig;
@property(retain, nonatomic) BizMsgReSortConfig *userBizMsgReSortConfig; // @dynamic userBizMsgReSortConfig;
@property(retain, nonatomic) BizPersonalCenterCellList *userBizPersonalCenterCellList; // @dynamic userBizPersonalCenterCellList;
@property(retain, nonatomic) PaySubscribeInfo *userPaySubscribeInfo; // @dynamic userPaySubscribeInfo;
@property(retain, nonatomic) ProfilePreloadInfo *userProfilePreloadInfo; // @dynamic userProfilePreloadInfo;
@property(retain, nonatomic) PublisherNewMsgInfo *userPublisherInfo; // @dynamic userPublisherInfo;
@property(retain, nonatomic) BizWxaPersonalCenter *userWxaBizPersonalCenter; // @dynamic userWxaBizPersonalCenter;

@end

