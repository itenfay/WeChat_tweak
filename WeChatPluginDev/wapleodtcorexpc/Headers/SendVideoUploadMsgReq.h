//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface SendVideoUploadMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cdnthumbAeskey; // @dynamic cdnthumbAeskey;
@property(nonatomic) unsigned int cdnthumbImgHeight; // @dynamic cdnthumbImgHeight;
@property(nonatomic) unsigned int cdnthumbImgSize; // @dynamic cdnthumbImgSize;
@property(nonatomic) unsigned int cdnthumbImgWidth; // @dynamic cdnthumbImgWidth;
@property(retain, nonatomic) NSString *cdnthumbMd5; // @dynamic cdnthumbMd5;
@property(retain, nonatomic) NSString *cdnthumbUrl; // @dynamic cdnthumbUrl;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) NSString *mediaTagName; // @dynamic mediaTagName;
@property(retain, nonatomic) NSString *messageAction; // @dynamic messageAction;
@property(retain, nonatomic) NSString *messageExt; // @dynamic messageExt;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int playLength; // @dynamic playLength;
@property(nonatomic) unsigned int rawVideoLength; // @dynamic rawVideoLength;
@property(retain, nonatomic) NSString *rawVideoMd5; // @dynamic rawVideoMd5;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int videoLength; // @dynamic videoLength;
@property(retain, nonatomic) NSString *videoMd5; // @dynamic videoMd5;
@property(retain, nonatomic) NSString *videoNewMd5; // @dynamic videoNewMd5;

@end

