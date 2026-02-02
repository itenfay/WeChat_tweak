//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenTTSInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int duration; // @dynamic duration;
@property(nonatomic) int format; // @dynamic format;
@property(nonatomic) _Bool isNewsFlush; // @dynamic isNewsFlush;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(nonatomic) int seektime; // @dynamic seektime;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

