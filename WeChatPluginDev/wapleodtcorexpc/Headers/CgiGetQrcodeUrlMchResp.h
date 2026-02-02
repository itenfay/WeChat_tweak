//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ApplyCellInfo, BaseResponse, CoverInfo, MenuItem, NSData, NSMutableArray, NSString, QRActionInfo, ReceiveOptionInfo;

@interface CgiGetQrcodeUrlMchResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ApplyCellInfo *applyCell; // @dynamic applyCell;
@property(retain, nonatomic) CoverInfo *applyMaskInfo; // @dynamic applyMaskInfo;
@property(retain, nonatomic) CoverInfo *applyMaskInfoV2; // @dynamic applyMaskInfoV2;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MenuItem *bottomItem; // @dynamic bottomItem;
@property(retain, nonatomic) NSString *bottomLeftIconUrl; // @dynamic bottomLeftIconUrl;
@property(nonatomic) _Bool bottomRightArrowFlag; // @dynamic bottomRightArrowFlag;
@property(nonatomic) unsigned long long currentShopId; // @dynamic currentShopId;
@property(nonatomic) unsigned int entranceType; // @dynamic entranceType;
@property(retain, nonatomic) QRActionInfo *longPressAction; // @dynamic longPressAction;
@property(retain, nonatomic) NSString *mchHeadImgUrl; // @dynamic mchHeadImgUrl;
@property(retain, nonatomic) NSString *mchShopName; // @dynamic mchShopName;
@property(retain, nonatomic) NSMutableArray *moreSettingCell; // @dynamic moreSettingCell;
@property(nonatomic) unsigned int qrcodeLevel; // @dynamic qrcodeLevel;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) _Bool receiveOptionEntrance; // @dynamic receiveOptionEntrance;
@property(retain, nonatomic) ReceiveOptionInfo *receiveOptionInfo; // @dynamic receiveOptionInfo;
@property(nonatomic) unsigned int refreshUrlInterval; // @dynamic refreshUrlInterval;
@property(retain, nonatomic) NSData *saveNotifyInfo; // @dynamic saveNotifyInfo;
@property(retain, nonatomic) QRActionInfo *screenShotAction; // @dynamic screenShotAction;
@property(retain, nonatomic) NSString *selectShopDesc; // @dynamic selectShopDesc;
@property(retain, nonatomic) NSMutableArray *shopList; // @dynamic shopList;
@property(nonatomic) _Bool showShopFlag; // @dynamic showShopFlag;

@end

