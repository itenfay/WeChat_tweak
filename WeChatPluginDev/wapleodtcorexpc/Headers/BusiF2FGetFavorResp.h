//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BusiF2FFavorCommResp, ExtraBuyInfo, NSString;

@interface BusiF2FGetFavorResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ExtraBuyInfo *extraBuy; // @dynamic extraBuy;
@property(retain, nonatomic) BusiF2FFavorCommResp *favorCommResp; // @dynamic favorCommResp;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

