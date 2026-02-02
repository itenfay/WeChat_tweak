//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CardHomePageFAQItem, CardHomePageStoreList, CardHomePageTopCellList, CardSortInfoList, NSString;

@interface GetMktCardHomePageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CardHomePageFAQItem *cardHomePageFaqItem; // @dynamic cardHomePageFaqItem;
@property(retain, nonatomic) CardHomePageStoreList *cardHomePageStoreList; // @dynamic cardHomePageStoreList;
@property(retain, nonatomic) CardHomePageTopCellList *cardHomePageTopCellList; // @dynamic cardHomePageTopCellList;
@property(retain, nonatomic) CardSortInfoList *cardSortInfoList; // @dynamic cardSortInfoList;
@property(nonatomic) unsigned int changeSortRule; // @dynamic changeSortRule;
@property(nonatomic) unsigned int isAll; // @dynamic isAll;
@property(nonatomic) unsigned int isChangeSortRule; // @dynamic isChangeSortRule;
@property(nonatomic) unsigned int nextOffset; // @dynamic nextOffset;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *ticketEnterWording; // @dynamic ticketEnterWording;

@end

