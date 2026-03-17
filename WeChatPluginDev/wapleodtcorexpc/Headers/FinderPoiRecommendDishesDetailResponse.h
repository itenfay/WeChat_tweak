//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderJumpInfo, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderPoiRecommendDishesDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *dishesDetailList; // @dynamic dishesDetailList;
@property(retain, nonatomic) FinderJumpInfo *pageFooterJumpinfo; // @dynamic pageFooterJumpinfo;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

