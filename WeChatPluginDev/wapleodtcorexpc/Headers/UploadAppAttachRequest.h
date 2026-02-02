//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface UploadAppAttachRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientAppDataId; // @dynamic clientAppDataId;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int dataLen; // @dynamic dataLen;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int sdkVersion; // @dynamic sdkVersion;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

