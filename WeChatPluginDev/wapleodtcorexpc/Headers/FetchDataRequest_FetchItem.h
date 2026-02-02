//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FetchDataRequest_FetchItem_LaunchParam, NSString;

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

