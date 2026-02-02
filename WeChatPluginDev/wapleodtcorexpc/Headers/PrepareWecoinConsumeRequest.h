//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface PrepareWecoinConsumeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(nonatomic) int businessId; // @dynamic businessId;
@property(retain, nonatomic) NSString *consumeProductId; // @dynamic consumeProductId;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSData *extReq; // @dynamic extReq;
@property(retain, nonatomic) NSString *reportSessionId; // @dynamic reportSessionId;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;

@end

