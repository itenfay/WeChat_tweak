//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WxaEcEntranceInfo_IconUrl, WxaEcEntranceInfo_MiniAppConfig, WxaEcEntranceInfo_WxaEcLiteAppJumpInfo;

@interface WxaEcEntranceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WxaEcEntranceInfo_IconUrl *frontIcon; // @dynamic frontIcon;
@property(nonatomic) unsigned int isOwnShop; // @dynamic isOwnShop;
@property(nonatomic) unsigned int isShopTag; // @dynamic isShopTag;
@property(nonatomic) unsigned int isShow; // @dynamic isShow;
@property(retain, nonatomic) WxaEcEntranceInfo_WxaEcLiteAppJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(nonatomic) unsigned long long mainShopBizuin; // @dynamic mainShopBizuin;
@property(retain, nonatomic) NSString *miniappAppUsername; // @dynamic miniappAppUsername;
@property(retain, nonatomic) WxaEcEntranceInfo_MiniAppConfig *miniappInfo; // @dynamic miniappInfo;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) unsigned int shopType; // @dynamic shopType;
@property(retain, nonatomic) NSString *tailIcon; // @dynamic tailIcon;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

