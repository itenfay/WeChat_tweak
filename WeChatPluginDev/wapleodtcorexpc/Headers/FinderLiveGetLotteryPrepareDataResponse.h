//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderJumpInfo_LiteApp, NSMutableArray, PrizeData;

@interface FinderLiveGetLotteryPrepareDataResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *lotteryAttendTypeList; // @dynamic lotteryAttendTypeList;
@property(retain, nonatomic) PrizeData *prizeData; // @dynamic prizeData;
@property(retain, nonatomic) FinderJumpInfo_LiteApp *productLiteapp; // @dynamic productLiteapp;
@property(retain, nonatomic) NSMutableArray *winnerCntLimitInfos; // @dynamic winnerCntLimitInfos;

@end

