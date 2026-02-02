//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetNetworkInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(nonatomic) int ispId; // @dynamic ispId;
@property(retain, nonatomic) NSString *networkId; // @dynamic networkId;
@property(retain, nonatomic) NSString *networkIdCtx; // @dynamic networkIdCtx;

@end

