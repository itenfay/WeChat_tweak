//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface EmojiUploadInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) int startPos; // @dynamic startPos;
@property(nonatomic) int totalLen; // @dynamic totalLen;

@end

