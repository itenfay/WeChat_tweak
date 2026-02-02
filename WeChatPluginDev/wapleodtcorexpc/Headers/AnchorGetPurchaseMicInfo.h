//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray;

@interface AnchorGetPurchaseMicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *applyedAudienceList; // @dynamic applyedAudienceList;
@property(retain, nonatomic) NSMutableArray *curInMicAudience; // @dynamic curInMicAudience;
@property(nonatomic) unsigned int curLiveFinishedService; // @dynamic curLiveFinishedService;
@property(retain, nonatomic) FinderJumpInfo *historyEntrance; // @dynamic historyEntrance;
@property(nonatomic) double serviceScore; // @dynamic serviceScore;
@property(retain, nonatomic) FinderJumpInfo *serviceScoreEntrance; // @dynamic serviceScoreEntrance;

@end

