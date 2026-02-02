//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FanClubPanelInfo, FinderLiveGlobalRewardLevel, NSData, NSMutableArray, PackageResourceInfo, SwitchSkinGiftConfig;

@interface FinderGetLiveRewardGiftListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int comboBatchSize; // @dynamic comboBatchSize;
@property(nonatomic) unsigned int comboBatchTimeoutMs; // @dynamic comboBatchTimeoutMs;
@property(retain, nonatomic) FanClubPanelInfo *fanClubPanelInfo; // @dynamic fanClubPanelInfo;
@property(retain, nonatomic) NSMutableArray *giftGroupList; // @dynamic giftGroupList;
@property(retain, nonatomic) NSMutableArray *giftList; // @dynamic giftList;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) PackageResourceInfo *packageResource; // @dynamic packageResource;
@property(retain, nonatomic) FinderLiveGlobalRewardLevel *rewardLevelInfo; // @dynamic rewardLevelInfo;
@property(retain, nonatomic) SwitchSkinGiftConfig *switchSkinGiftConfig; // @dynamic switchSkinGiftConfig;
@property(retain, nonatomic) NSMutableArray *voteBattleGiftList; // @dynamic voteBattleGiftList;

@end

