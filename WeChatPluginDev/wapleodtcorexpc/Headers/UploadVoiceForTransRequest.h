//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t, UploadVoiceCtx, VoiceAttr;

@interface UploadVoiceForTransRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(retain, nonatomic) UploadVoiceCtx *uploadCtx; // @dynamic uploadCtx;
@property(retain, nonatomic) VoiceAttr *voiceAttr; // @dynamic voiceAttr;
@property(retain, nonatomic) NSString *voiceId; // @dynamic voiceId;

@end

