//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CardHomePageFAQItem, CardHomePageRecentlyUsedList, CardHomePageTopCellGroup, NSString;

@interface GetMktCardHomePageV2Response : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CardHomePageFAQItem *cardHomePageFaqItem; // @dynamic cardHomePageFaqItem;
@property(retain, nonatomic) CardHomePageRecentlyUsedList *cardHomePageRecentlyUsedList; // @dynamic cardHomePageRecentlyUsedList;
@property(retain, nonatomic) CardHomePageTopCellGroup *cardHomePageTopCellGroup; // @dynamic cardHomePageTopCellGroup;
@property(nonatomic) unsigned int isAll; // @dynamic isAll;
@property(nonatomic) unsigned int nextOffset; // @dynamic nextOffset;
@property(retain, nonatomic) NSString *recentlyUsedWording; // @dynamic recentlyUsedWording;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

