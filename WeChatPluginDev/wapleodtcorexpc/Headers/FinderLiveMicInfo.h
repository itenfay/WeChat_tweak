//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, FinderLiveBattleInfo, FinderLiveBattleSettingInfo, FinderLiveContact, FinderLiveMicConfig, FinderLiveMicInfo_Wording, FinderLiveMicMeetInfo, FinderLiveMicPkInfo, FinderLiveNewPkInfo, FinderLivePurchaseMicConfig, FinderLiveRoomData, IntercomMicInfo, NSMutableArray, NSString;

@interface FinderLiveMicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveContact *acceptLiveContact; // @dynamic acceptLiveContact;
@property(retain, nonatomic) FinderLiveNewPkInfo *anchorNewPkInfo; // @dynamic anchorNewPkInfo;
@property(retain, nonatomic) FinderJumpInfo *anchorPurchaseEvaluateEntrance; // @dynamic anchorPurchaseEvaluateEntrance;
@property(nonatomic) double anchorPurchaseEvaluateRate; // @dynamic anchorPurchaseEvaluateRate;
@property(retain, nonatomic) FinderJumpInfo *anchorPurchaseHistoryEntrance; // @dynamic anchorPurchaseHistoryEntrance;
@property(retain, nonatomic) FinderLiveContact *applyContact; // @dynamic applyContact;
@property(retain, nonatomic) FinderLiveBattleInfo *battleInfo; // @dynamic battleInfo;
@property(retain, nonatomic) FinderLiveBattleSettingInfo *battleSettingInfo; // @dynamic battleSettingInfo;
@property(retain, nonatomic) IntercomMicInfo *boxIntercomMicInfo; // @dynamic boxIntercomMicInfo;
@property(retain, nonatomic) NSString *canceledPurchaseLiveMicId; // @dynamic canceledPurchaseLiveMicId;
@property(nonatomic) _Bool enableCrossLiveRoomMic; // @dynamic enableCrossLiveRoomMic;
@property(retain, nonatomic) NSString *liveMicId; // @dynamic liveMicId;
@property(retain, nonatomic) FinderLiveMicMeetInfo *meetInfo; // @dynamic meetInfo;
@property(retain, nonatomic) NSMutableArray *micAudienceList; // @dynamic micAudienceList;
@property(retain, nonatomic) FinderLiveMicConfig *micConfig; // @dynamic micConfig;
@property(retain, nonatomic) FinderLiveRoomData *micLiveRoomData; // @dynamic micLiveRoomData;
@property(retain, nonatomic) FinderLiveMicPkInfo *micPkInfo; // @dynamic micPkInfo;
@property(nonatomic) unsigned int micType; // @dynamic micType;
@property(retain, nonatomic) NSMutableArray *newPkMicInfos; // @dynamic newPkMicInfos;
@property(retain, nonatomic) NSMutableArray *newPkMicInfosForBoard; // @dynamic newPkMicInfosForBoard;
@property(retain, nonatomic) FinderLivePurchaseMicConfig *purchaseMicConfig; // @dynamic purchaseMicConfig;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) FinderLiveMicInfo_Wording *wording; // @dynamic wording;

@end

