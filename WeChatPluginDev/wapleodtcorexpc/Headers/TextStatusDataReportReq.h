//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface TextStatusDataReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long clientReportTimeMs; // @dynamic clientReportTimeMs;
@property(retain, nonatomic) NSString *json; // @dynamic json;
@property(nonatomic) unsigned int schemaId; // @dynamic schemaId;

@end

