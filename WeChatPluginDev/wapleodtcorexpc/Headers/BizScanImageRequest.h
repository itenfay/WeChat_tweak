//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface BizScanImageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clientScanId; // @dynamic clientScanId;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *imageBuffer; // @dynamic imageBuffer;
@property(nonatomic) unsigned int imageType; // @dynamic imageType;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int totalLength; // @dynamic totalLength;

@end

