//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenReportClientInfo, NSString;

@interface MMListenSearchSugRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) MMListenReportClientInfo *reportClientInfo; // @dynamic reportClientInfo;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *sugId; // @dynamic sugId;
@property(nonatomic) int type; // @dynamic type;

@end

