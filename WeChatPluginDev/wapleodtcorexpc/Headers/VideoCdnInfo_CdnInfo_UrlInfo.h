//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface VideoCdnInfo_CdnInfo_UrlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int durationMs; // @dynamic durationMs;
@property(nonatomic) int expireAt; // @dynamic expireAt;
@property(nonatomic) unsigned long long filesize; // @dynamic filesize;
@property(nonatomic) unsigned int formatId; // @dynamic formatId;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(retain, nonatomic) NSData *url; // @dynamic url;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

