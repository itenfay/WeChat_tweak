//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderWxAppInfo, NSData, NSMutableArray, NSString;

@interface FinderLiveGetShopWindowProductResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) FinderWxAppInfo *customerServiceApp; // @dynamic customerServiceApp;
@property(retain, nonatomic) NSString *defaultBuyPageAppid; // @dynamic defaultBuyPageAppid;
@property(retain, nonatomic) NSString *defaultBuyPagePath; // @dynamic defaultBuyPagePath;
@property(nonatomic) unsigned int isStandardCsAppEnabled; // @dynamic isStandardCsAppEnabled;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int orderCnt; // @dynamic orderCnt;
@property(retain, nonatomic) NSString *orderPageAppid; // @dynamic orderPageAppid;
@property(retain, nonatomic) NSString *orderPageUrl; // @dynamic orderPageUrl;
@property(retain, nonatomic) NSMutableArray *preloadCtrlList; // @dynamic preloadCtrlList;
@property(retain, nonatomic) NSString *prerenderPagePath; // @dynamic prerenderPagePath;
@property(retain, nonatomic) NSMutableArray *productList; // @dynamic productList;
@property(retain, nonatomic) NSString *shopAddProductAppid; // @dynamic shopAddProductAppid;
@property(retain, nonatomic) NSString *shopAddProductAppusername; // @dynamic shopAddProductAppusername;
@property(retain, nonatomic) NSString *shopAddProductUrl; // @dynamic shopAddProductUrl;
@property(retain, nonatomic) NSString *shopAppUsername; // @dynamic shopAppUsername;
@property(retain, nonatomic) NSString *shopAppid; // @dynamic shopAppid;
@property(retain, nonatomic) NSString *shopExtraData; // @dynamic shopExtraData;
@property(retain, nonatomic) NSString *shopRequestId; // @dynamic shopRequestId;
@property(retain, nonatomic) NSString *shopWindowId; // @dynamic shopWindowId;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;

@end

