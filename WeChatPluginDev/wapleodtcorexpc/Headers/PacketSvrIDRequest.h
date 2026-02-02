//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface PacketSvrIDRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bakChatName; // @dynamic bakChatName;
@property(retain, nonatomic) NSMutableArray *md5; // @dynamic md5;
@property(retain, nonatomic) NSMutableArray *mediaId; // @dynamic mediaId;
@property(retain, nonatomic) NSMutableArray *svrId; // @dynamic svrId;

@end

