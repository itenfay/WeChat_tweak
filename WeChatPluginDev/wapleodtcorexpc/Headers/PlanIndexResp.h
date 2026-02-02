//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, PlanIndexResp_Banner;

@interface PlanIndexResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) PlanIndexResp_Banner *banner; // @dynamic banner;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *indexDesc; // @dynamic indexDesc;
@property(nonatomic) unsigned long long limitCnt; // @dynamic limitCnt;
@property(retain, nonatomic) NSString *overPlanlimitDesc; // @dynamic overPlanlimitDesc;
@property(retain, nonatomic) NSMutableArray *planList; // @dynamic planList;
@property(retain, nonatomic) NSString *productDesc; // @dynamic productDesc;
@property(nonatomic) int redirectPage; // @dynamic redirectPage;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

