//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString;

@interface GetFaceCheckActionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *actionData; // @dynamic actionData;
@property(retain, nonatomic) NSString *actionHint; // @dynamic actionHint;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long bioId; // @dynamic bioId;
@property(retain, nonatomic) NSString *colorData; // @dynamic colorData;
@property(retain, nonatomic) NSString *personId; // @dynamic personId;
@property(nonatomic) float reductionRatio; // @dynamic reductionRatio;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSData *selectData; // @dynamic selectData;
@property(retain, nonatomic) NSString *takeMessage; // @dynamic takeMessage;

@end

