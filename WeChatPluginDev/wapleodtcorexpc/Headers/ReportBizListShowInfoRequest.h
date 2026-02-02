//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, RedDotReportItem;

@interface ReportBizListShowInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actType; // @dynamic actType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int enterPos; // @dynamic enterPos;
@property(nonatomic) unsigned long long enterTimestampMs; // @dynamic enterTimestampMs;
@property(nonatomic) unsigned int exitPos; // @dynamic exitPos;
@property(nonatomic) unsigned long long exposeSessionId; // @dynamic exposeSessionId;
@property(retain, nonatomic) RedDotReportItem *reddotReportItem; // @dynamic reddotReportItem;
@property(retain, nonatomic) NSMutableArray *reportList; // @dynamic reportList;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sessionid; // @dynamic sessionid;

@end

