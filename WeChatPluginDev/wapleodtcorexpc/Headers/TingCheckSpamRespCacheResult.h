//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MMListenCheckSpamResponse;

@class WXPBGeneratedMessage;

@interface TingCheckSpamRespCacheResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCheckSpamResponse *checkSpamResponse; // @dynamic checkSpamResponse;
@property(nonatomic) unsigned long long expirationTimestamp; // @dynamic expirationTimestamp;

@end

