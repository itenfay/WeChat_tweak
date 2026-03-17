//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData;

@class WXPBGeneratedMessage;

@interface GetDefaultRedpacketRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *localCacheBuffer; // @dynamic localCacheBuffer;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

