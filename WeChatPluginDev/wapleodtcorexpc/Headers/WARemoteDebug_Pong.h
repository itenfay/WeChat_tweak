//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WARemoteDebug_Pong : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int networkType; // @dynamic networkType;
@property(retain, nonatomic) NSString *payload; // @dynamic payload;
@property(nonatomic) unsigned long long pingId; // @dynamic pingId;

@end

