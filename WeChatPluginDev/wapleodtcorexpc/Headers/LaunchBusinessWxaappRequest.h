//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface LaunchBusinessWxaappRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) NSString *referrerAppid; // @dynamic referrerAppid;
@property(retain, nonatomic) NSString *referrerUrl; // @dynamic referrerUrl;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

