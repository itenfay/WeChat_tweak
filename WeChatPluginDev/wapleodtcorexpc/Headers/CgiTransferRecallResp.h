//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString, ShowMessage;

@class WXPBGeneratedMessage;

@interface CgiTransferRecallResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *revokeTicket; // @dynamic revokeTicket;
@property(retain, nonatomic) ShowMessage *showmessage; // @dynamic showmessage;

@end

