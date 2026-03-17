//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, ReportDeviceInfo;

@class WXPBGeneratedMessage;

@interface WxaAppIDKeyBatchReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *recordList; // @dynamic recordList;
@property(retain, nonatomic) ReportDeviceInfo *reportDeviceInfo; // @dynamic reportDeviceInfo;

@end

