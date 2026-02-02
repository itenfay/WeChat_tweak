//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PaySubscribeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *friendPayCountStr; // @dynamic friendPayCountStr;
@property(nonatomic) unsigned int hasPaySubscribeEntry; // @dynamic hasPaySubscribeEntry;
@property(retain, nonatomic) NSString *paySubscribeEntryUrl; // @dynamic paySubscribeEntryUrl;

@end

