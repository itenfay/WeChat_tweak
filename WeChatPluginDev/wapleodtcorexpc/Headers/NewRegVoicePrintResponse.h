//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, VoicePieceCtx;

@interface NewRegVoicePrintResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *biosigTicket; // @dynamic biosigTicket;
@property(retain, nonatomic) VoicePieceCtx *nextPiece; // @dynamic nextPiece;
@property(nonatomic) unsigned int nextStep; // @dynamic nextStep;
@property(nonatomic) int resgisterRet; // @dynamic resgisterRet;
@property(nonatomic) unsigned int voiceTicket; // @dynamic voiceTicket;

@end

