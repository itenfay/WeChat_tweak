//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface RequestWxaHBResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *errorwording; // @dynamic errorwording;
@property(nonatomic) unsigned int pollingTimesPerSecond; // @dynamic pollingTimesPerSecond;
@property(nonatomic) unsigned int pollingTotalSeconds; // @dynamic pollingTotalSeconds;
@property(retain, nonatomic) NSString *reqkey; // @dynamic reqkey;
@property(retain, nonatomic) NSString *sendid; // @dynamic sendid;
@property(nonatomic) unsigned int wxahbStatus; // @dynamic wxahbStatus;

@end

