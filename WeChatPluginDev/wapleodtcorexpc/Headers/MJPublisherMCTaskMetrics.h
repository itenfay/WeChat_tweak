//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MJMetricsCustomContent, NSString;

@interface MJPublisherMCTaskMetrics : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *assetOriginType; // @dynamic assetOriginType;
@property(nonatomic) long long beginTimeStamp; // @dynamic beginTimeStamp;
@property(retain, nonatomic) MJMetricsCustomContent *details; // @dynamic details;
@property(retain, nonatomic) NSString *endReason; // @dynamic endReason;
@property(nonatomic) int enterScene; // @dynamic enterScene;
@property(retain, nonatomic) NSString *entryType; // @dynamic entryType;
@property(retain, nonatomic) MJMetricsCustomContent *extDetails0; // @dynamic extDetails0;
@property(retain, nonatomic) NSString *maasVersion; // @dynamic maasVersion;
@property(nonatomic) int metricsType; // @dynamic metricsType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *taskId; // @dynamic taskId;
@property(retain, nonatomic) NSString *taskName; // @dynamic taskName;
@property(nonatomic) long long totalDurationMs; // @dynamic totalDurationMs;

@end

