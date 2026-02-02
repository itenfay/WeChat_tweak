//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSString;

@class WXPBGeneratedMessage;

@interface ExtDeviceLoginConfirmOKResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *msgContextPubKey; // @dynamic msgContextPubKey;
@property(retain, nonatomic) NSString *syncRecordCtx; // @dynamic syncRecordCtx;

@end

