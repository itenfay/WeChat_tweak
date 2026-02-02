//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, PageTicketList;

@interface GetMktInvalidTicketHomePageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int isAll; // @dynamic isAll;
@property(nonatomic) unsigned int isShowClearBtn; // @dynamic isShowClearBtn;
@property(nonatomic) unsigned int nextOffset; // @dynamic nextOffset;
@property(retain, nonatomic) PageTicketList *pageInvalidTicketList; // @dynamic pageInvalidTicketList;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

