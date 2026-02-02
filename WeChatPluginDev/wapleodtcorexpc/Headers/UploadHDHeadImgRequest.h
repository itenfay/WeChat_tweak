//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface UploadHDHeadImgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(nonatomic) unsigned int headImgType; // @dynamic headImgType;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(retain, nonatomic) NSString *imgHash; // @dynamic imgHash;
@property(nonatomic) unsigned int isUploadFromClient; // @dynamic isUploadFromClient;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

