//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface MMListenReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *appCtx; // @dynamic appCtx;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(nonatomic) int useNewReport; // @dynamic useNewReport;

@end

