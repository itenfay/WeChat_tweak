//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ClientStatsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int exposeCount; // @dynamic exposeCount;
@property(nonatomic) unsigned long long exposeInterval; // @dynamic exposeInterval;
@property(nonatomic) unsigned long long firstExposeTime; // @dynamic firstExposeTime;
@property(nonatomic) _Bool hadSyncColdTime; // @dynamic hadSyncColdTime;
@property(nonatomic) unsigned long long lastExposeInterval; // @dynamic lastExposeInterval;
@property(nonatomic) unsigned long long lastExposeTimeStamp; // @dynamic lastExposeTimeStamp;
@property(nonatomic) unsigned long long lastReportTimeStamp; // @dynamic lastReportTimeStamp;
@property(retain, nonatomic) NSString *oob; // @dynamic oob;
@property(nonatomic) unsigned long long receTime; // @dynamic receTime;

@end

