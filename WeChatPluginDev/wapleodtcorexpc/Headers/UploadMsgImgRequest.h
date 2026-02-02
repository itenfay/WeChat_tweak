//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ImgSourceInfo, ImgWxaInfo, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface UploadMsgImgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int cdnbigImgSize; // @dynamic cdnbigImgSize;
@property(retain, nonatomic) NSString *cdnbigImgUrl; // @dynamic cdnbigImgUrl;
@property(nonatomic) int cdnmidImgSize; // @dynamic cdnmidImgSize;
@property(retain, nonatomic) NSString *cdnmidImgUrl; // @dynamic cdnmidImgUrl;
@property(retain, nonatomic) NSString *cdnthumbAeskey; // @dynamic cdnthumbAeskey;
@property(nonatomic) int cdnthumbImgHeight; // @dynamic cdnthumbImgHeight;
@property(nonatomic) int cdnthumbImgSize; // @dynamic cdnthumbImgSize;
@property(retain, nonatomic) NSString *cdnthumbImgUrl; // @dynamic cdnthumbImgUrl;
@property(nonatomic) int cdnthumbImgWidth; // @dynamic cdnthumbImgWidth;
@property(retain, nonatomic) SKBuiltinString_t *clientImgId; // @dynamic clientImgId;
@property(nonatomic) unsigned int compressType; // @dynamic compressType;
@property(nonatomic) unsigned int crc32; // @dynamic crc32;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int dataLen; // @dynamic dataLen;
@property(nonatomic) int encryVer; // @dynamic encryVer;
@property(retain, nonatomic) SKBuiltinString_t *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int hevcMidSize; // @dynamic hevcMidSize;
@property(nonatomic) unsigned int hitMd5; // @dynamic hitMd5;
@property(retain, nonatomic) NSString *imgDataHash; // @dynamic imgDataHash;
@property(retain, nonatomic) NSString *imgInfo; // @dynamic imgInfo;
@property(retain, nonatomic) ImgSourceInfo *imgSourceInfo; // @dynamic imgSourceInfo;
@property(retain, nonatomic) NSString *imgSourceUrl; // @dynamic imgSourceUrl;
@property(nonatomic) unsigned int imgType; // @dynamic imgType;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(retain, nonatomic) NSString *mediaTagName; // @dynamic mediaTagName;
@property(retain, nonatomic) NSString *meesageExt; // @dynamic meesageExt;
@property(retain, nonatomic) NSString *messageAction; // @dynamic messageAction;
@property(nonatomic) unsigned int msgForwardType; // @dynamic msgForwardType;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(nonatomic) int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *originSourceMd5; // @dynamic originSourceMd5;
@property(nonatomic) int photoFrom; // @dynamic photoFrom;
@property(retain, nonatomic) NSString *platformSignature; // @dynamic platformSignature;
@property(retain, nonatomic) NSString *rawMd5; // @dynamic rawMd5;
@property(nonatomic) unsigned int reqTime; // @dynamic reqTime;
@property(retain, nonatomic) NSString *secHashInfoBase64; // @dynamic secHashInfoBase64;
@property(retain, nonatomic) NSString *sendMsgTicket; // @dynamic sendMsgTicket;
@property(nonatomic) unsigned int spatialType; // @dynamic spatialType;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(retain, nonatomic) SKBuiltinString_t *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;
@property(retain, nonatomic) ImgWxaInfo *wxaInfo; // @dynamic wxaInfo;

@end

