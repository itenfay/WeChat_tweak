//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AffCgiRequest_AffCgiInfo, AffCgiRequest_AffCgiTransferInfo, NSData;

@interface AffCgiRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) AffCgiRequest_AffCgiInfo *ilink; // @dynamic ilink;
@property(nonatomic) _Bool longPolling; // @dynamic longPolling;
@property(nonatomic) unsigned int longPollingTimeout; // @dynamic longPollingTimeout;
@property(retain, nonatomic) AffCgiRequest_AffCgiInfo *mmnet; // @dynamic mmnet;
@property(nonatomic) unsigned long long taskId; // @dynamic taskId;
@property(nonatomic) unsigned int timeout; // @dynamic timeout;
@property(retain, nonatomic) AffCgiRequest_AffCgiTransferInfo *transferInfo; // @dynamic transferInfo;

@end

