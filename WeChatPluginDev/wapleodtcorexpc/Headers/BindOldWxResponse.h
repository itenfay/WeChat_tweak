//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface BindOldWxResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *oldAlias; // @dynamic oldAlias;
@property(retain, nonatomic) NSString *oldUsername; // @dynamic oldUsername;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

