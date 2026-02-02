//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetPackageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int appusernameVersion; // @dynamic appusernameVersion;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(nonatomic) int fee; // @dynamic fee;
@property(retain, nonatomic) NSString *offerid; // @dynamic offerid;
@property(retain, nonatomic) NSString *openKey; // @dynamic openKey;
@property(retain, nonatomic) NSString *orderId; // @dynamic orderId;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *urlParams; // @dynamic urlParams;

@end

