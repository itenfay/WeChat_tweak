//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface GeneralSetRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int setType; // @dynamic setType;
@property(retain, nonatomic) NSString *setValue; // @dynamic setValue;
@property(nonatomic) unsigned int ticketCount; // @dynamic ticketCount;
@property(retain, nonatomic) NSMutableArray *tickets; // @dynamic tickets;

@end

