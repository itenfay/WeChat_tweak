//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class RetryExtraParam;

@class WXPBGeneratedMessage;

@interface RetryStrategy : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int delayMs; // @dynamic delayMs;
@property(retain, nonatomic) RetryExtraParam *retryExtraParam; // @dynamic retryExtraParam;

@end

