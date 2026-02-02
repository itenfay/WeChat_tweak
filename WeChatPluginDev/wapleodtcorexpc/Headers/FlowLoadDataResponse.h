//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CgiProfileClockData, CgiTraceClockData, NewLifeStreamResponse;

@interface FlowLoadDataResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long nativeCgiCostTime; // @dynamic nativeCgiCostTime;
@property(retain, nonatomic) CgiProfileClockData *profileClockData; // @dynamic profileClockData;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(retain, nonatomic) NewLifeStreamResponse *streamResponse; // @dynamic streamResponse;
@property(retain, nonatomic) CgiTraceClockData *traceClockData; // @dynamic traceClockData;

@end

