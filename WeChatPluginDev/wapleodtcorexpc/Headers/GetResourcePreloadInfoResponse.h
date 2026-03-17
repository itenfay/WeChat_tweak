//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface GetResourcePreloadInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) unsigned int preloadPercentage; // @dynamic preloadPercentage;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

