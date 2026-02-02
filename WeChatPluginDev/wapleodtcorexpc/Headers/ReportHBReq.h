//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ReportHBReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *recvUserName; // @dynamic recvUserName;
@property(nonatomic) int reportType; // @dynamic reportType;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *sendUserName; // @dynamic sendUserName;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

