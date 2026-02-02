//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AfterPlaceOrderCommReq, BaseRequest, NSString;

@interface BusiF2FSucPageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AfterPlaceOrderCommReq *afterPlaceorderCommReq; // @dynamic afterPlaceorderCommReq;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int faultFlag; // @dynamic faultFlag;
@property(nonatomic) unsigned long long faultRetryClientTime; // @dynamic faultRetryClientTime;
@property(nonatomic) unsigned int faultRetryCnt; // @dynamic faultRetryCnt;
@property(retain, nonatomic) NSString *sucPageExtend; // @dynamic sucPageExtend;

@end

