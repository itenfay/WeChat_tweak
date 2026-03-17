//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, XMBaseReadData, XMSessionCookie;

@class WXPBGeneratedMessage;

@interface XMReadMailRsp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) XMBaseReadData *readdata; // @dynamic readdata;
@property(retain, nonatomic) XMSessionCookie *session; // @dynamic session;

@end

