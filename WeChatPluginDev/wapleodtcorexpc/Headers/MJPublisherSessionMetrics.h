//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MJMetricsCustomContent, NSString;

@interface MJPublisherSessionMetrics : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) long long beginTimeStamp; // @dynamic beginTimeStamp;
@property(retain, nonatomic) NSString *endReason; // @dynamic endReason;
@property(nonatomic) int enterScene; // @dynamic enterScene;
@property(retain, nonatomic) NSString *entryType; // @dynamic entryType;
@property(nonatomic) long long firstImpressionTimeCostMs; // @dynamic firstImpressionTimeCostMs;
@property(retain, nonatomic) NSString *lastStateId; // @dynamic lastStateId;
@property(retain, nonatomic) NSString *lastViewId; // @dynamic lastViewId;
@property(retain, nonatomic) NSString *maasVersion; // @dynamic maasVersion;
@property(retain, nonatomic) MJMetricsCustomContent *mcMetrics; // @dynamic mcMetrics;
@property(nonatomic) int metricsType; // @dynamic metricsType;
@property(nonatomic) long long metricsVersion; // @dynamic metricsVersion;
@property(nonatomic) int parentEnterScene; // @dynamic parentEnterScene;
@property(retain, nonatomic) MJMetricsCustomContent *resultInfoMc; // @dynamic resultInfoMc;
@property(retain, nonatomic) MJMetricsCustomContent *resultInfoMcMaterial; // @dynamic resultInfoMcMaterial;
@property(retain, nonatomic) MJMetricsCustomContent *resultInfoMedia; // @dynamic resultInfoMedia;
@property(retain, nonatomic) MJMetricsCustomContent *resultInfoSc; // @dynamic resultInfoSc;
@property(retain, nonatomic) NSString *resultOriginType; // @dynamic resultOriginType;
@property(retain, nonatomic) MJMetricsCustomContent *scMetrics; // @dynamic scMetrics;
@property(retain, nonatomic) MJMetricsCustomContent *scPreload; // @dynamic scPreload;
@property(retain, nonatomic) MJMetricsCustomContent *scPreviewPref; // @dynamic scPreviewPref;
@property(retain, nonatomic) MJMetricsCustomContent *scRecordPref; // @dynamic scRecordPref;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) MJMetricsCustomContent *startupOptions; // @dynamic startupOptions;
@property(nonatomic) long long totalDownloadBytes; // @dynamic totalDownloadBytes;
@property(nonatomic) long long totalDurationMs; // @dynamic totalDurationMs;
@property(nonatomic) long long validationCode; // @dynamic validationCode;
@property(nonatomic) long long visitedStates; // @dynamic visitedStates;
@property(nonatomic) long long visitedViews; // @dynamic visitedViews;

@end

