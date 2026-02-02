//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CardMiniAppInfo, CardSortInfoList, NSMutableArray, NSString;

@interface GetMemberCardHomePageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bubbleEntranceNameWording; // @dynamic bubbleEntranceNameWording;
@property(retain, nonatomic) NSMutableArray *cardElementCouponList; // @dynamic cardElementCouponList;
@property(retain, nonatomic) CardSortInfoList *cardSortInfoList; // @dynamic cardSortInfoList;
@property(nonatomic) unsigned int changeSortRule; // @dynamic changeSortRule;
@property(retain, nonatomic) NSMutableArray *getMoreList; // @dynamic getMoreList;
@property(retain, nonatomic) NSString *historyEntranceNameWording; // @dynamic historyEntranceNameWording;
@property(retain, nonatomic) CardMiniAppInfo *historyMiniAppInfo; // @dynamic historyMiniAppInfo;
@property(nonatomic) unsigned int isAll; // @dynamic isAll;
@property(nonatomic) unsigned int isChangeSortRule; // @dynamic isChangeSortRule;
@property(nonatomic) unsigned int nextOffset; // @dynamic nextOffset;
@property(retain, nonatomic) NSString *phoneMembercardEntranceNameWording; // @dynamic phoneMembercardEntranceNameWording;
@property(retain, nonatomic) CardMiniAppInfo *phoneMembercardMiniAppInfo; // @dynamic phoneMembercardMiniAppInfo;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

