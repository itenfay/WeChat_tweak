//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface TransferReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *body; // @dynamic body;
@property(retain, nonatomic) NSData *header; // @dynamic header;
@property(nonatomic) unsigned int magic; // @dynamic magic;

@end

