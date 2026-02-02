//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface BizOcrImageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *imgData; // @dynamic imgData;
@property(nonatomic) unsigned int ocrType; // @dynamic ocrType;
@property(nonatomic) unsigned int seqNum; // @dynamic seqNum;
@property(retain, nonatomic) NSString *sessionKey; // @dynamic sessionKey;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

