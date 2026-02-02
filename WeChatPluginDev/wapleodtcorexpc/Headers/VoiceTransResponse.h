//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface VoiceTransResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int disasterSkipVoiceTrans; // @dynamic disasterSkipVoiceTrans;
@property(nonatomic) unsigned int interval; // @dynamic interval;
@property(nonatomic) unsigned int maxPacketSize; // @dynamic maxPacketSize;
@property(nonatomic) unsigned int needReportResult; // @dynamic needReportResult;
@property(nonatomic) int vtcount; // @dynamic vtcount;
@property(retain, nonatomic) NSMutableArray *vtlist; // @dynamic vtlist;

@end

