//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, BizChat, NSString;

@class WXPBGeneratedMessage;

@interface UpdateBizChatReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;
@property(retain, nonatomic) BizChat *chat; // @dynamic chat;

@end

