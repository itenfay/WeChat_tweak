//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, Remind;

@class WXPBGeneratedMessage;

@interface SetMsgRemindRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) Remind *remind; // @dynamic remind;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

