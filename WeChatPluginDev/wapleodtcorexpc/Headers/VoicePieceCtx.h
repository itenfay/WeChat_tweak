//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface VoicePieceCtx : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *pieceData; // @dynamic pieceData;
@property(nonatomic) unsigned int pieceFlag; // @dynamic pieceFlag;
@property(nonatomic) unsigned int pieceLen; // @dynamic pieceLen;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;

@end

