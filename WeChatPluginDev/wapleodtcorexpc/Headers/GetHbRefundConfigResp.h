//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetHbRefundConfigResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *entranceName; // @dynamic entranceName;
@property(retain, nonatomic) NSString *entranceTitle; // @dynamic entranceTitle;
@property(nonatomic) _Bool reddot; // @dynamic reddot;
@property(retain, nonatomic) NSString *refundLingqianDesc; // @dynamic refundLingqianDesc;
@property(retain, nonatomic) NSString *refundLingqianTitle; // @dynamic refundLingqianTitle;
@property(retain, nonatomic) NSString *refundOriginDesc; // @dynamic refundOriginDesc;
@property(retain, nonatomic) NSString *refundOriginTitle; // @dynamic refundOriginTitle;
@property(retain, nonatomic) NSMutableArray *refundTime; // @dynamic refundTime;
@property(retain, nonatomic) NSString *refundTimeTitle; // @dynamic refundTimeTitle;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *topTip; // @dynamic topTip;

@end

