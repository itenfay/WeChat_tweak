//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, ConcertTicketInfo;

@class WXPBGeneratedMessage;

@interface FinderLiveGetConcertTicketInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ConcertTicketInfo *ticketInfo; // @dynamic ticketInfo;

@end

