//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface JSAPIAuthInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authDesc; // @dynamic authDesc;
@property(nonatomic) unsigned int authStatus; // @dynamic authStatus;
@property(retain, nonatomic) NSString *authSubDesc; // @dynamic authSubDesc;
@property(retain, nonatomic) NSString *jsapiName; // @dynamic jsapiName;

@end

