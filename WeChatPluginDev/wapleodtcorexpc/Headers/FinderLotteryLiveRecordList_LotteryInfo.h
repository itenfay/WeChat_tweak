//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveLotteryInfo, FinderLotteryLiveRecordList_MilestoneLotteryInfo;

@interface FinderLotteryLiveRecordList_LotteryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLotteryLiveRecordList_MilestoneLotteryInfo *milestoneInfo; // @dynamic milestoneInfo;
@property(retain, nonatomic) FinderLiveLotteryInfo *nomalInfo; // @dynamic nomalInfo;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

