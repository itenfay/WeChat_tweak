//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface PacketAuthenticateResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) int step; // @dynamic step;
@property(nonatomic) int supportExt; // @dynamic supportExt;
@property(retain, nonatomic) NSData *token; // @dynamic token;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) int version; // @dynamic version;

@end

