//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AfterPlaceOrderCommReq, BaseRequest, NSString, TokeMess;

@interface BusiF2FZeroCallBackReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AfterPlaceOrderCommReq *afterPlaceorderCommReq; // @dynamic afterPlaceorderCommReq;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int fromTryFlag; // @dynamic fromTryFlag;
@property(retain, nonatomic) TokeMess *tockMess; // @dynamic tockMess;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(retain, nonatomic) NSString *zeroPayExtend; // @dynamic zeroPayExtend;

@end

