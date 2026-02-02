//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, RouteInfo, TablePageData, WeChatWalletInfo;

@class WXPBGeneratedMessage;

@interface QueryWeChatWalletResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(nonatomic) unsigned long long timeStamp; // @dynamic timeStamp;
@property(retain, nonatomic) WeChatWalletInfo *walletInfo; // @dynamic walletInfo;
@property(retain, nonatomic) TablePageData *walletPage; // @dynamic walletPage;

@end

