//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface BizChatSearchContactReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(nonatomic) unsigned int offset; // @dynamic offset;

@end

