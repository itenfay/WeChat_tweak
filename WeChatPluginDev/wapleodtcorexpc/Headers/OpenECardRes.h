//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, InputMobileItem, NSString, OpenSuccItem, PopItem;

@interface OpenECardRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindToken; // @dynamic bindToken;
@property(retain, nonatomic) PopItem *guideInfo; // @dynamic guideInfo;
@property(retain, nonatomic) InputMobileItem *inputTips; // @dynamic inputTips;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *rettext; // @dynamic rettext;
@property(retain, nonatomic) OpenSuccItem *succTips; // @dynamic succTips;
@property(retain, nonatomic) NSString *verifyMsgDesc; // @dynamic verifyMsgDesc;

@end

