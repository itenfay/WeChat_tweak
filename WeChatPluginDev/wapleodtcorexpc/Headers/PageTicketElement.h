//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface PageTicketElement : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *ticketBackUrl; // @dynamic ticketBackUrl;
@property(retain, nonatomic) NSString *ticketColor; // @dynamic ticketColor;
@property(retain, nonatomic) NSString *ticketIcon; // @dynamic ticketIcon;
@property(retain, nonatomic) NSMutableArray *ticketLabel; // @dynamic ticketLabel;
@property(retain, nonatomic) NSString *ticketMchName; // @dynamic ticketMchName;
@property(retain, nonatomic) NSString *ticketName; // @dynamic ticketName;
@property(nonatomic) unsigned int ticketType; // @dynamic ticketType;
@property(retain, nonatomic) NSString *userCardId; // @dynamic userCardId;

@end

