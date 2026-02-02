//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, C2CMsgNode, HPCardOperItem, HPRealNameInfo, HoneyUserDetail, MakeSureButton, NSString;

@interface GetHoneyPayCardResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) C2CMsgNode *c2Cmsg; // @dynamic c2Cmsg;
@property(retain, nonatomic) HoneyUserDetail *detail; // @dynamic detail;
@property(retain, nonatomic) HPCardOperItem *operItem; // @dynamic operItem;
@property(retain, nonatomic) HPRealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) MakeSureButton *toRemind; // @dynamic toRemind;

@end

