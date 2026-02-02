//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface TranslateOrgMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *chatRoomId; // @dynamic chatRoomId;
@property(nonatomic) unsigned int clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) SKBuiltinBuffer_t *cookie; // @dynamic cookie;
@property(retain, nonatomic) NSString *prefixContent; // @dynamic prefixContent;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *textMsg; // @dynamic textMsg;

@end

