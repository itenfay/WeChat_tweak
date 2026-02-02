//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderJumpInfo, FinderLiveAllRightsInfo, FinderLiveFanClubFloatMsgInfo, FinderLiveNewRightsInfo, FinderLiveSuperFanRightInfo, NSMutableArray, NSString, TaskProgressInfo;

@interface FinderLiveFanClubGetIntimacyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAllRightsInfo *allRightsInfo; // @dynamic allRightsInfo;
@property(retain, nonatomic) NSMutableArray *badgeInfos; // @dynamic badgeInfos;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool canReserveNotice; // @dynamic canReserveNotice;
@property(retain, nonatomic) FinderJumpInfo *cancelSubscriptionEntrance; // @dynamic cancelSubscriptionEntrance;
@property(nonatomic) unsigned int curIntimacy; // @dynamic curIntimacy;
@property(retain, nonatomic) FinderLiveFanClubFloatMsgInfo *floatMsgInfo; // @dynamic floatMsgInfo;
@property(retain, nonatomic) NSString *introductionUrl; // @dynamic introductionUrl;
@property(retain, nonatomic) FinderLiveNewRightsInfo *newRightsInfo; // @dynamic newRightsInfo;
@property(nonatomic) unsigned int nextLevelNeedIntimacy; // @dynamic nextLevelNeedIntimacy;
@property(nonatomic) _Bool noticeReserved; // @dynamic noticeReserved;
@property(retain, nonatomic) FinderLiveSuperFanRightInfo *superFanRightsInfo; // @dynamic superFanRightsInfo;
@property(retain, nonatomic) TaskProgressInfo *taskProgressInfo; // @dynamic taskProgressInfo;

@end

