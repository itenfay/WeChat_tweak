//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, ReportSDKItem, ReportTime;

@interface ReportSDKItemData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *dataJson; // @dynamic dataJson;
@property(retain, nonatomic) NSString *eventId; // @dynamic eventId;
@property(retain, nonatomic) ReportTime *eventTime; // @dynamic eventTime;
@property(retain, nonatomic) ReportSDKItem *item; // @dynamic item;
@property(nonatomic) unsigned int itemRetryCnt; // @dynamic itemRetryCnt;
@property(retain, nonatomic) NSString *localItemRequestId; // @dynamic localItemRequestId;

@end

