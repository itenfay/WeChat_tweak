//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface SnsWithTaPageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) unsigned int limit; // @dynamic limit;
@property(nonatomic) unsigned int nextPageType; // @dynamic nextPageType;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

