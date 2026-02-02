//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface GetABTestRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clientTimestamp; // @dynamic clientTimestamp;
@property(retain, nonatomic) NSMutableArray *clientexplist; // @dynamic clientexplist;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int lastTimestamp; // @dynamic lastTimestamp;

@end

