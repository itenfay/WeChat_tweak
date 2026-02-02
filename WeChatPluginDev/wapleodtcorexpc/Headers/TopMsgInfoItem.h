//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface TopMsgInfoItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *clientBuf; // @dynamic clientBuf;
@property(retain, nonatomic) NSString *msgSummary; // @dynamic msgSummary;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSString *msgUserName; // @dynamic msgUserName;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(retain, nonatomic) NSString *opUserName; // @dynamic opUserName;
@property(nonatomic) unsigned int topId; // @dynamic topId;

@end

