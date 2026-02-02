//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface GetEUInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *euProtocolUrl; // @dynamic euProtocolUrl;
@property(nonatomic) unsigned int isAgreeEuProtocol; // @dynamic isAgreeEuProtocol;
@property(retain, nonatomic) NSString *retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *wxpayProtocolUrl; // @dynamic wxpayProtocolUrl;

@end

