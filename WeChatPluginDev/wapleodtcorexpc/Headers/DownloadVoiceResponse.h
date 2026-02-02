//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface DownloadVoiceResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cancelFlag; // @dynamic cancelFlag;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int length; // @dynamic length;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int voiceLength; // @dynamic voiceLength;

@end

