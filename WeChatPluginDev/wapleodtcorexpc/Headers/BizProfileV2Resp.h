//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BizAccountInfo, BizBaseInfo, BizBrandInfo, BizMessageList, BizNameCard, BizProfileV2Resp_FinderLiveNoticeExtInfo, BizServiceInfo, BizTopicList, BizVideoFinderInfo, NSMutableArray, NSString, ProfileSetting, WxaEcEntranceInfo;

@interface BizProfileV2Resp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizAccountInfo *accountInfo; // @dynamic accountInfo;
@property(nonatomic) int audioTabType; // @dynamic audioTabType;
@property(retain, nonatomic) BizBaseInfo *baseInfo; // @dynamic baseInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BizBrandInfo *brandInfo; // @dynamic brandInfo;
@property(nonatomic) _Bool finderVideoIsBizMode; // @dynamic finderVideoIsBizMode;
@property(nonatomic) unsigned int funcFlag; // @dynamic funcFlag;
@property(retain, nonatomic) NSMutableArray *funcFlagWording; // @dynamic funcFlagWording;
@property(retain, nonatomic) NSString *ipwording; // @dynamic ipwording;
@property(retain, nonatomic) BizProfileV2Resp_FinderLiveNoticeExtInfo *liveExtInfo; // @dynamic liveExtInfo;
@property(retain, nonatomic) NSMutableArray *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) BizMessageList *msgList; // @dynamic msgList;
@property(retain, nonatomic) BizNameCard *nameCard; // @dynamic nameCard;
@property(nonatomic) unsigned int preLoad; // @dynamic preLoad;
@property(retain, nonatomic) NSString *searchGuideInfo; // @dynamic searchGuideInfo;
@property(retain, nonatomic) BizServiceInfo *serviceInfo; // @dynamic serviceInfo;
@property(retain, nonatomic) ProfileSetting *setting; // @dynamic setting;
@property(retain, nonatomic) BizMessageList *shortMsgList; // @dynamic shortMsgList;
@property(nonatomic) int shortMsgTabType; // @dynamic shortMsgTabType;
@property(nonatomic) unsigned int showSubBizRec; // @dynamic showSubBizRec;
@property(retain, nonatomic) BizTopicList *topicList; // @dynamic topicList;
@property(retain, nonatomic) BizVideoFinderInfo *videoFinderInfo; // @dynamic videoFinderInfo;
@property(retain, nonatomic) BizMessageList *videoList; // @dynamic videoList;
@property(nonatomic) int videoTabType; // @dynamic videoTabType;
@property(retain, nonatomic) WxaEcEntranceInfo *wxaEcEntrance; // @dynamic wxaEcEntrance;

@end

