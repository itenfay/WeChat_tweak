//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AppMsg, BaseRequest, NSString;

@interface SendAppMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *commentUrl; // @dynamic commentUrl;
@property(nonatomic) unsigned int crc32; // @dynamic crc32;
@property(nonatomic) unsigned int directShare; // @dynamic directShare;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(retain, nonatomic) NSString *fromSence; // @dynamic fromSence;
@property(nonatomic) unsigned int hitMd5; // @dynamic hitMd5;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) AppMsg *msg; // @dynamic msg;
@property(nonatomic) unsigned int msgForwardType; // @dynamic msgForwardType;
@property(nonatomic) unsigned int reqTime; // @dynamic reqTime;
@property(retain, nonatomic) NSString *sendMsgTicket; // @dynamic sendMsgTicket;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;

@end

