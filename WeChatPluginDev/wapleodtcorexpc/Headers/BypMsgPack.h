//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BypMsgAppMsg, BypMsgEmoji, BypMsgImage, BypMsgText, BypMsgVideo, NSData, NSString;

@interface BypMsgPack : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BypMsgAppMsg *bypAppmsg; // @dynamic bypAppmsg;
@property(retain, nonatomic) BypMsgEmoji *bypEmoji; // @dynamic bypEmoji;
@property(retain, nonatomic) BypMsgImage *bypImage; // @dynamic bypImage;
@property(retain, nonatomic) BypMsgText *bypText; // @dynamic bypText;
@property(retain, nonatomic) BypMsgVideo *bypVideo; // @dynamic bypVideo;
@property(retain, nonatomic) NSString *cliMsgId; // @dynamic cliMsgId;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) NSData *msgExtInfo; // @dynamic msgExtInfo;
@property(retain, nonatomic) NSString *msgSessionId; // @dynamic msgSessionId;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end

