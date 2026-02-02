//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MediaInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;
@property(nonatomic) unsigned int videoPlayLength; // @dynamic videoPlayLength;

@end

