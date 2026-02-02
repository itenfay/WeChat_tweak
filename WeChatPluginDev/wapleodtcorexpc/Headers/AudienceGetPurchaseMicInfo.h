//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray;

@interface AudienceGetPurchaseMicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool allowAnonymityApplyFeature; // @dynamic allowAnonymityApplyFeature;
@property(nonatomic) _Bool allowConsultationContentFeature; // @dynamic allowConsultationContentFeature;
@property(nonatomic) _Bool allowMarkup; // @dynamic allowMarkup;
@property(retain, nonatomic) NSMutableArray *applyedAudienceList; // @dynamic applyedAudienceList;
@property(nonatomic) unsigned int purhcaseMicStatus; // @dynamic purhcaseMicStatus;
@property(nonatomic) double serviceScore; // @dynamic serviceScore;
@property(retain, nonatomic) FinderJumpInfo *serviceScoreEntrance; // @dynamic serviceScoreEntrance;
@property(nonatomic) unsigned int waitingMicAudience; // @dynamic waitingMicAudience;

@end

