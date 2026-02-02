//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AmbDataReportPageInfo, NSMutableArray, NSString;

@interface AmbDataReportStandardViewEvent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AmbDataReportPageInfo *curPageInfo; // @dynamic curPageInfo;
@property(retain, nonatomic) NSString *eventId; // @dynamic eventId;
@property(retain, nonatomic) NSMutableArray *params; // @dynamic params;
@property(retain, nonatomic) AmbDataReportPageInfo *refPageInfo; // @dynamic refPageInfo;
@property(retain, nonatomic) NSMutableArray *routeRules; // @dynamic routeRules;
@property(retain, nonatomic) AmbDataReportPageInfo *sourcePageInfo; // @dynamic sourcePageInfo;
@property(nonatomic) unsigned long long time; // @dynamic time;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

