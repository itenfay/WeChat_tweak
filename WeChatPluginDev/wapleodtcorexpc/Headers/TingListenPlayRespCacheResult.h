//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MMListenPlayResponse;

@class WXPBGeneratedMessage;

@interface TingListenPlayRespCacheResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long expireTimestamp; // @dynamic expireTimestamp;
@property(retain, nonatomic) MMListenPlayResponse *playResponse; // @dynamic playResponse;

@end

