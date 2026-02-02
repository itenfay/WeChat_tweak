//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ConcertTicketInfo_MessageCardItem, FinderJumpInfo, FinderLiveContact, NSMutableArray, NSString;

@interface ConcertTicketInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(retain, nonatomic) FinderLiveContact *contact; // @dynamic contact;
@property(nonatomic) _Bool enableSwitchTicket; // @dynamic enableSwitchTicket;
@property(nonatomic) _Bool hasReceived; // @dynamic hasReceived;
@property(nonatomic) _Bool isPay; // @dynamic isPay;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *location; // @dynamic location;
@property(retain, nonatomic) FinderJumpInfo *lotteryJumpInfo; // @dynamic lotteryJumpInfo;
@property(retain, nonatomic) ConcertTicketInfo_MessageCardItem *msgCardItem; // @dynamic msgCardItem;
@property(retain, nonatomic) NSMutableArray *pageItemList; // @dynamic pageItemList;
@property(nonatomic) unsigned int price; // @dynamic price;
@property(retain, nonatomic) NSString *resourceId; // @dynamic resourceId;
@property(retain, nonatomic) NSMutableArray *resourceInfoList; // @dynamic resourceInfoList;
@property(retain, nonatomic) NSString *seatNo; // @dynamic seatNo;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(retain, nonatomic) NSString *ticketAnchorLineContent; // @dynamic ticketAnchorLineContent;
@property(nonatomic) unsigned long long ticketUniqId; // @dynamic ticketUniqId;

@end

