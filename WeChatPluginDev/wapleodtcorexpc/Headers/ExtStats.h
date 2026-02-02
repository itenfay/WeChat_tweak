//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ExtStatsReddotInfo, FinderLiveAggregationCardReportRequest, FinderLiveEndPageReportInfo, FinderLiveGuideInfoItem, FinderLivePromoteComponentReportInfo, NSData, NSMutableArray, NSString;

@interface ExtStats : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAggregationCardReportRequest *aggrCardReport; // @dynamic aggrCardReport;
@property(retain, nonatomic) FinderLiveEndPageReportInfo *endPageReport; // @dynamic endPageReport;
@property(retain, nonatomic) NSData *feedActionValue; // @dynamic feedActionValue;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *funcMsgReportExtInfo; // @dynamic funcMsgReportExtInfo;
@property(retain, nonatomic) FinderLiveGuideInfoItem *guideInfoReport; // @dynamic guideInfoReport;
@property(retain, nonatomic) NSMutableArray *jumpinfoReportList; // @dynamic jumpinfoReportList;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) FinderLivePromoteComponentReportInfo *promoteReport; // @dynamic promoteReport;
@property(retain, nonatomic) ExtStatsReddotInfo *reddotInfo; // @dynamic reddotInfo;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int videoDuration; // @dynamic videoDuration;

@end

