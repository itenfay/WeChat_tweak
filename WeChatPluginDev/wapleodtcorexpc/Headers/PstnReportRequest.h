//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinString_t;

@interface PstnReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long callSeq; // @dynamic callSeq;
@property(retain, nonatomic) SKBuiltinString_t *channelReport; // @dynamic channelReport;
@property(retain, nonatomic) SKBuiltinString_t *clientReport; // @dynamic clientReport;
@property(retain, nonatomic) SKBuiltinString_t *engineReport; // @dynamic engineReport;
@property(nonatomic) unsigned int gotAnswer; // @dynamic gotAnswer;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;

@end

