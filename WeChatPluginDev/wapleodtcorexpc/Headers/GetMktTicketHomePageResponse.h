//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, PageTicketJumpList, PageTicketList, PageUnderList;

@interface GetMktTicketHomePageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int isAll; // @dynamic isAll;
@property(nonatomic) unsigned int nextOffset; // @dynamic nextOffset;
@property(retain, nonatomic) PageTicketList *pageLicenseList; // @dynamic pageLicenseList;
@property(retain, nonatomic) PageTicketJumpList *pageTicketJumpList; // @dynamic pageTicketJumpList;
@property(retain, nonatomic) PageTicketList *pageTicketList; // @dynamic pageTicketList;
@property(retain, nonatomic) PageUnderList *pageUnderList; // @dynamic pageUnderList;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

