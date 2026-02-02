//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderVideoMedia : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int bitrate; // @dynamic bitrate;
@property(retain, nonatomic) NSString *decodeKey; // @dynamic decodeKey;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) NSString *md5Sum; // @dynamic md5Sum;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) unsigned int videoPlayLen; // @dynamic videoPlayLen;
@property(nonatomic) float width; // @dynamic width;

@end

