//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveContact, LiveOnlineInfo, NSData, NSMutableArray, NSString;

@interface FinderGetLiveOnlineMemberResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adImgUrl; // @dynamic adImgUrl;
@property(retain, nonatomic) NSString *anonymousOnlineCountStr; // @dynamic anonymousOnlineCountStr;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int boardMemberCount; // @dynamic boardMemberCount;
@property(retain, nonatomic) NSData *businessFilterBuffer; // @dynamic businessFilterBuffer;
@property(retain, nonatomic) LiveOnlineInfo *exposedOnlineInfo; // @dynamic exposedOnlineInfo;
@property(retain, nonatomic) NSMutableArray *liveContacts; // @dynamic liveContacts;
@property(nonatomic) unsigned int liveContactsContinueFlag; // @dynamic liveContactsContinueFlag;
@property(retain, nonatomic) NSData *liveContactsLastBuffer; // @dynamic liveContactsLastBuffer;
@property(nonatomic) unsigned int liveContactsMaxDisplayCount; // @dynamic liveContactsMaxDisplayCount;
@property(nonatomic) unsigned long long liveHeatValue; // @dynamic liveHeatValue;
@property(retain, nonatomic) NSString *liveHeatValueStr; // @dynamic liveHeatValueStr;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *liveOnlineCountStr; // @dynamic liveOnlineCountStr;
@property(nonatomic) unsigned int liveOnlineMemberBoardVersion; // @dynamic liveOnlineMemberBoardVersion;
@property(retain, nonatomic) NSString *liveParticipateMemberCountStr; // @dynamic liveParticipateMemberCountStr;
@property(retain, nonatomic) NSMutableArray *offlineContacts; // @dynamic offlineContacts;
@property(nonatomic) unsigned int offlineMemberCount; // @dynamic offlineMemberCount;
@property(nonatomic) unsigned int onlineMemberCount; // @dynamic onlineMemberCount;
@property(nonatomic) unsigned long long previewLiveOnlineMemberCount; // @dynamic previewLiveOnlineMemberCount;
@property(retain, nonatomic) NSMutableArray *recentRewardContacts; // @dynamic recentRewardContacts;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @dynamic rewardTotalAmountInHeat;
@property(retain, nonatomic) FinderLiveContact *selfContact; // @dynamic selfContact;

@end

