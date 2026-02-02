//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CRGameChannelReportInfo;

@interface GetGameDyeReportInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool needReport; // @dynamic needReport;
@property(retain, nonatomic) CRGameChannelReportInfo *reportInfo; // @dynamic reportInfo;
@property(nonatomic) int reportType; // @dynamic reportType;

@end

