//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CardMiniAppInfo, NSString;

@interface GetCardEntranceStyleResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool cardHomePageIsNewVersion; // @dynamic cardHomePageIsNewVersion;
@property(nonatomic) _Bool isCardHomePageV2; // @dynamic isCardHomePageV2;
@property(nonatomic) unsigned int isTradeAreaVersion; // @dynamic isTradeAreaVersion;
@property(nonatomic) unsigned int newVersionStyle; // @dynamic newVersionStyle;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) CardMiniAppInfo *tradeAreaVersionMiniAppInfo; // @dynamic tradeAreaVersionMiniAppInfo;

@end

