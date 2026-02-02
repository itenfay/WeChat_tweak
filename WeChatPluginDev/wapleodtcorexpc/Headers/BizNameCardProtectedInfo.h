//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BizNameCardProtectedInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *nonce; // @dynamic nonce;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned int verifyflag; // @dynamic verifyflag;
@property(retain, nonatomic) NSString *verifyrole; // @dynamic verifyrole;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

