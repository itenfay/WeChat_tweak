//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest;

@class WXPBGeneratedMessage;

@interface VoiceOperateSwitchMchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(nonatomic) unsigned long long shopId; // @dynamic shopId;

@end

