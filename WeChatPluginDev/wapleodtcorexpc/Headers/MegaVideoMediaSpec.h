//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MegaVideoMediaSpec : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bitRate; // @dynamic bitRate;
@property(retain, nonatomic) NSString *codingFormat; // @dynamic codingFormat;
@property(nonatomic) unsigned int durationMs; // @dynamic durationMs;
@property(retain, nonatomic) NSString *fileFormat; // @dynamic fileFormat;
@property(nonatomic) unsigned int firstLoadBytes; // @dynamic firstLoadBytes;

@end

