//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveAudienceOpFanClubResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool alreadySuperFans; // @dynamic alreadySuperFans;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(nonatomic) _Bool needPurchase; // @dynamic needPurchase;
@property(retain, nonatomic) NSMutableArray *productList; // @dynamic productList;
@property(retain, nonatomic) NSData *respBuff; // @dynamic respBuff;

@end

