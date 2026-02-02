//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray, NSString;

@interface FinderLiveGiftWallInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorRankWording; // @dynamic anchorRankWording;
@property(retain, nonatomic) NSString *completedBannerWording; // @dynamic completedBannerWording;
@property(nonatomic) _Bool enableFlag; // @dynamic enableFlag;
@property(retain, nonatomic) NSMutableArray *giftInfoList; // @dynamic giftInfoList;
@property(retain, nonatomic) FinderJumpInfo *regulationPage; // @dynamic regulationPage;
@property(nonatomic) unsigned long long speedBoardCurRank; // @dynamic speedBoardCurRank;
@property(retain, nonatomic) FinderJumpInfo *speedBoardInfo; // @dynamic speedBoardInfo;
@property(nonatomic) unsigned long long totalGiftNum; // @dynamic totalGiftNum;
@property(nonatomic) unsigned long long unlockGiftNum; // @dynamic unlockGiftNum;

@end

