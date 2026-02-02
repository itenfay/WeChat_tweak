//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, VoicePieceCtx;

@interface RegisterVoicePrintRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) VoicePieceCtx *pieceData; // @dynamic pieceData;
@property(nonatomic) unsigned int resId; // @dynamic resId;
@property(nonatomic) unsigned int step; // @dynamic step;
@property(nonatomic) unsigned int voiceTicket; // @dynamic voiceTicket;

@end

