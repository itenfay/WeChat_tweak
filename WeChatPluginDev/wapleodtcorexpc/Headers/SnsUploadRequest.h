//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t, TwitterInfo;

@interface SnsUploadRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *buffer; // @dynamic buffer;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(nonatomic) unsigned int filterStype; // @dynamic filterStype;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned int objectType; // @dynamic objectType;
@property(nonatomic) int photoFrom; // @dynamic photoFrom;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int syncFlag; // @dynamic syncFlag;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;
@property(retain, nonatomic) TwitterInfo *twitterInfo; // @dynamic twitterInfo;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

