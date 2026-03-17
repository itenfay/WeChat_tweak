//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface ExtSession : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *serverId; // @dynamic serverId;
@property(retain, nonatomic) SKBuiltinBuffer_t *sessionKey; // @dynamic sessionKey;
@property(nonatomic) unsigned int sessionType; // @dynamic sessionType;

@end

