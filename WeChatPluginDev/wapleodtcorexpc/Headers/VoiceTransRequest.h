//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface VoiceTransRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientVoiceId; // @dynamic clientVoiceId;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int fetchVoiceIdCount; // @dynamic fetchVoiceIdCount;
@property(retain, nonatomic) NSMutableArray *fetchVoiceIds; // @dynamic fetchVoiceIds;
@property(nonatomic) unsigned int languageType; // @dynamic languageType;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) unsigned int seq; // @dynamic seq;
@property(retain, nonatomic) SKBuiltinString_t *vadVersion; // @dynamic vadVersion;
@property(nonatomic) unsigned int voiceEncodeType; // @dynamic voiceEncodeType;

@end

