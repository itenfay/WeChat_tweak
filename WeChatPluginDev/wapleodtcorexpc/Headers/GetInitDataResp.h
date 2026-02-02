//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetInitDataResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int environment; // @dynamic environment;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *offerid; // @dynamic offerid;
@property(retain, nonatomic) NSString *openKey; // @dynamic openKey;
@property(retain, nonatomic) NSString *openid; // @dynamic openid;
@property(retain, nonatomic) NSString *pf; // @dynamic pf;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *sessionType; // @dynamic sessionType;
@property(retain, nonatomic) NSString *usableProductId; // @dynamic usableProductId;

@end

