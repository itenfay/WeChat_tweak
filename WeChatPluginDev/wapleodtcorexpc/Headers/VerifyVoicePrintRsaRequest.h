//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t, VoicePieceCtx;

@interface VerifyVoicePrintRsaRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) VoicePieceCtx *piece; // @dynamic piece;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(nonatomic) unsigned int resId; // @dynamic resId;
@property(retain, nonatomic) NSString *verifyTicket; // @dynamic verifyTicket;
@property(nonatomic) unsigned int voiceTicket; // @dynamic voiceTicket;

@end

