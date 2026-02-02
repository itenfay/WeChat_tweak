//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GameReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *customJson; // @dynamic customJson;
@property(nonatomic) unsigned int opStatus; // @dynamic opStatus;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) NSString *openId; // @dynamic openId;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;

@end

