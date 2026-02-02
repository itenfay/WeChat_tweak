//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface MassSendRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cameraType; // @dynamic cameraType;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) unsigned int compressType; // @dynamic compressType;
@property(retain, nonatomic) SKBuiltinBuffer_t *dataBuffer; // @dynamic dataBuffer;
@property(nonatomic) unsigned int dataStartPos; // @dynamic dataStartPos;
@property(nonatomic) unsigned int dataTotalLen; // @dynamic dataTotalLen;
@property(nonatomic) unsigned int hasUploadedToCdn; // @dynamic hasUploadedToCdn;
@property(nonatomic) unsigned int isSendAgain; // @dynamic isSendAgain;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int mediaTime; // @dynamic mediaTime;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSString *thumbAeskey; // @dynamic thumbAeskey;
@property(retain, nonatomic) SKBuiltinBuffer_t *thumbData; // @dynamic thumbData;
@property(nonatomic) unsigned int thumbHeight; // @dynamic thumbHeight;
@property(nonatomic) unsigned int thumbStartPos; // @dynamic thumbStartPos;
@property(nonatomic) unsigned int thumbTotalLen; // @dynamic thumbTotalLen;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(nonatomic) unsigned int thumbWidth; // @dynamic thumbWidth;
@property(retain, nonatomic) NSString *toList; // @dynamic toList;
@property(nonatomic) unsigned int toListCount; // @dynamic toListCount;
@property(retain, nonatomic) NSString *toListMd5; // @dynamic toListMd5;
@property(retain, nonatomic) NSString *videoAeskey; // @dynamic videoAeskey;
@property(nonatomic) unsigned int videoSource; // @dynamic videoSource;
@property(retain, nonatomic) NSString *videoUrl; // @dynamic videoUrl;
@property(nonatomic) unsigned int voiceFormat; // @dynamic voiceFormat;

@end

