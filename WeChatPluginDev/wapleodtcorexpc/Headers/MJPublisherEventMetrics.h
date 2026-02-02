//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MJMetricsCustomContent, NSString;

@interface MJPublisherEventMetrics : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MJMetricsCustomContent *details; // @dynamic details;
@property(nonatomic) int enterScene; // @dynamic enterScene;
@property(retain, nonatomic) NSString *entryType; // @dynamic entryType;
@property(retain, nonatomic) NSString *eventName; // @dynamic eventName;
@property(retain, nonatomic) NSString *maasVersion; // @dynamic maasVersion;
@property(nonatomic) int metricsType; // @dynamic metricsType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

