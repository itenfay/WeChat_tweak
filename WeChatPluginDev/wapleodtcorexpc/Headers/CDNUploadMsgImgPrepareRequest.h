//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ImgSourceInfo, ImgWxaInfo, NSString, SKBuiltinBuffer_t;

@interface CDNUploadMsgImgPrepareRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *attachedContent; // @dynamic attachedContent;
@property(retain, nonatomic) NSString *clientImgId; // @dynamic clientImgId;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientStat; // @dynamic clientStat;
@property(nonatomic) unsigned int crc32; // @dynamic crc32;
@property(nonatomic) int encryVer; // @dynamic encryVer;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) NSString *imgDataHash; // @dynamic imgDataHash;
@property(retain, nonatomic) ImgSourceInfo *imgSourceInfo; // @dynamic imgSourceInfo;
@property(retain, nonatomic) NSString *imgSourceUrl; // @dynamic imgSourceUrl;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *mediaTagName; // @dynamic mediaTagName;
@property(retain, nonatomic) NSString *meesageExt; // @dynamic meesageExt;
@property(retain, nonatomic) NSString *messageAction; // @dynamic messageAction;
@property(nonatomic) unsigned int msgForwardType; // @dynamic msgForwardType;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int noCommit; // @dynamic noCommit;
@property(retain, nonatomic) NSString *platformSignature; // @dynamic platformSignature;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *secHashInfoBase64; // @dynamic secHashInfoBase64;
@property(retain, nonatomic) NSString *sendMsgTicket; // @dynamic sendMsgTicket;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) unsigned int spatialType; // @dynamic spatialType;
@property(nonatomic) int thumbHeight; // @dynamic thumbHeight;
@property(nonatomic) int thumbWidth; // @dynamic thumbWidth;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(retain, nonatomic) ImgWxaInfo *wxaInfo; // @dynamic wxaInfo;

@end

