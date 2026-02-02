//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface RecommendPanelEmojiRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *chatId; // @dynamic chatId;
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(retain, nonatomic) NSData *localEmoji; // @dynamic localEmoji;
@property(retain, nonatomic) NSData *pageBuff; // @dynamic pageBuff;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

