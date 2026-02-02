//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CouponAndGiftList, NSMutableArray, NSString;

@interface GetCouponAndGiftListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CouponAndGiftList *couponItemsList; // @dynamic couponItemsList;
@property(retain, nonatomic) NSMutableArray *getMoreList; // @dynamic getMoreList;
@property(retain, nonatomic) CouponAndGiftList *giftItemsList; // @dynamic giftItemsList;
@property(nonatomic) _Bool isAll; // @dynamic isAll;
@property(nonatomic) unsigned long long nextPageNum; // @dynamic nextPageNum;
@property(nonatomic) unsigned long long retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

