//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, VoicePieceCtx;

@interface VerifyVoicePrintRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) VoicePieceCtx *piece; // @dynamic piece;
@property(nonatomic) unsigned int resId; // @dynamic resId;
@property(retain, nonatomic) NSString *verifyTicket; // @dynamic verifyTicket;
@property(nonatomic) unsigned int voiceTicket; // @dynamic voiceTicket;

@end

