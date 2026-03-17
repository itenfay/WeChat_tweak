//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData;

@class WXPBGeneratedMessage;

@interface SubmitAsyncTTSResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *contextBuff; // @dynamic contextBuff;
@property(nonatomic) _Bool hasUnknowCharacter; // @dynamic hasUnknowCharacter;

@end

