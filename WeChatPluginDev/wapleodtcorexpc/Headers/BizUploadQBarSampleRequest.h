//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface BizUploadQBarSampleRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clientScanId; // @dynamic clientScanId;
@property(nonatomic) unsigned int decodeResult; // @dynamic decodeResult;
@property(nonatomic) unsigned int decodeSeq; // @dynamic decodeSeq;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *imageBuffer; // @dynamic imageBuffer;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int totalLength; // @dynamic totalLength;

@end

