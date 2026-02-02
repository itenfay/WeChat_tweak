//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, Material, NSString;

@interface GetInteractionMaterialResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) Material *material; // @dynamic material;
@property(retain, nonatomic) NSString *msg; // @dynamic msg;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) NSString *traceId; // @dynamic traceId;

@end

