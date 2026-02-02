//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface BuiltinIP : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *domain; // @dynamic domain;
@property(retain, nonatomic) NSData *ip; // @dynamic ip;
@property(nonatomic) unsigned int port; // @dynamic port;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

