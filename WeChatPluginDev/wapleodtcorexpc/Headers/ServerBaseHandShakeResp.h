//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSString;

@class WXPBGeneratedMessage;

@interface ServerBaseHandShakeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int expireTimeInterval; // @dynamic expireTimeInterval;
@property(retain, nonatomic) NSData *serverRandom; // @dynamic serverRandom;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int svrTime; // @dynamic svrTime;

@end

