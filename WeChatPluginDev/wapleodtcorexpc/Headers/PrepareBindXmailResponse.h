//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface PrepareBindXmailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *loginCallbackUrl; // @dynamic loginCallbackUrl;
@property(retain, nonatomic) NSString *wxHeadUrl; // @dynamic wxHeadUrl;
@property(retain, nonatomic) NSString *wxLoginUrl; // @dynamic wxLoginUrl;
@property(retain, nonatomic) NSString *wxRegMailAddr; // @dynamic wxRegMailAddr;

@end

