//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AppMsgCommDataReport, BaseRequest, NSMutableArray;

@interface AppMsgCommDataReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) AppMsgCommDataReport *commFields; // @dynamic commFields;
@property(retain, nonatomic) NSMutableArray *report; // @dynamic report;

@end

