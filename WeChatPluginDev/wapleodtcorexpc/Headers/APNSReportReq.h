//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface APNSReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *apnsjson; // @dynamic apnsjson;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int receivedTimestamp; // @dynamic receivedTimestamp;

@end

