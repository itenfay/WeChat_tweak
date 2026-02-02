//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, QueryResCtx, UploadVoiceCtx, VoiceTransRes;

@interface CheckVoiceTransResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int notifyId; // @dynamic notifyId;
@property(retain, nonatomic) QueryResCtx *queryCtx; // @dynamic queryCtx;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) VoiceTransRes *transRes; // @dynamic transRes;
@property(retain, nonatomic) UploadVoiceCtx *uploadCtx; // @dynamic uploadCtx;

@end

