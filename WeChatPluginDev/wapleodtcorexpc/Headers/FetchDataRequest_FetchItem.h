//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FetchDataRequest_FetchItem_LaunchParam, NSString;

@class WXPBGeneratedMessage;

@interface FetchDataRequest_FetchItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int fetchType; // @dynamic fetchType;
@property(retain, nonatomic) FetchDataRequest_FetchItem_LaunchParam *preFetchParam; // @dynamic preFetchParam;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

