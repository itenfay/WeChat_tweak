//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface MMQQShakeMusicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int encodeType; // @dynamic encodeType;
@property(nonatomic) unsigned int endflag; // @dynamic endflag;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int seq; // @dynamic seq;

@end

