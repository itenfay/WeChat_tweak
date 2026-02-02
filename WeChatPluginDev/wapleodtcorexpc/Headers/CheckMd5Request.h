//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CheckMd5Request : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int crc32; // @dynamic crc32;
@property(retain, nonatomic) NSString *fileid; // @dynamic fileid;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *newmd5; // @dynamic newmd5;

@end

