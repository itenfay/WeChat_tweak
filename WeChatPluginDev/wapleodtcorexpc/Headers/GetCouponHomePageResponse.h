//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CardHomePageStoreList, CardMiniAppInfo, CardSortInfoList, NSString;

@interface GetCouponHomePageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CardHomePageStoreList *cardHomePageStoreList; // @dynamic cardHomePageStoreList;
@property(retain, nonatomic) CardSortInfoList *cardSortInfoList; // @dynamic cardSortInfoList;
@property(nonatomic) unsigned int changeSortRule; // @dynamic changeSortRule;
@property(retain, nonatomic) NSString *historyEntranceNameWording; // @dynamic historyEntranceNameWording;
@property(retain, nonatomic) CardMiniAppInfo *historyMiniAppInfo; // @dynamic historyMiniAppInfo;
@property(nonatomic) unsigned int isAll; // @dynamic isAll;
@property(nonatomic) unsigned int isChangeSortRule; // @dynamic isChangeSortRule;
@property(nonatomic) unsigned int nextOffset; // @dynamic nextOffset;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

