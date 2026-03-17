//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderLiveShopWindowProductItem, FinderWindowProductInfo, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveGetShopProductDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @dynamic productInfo;
@property(retain, nonatomic) FinderLiveShopWindowProductItem *productItem; // @dynamic productItem;
@property(retain, nonatomic) NSString *shopRequestId; // @dynamic shopRequestId;

@end

