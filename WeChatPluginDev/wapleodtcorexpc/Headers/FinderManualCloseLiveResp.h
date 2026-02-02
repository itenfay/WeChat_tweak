//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface FinderManualCloseLiveResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audiencesAvgSeconds; // @dynamic audiencesAvgSeconds;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int bizLiveNewFansNum; // @dynamic bizLiveNewFansNum;
@property(retain, nonatomic) NSString *generateReplayPageDisplayInfo; // @dynamic generateReplayPageDisplayInfo;
@property(nonatomic) unsigned int guideGenerationReplay; // @dynamic guideGenerationReplay;
@property(nonatomic) unsigned int liveAudiencesNum; // @dynamic liveAudiencesNum;
@property(nonatomic) unsigned int liveBeLikedNum; // @dynamic liveBeLikedNum;
@property(nonatomic) unsigned int liveDurationSeconds; // @dynamic liveDurationSeconds;
@property(nonatomic) unsigned int liveNewFansNum; // @dynamic liveNewFansNum;
@property(nonatomic) unsigned int maxOnlineCount; // @dynamic maxOnlineCount;
@property(nonatomic) unsigned long long newLiveBeLikedNum; // @dynamic newLiveBeLikedNum;
@property(nonatomic) unsigned int replayPrivilege; // @dynamic replayPrivilege;
@property(nonatomic) unsigned int replaySwitchStatus; // @dynamic replaySwitchStatus;

@end

