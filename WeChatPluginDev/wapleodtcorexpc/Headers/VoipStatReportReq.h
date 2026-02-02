//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, VoipStatReportData;

@interface VoipStatReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) VoipStatReportData *channelReportData; // @dynamic channelReportData;
@property(retain, nonatomic) VoipStatReportData *dialReportData; // @dynamic dialReportData;
@property(nonatomic) unsigned int directConnCnt; // @dynamic directConnCnt;
@property(retain, nonatomic) NSMutableArray *directConnReports; // @dynamic directConnReports;
@property(retain, nonatomic) VoipStatReportData *engineExtReportData; // @dynamic engineExtReportData;
@property(nonatomic) unsigned int engineMpReportCnt; // @dynamic engineMpReportCnt;
@property(retain, nonatomic) NSMutableArray *engineMpReports; // @dynamic engineMpReports;
@property(retain, nonatomic) VoipStatReportData *engineReportData; // @dynamic engineReportData;
@property(retain, nonatomic) NSMutableArray *natReport; // @dynamic natReport;
@property(nonatomic) unsigned int natReportCnt; // @dynamic natReportCnt;
@property(nonatomic) unsigned int relayConnCnt; // @dynamic relayConnCnt;
@property(retain, nonatomic) NSMutableArray *relayConnReports; // @dynamic relayConnReports;
@property(retain, nonatomic) VoipStatReportData *reportData; // @dynamic reportData;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;

@end

