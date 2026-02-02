//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface IPInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *domainName; // @dynamic domainName;
@property(retain, nonatomic) NSMutableArray *ipStrings; // @dynamic ipStrings;
@property(nonatomic) int retcode; // @dynamic retcode;
@property(nonatomic) unsigned int ttl; // @dynamic ttl;

@end

